#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<conio.h>

//sabit ifadeler icin define kullandik.

#define SATIR_SAYISI 10
#define SUTUN_SAYISI 10
#define AVCI_SATIR 2
#define AVCI_SUTUN 4
#define TOPLAM_ELMAS 5 // asker sayisi elmas sayisiyla esit oldugundan asker icin define kullanmadik.
#define MAX_AVCI_HAKKI 3


typedef struct
{
    int satir;
    int sutun;
    int elmas;
    int yakalanma;
} HazineAvcisi;

// oyun oynanan tahtayi tanimlamak icin kullandigimiz yapi.

typedef struct
{
    int tahta[SATIR_SAYISI][SUTUN_SAYISI];
    int kalanElmas;
    int elmasPozisyonlar[TOPLAM_ELMAS][2];// buradaki 2 x ve y eksenlerini ifade eder aynisi asagidaki icinde gecerli.
    int askerPozisyonlar[TOPLAM_ELMAS][2];
} Tahta;

//
void tahtayiGuncelle(Tahta *tahta);
void tahtayiYazdir(Tahta *tahta, HazineAvcisi *avci);
void yukariCik(HazineAvcisi *avci, Tahta *tahta);
void asagiIn(HazineAvcisi *avci, Tahta *tahta);
void solaDon(HazineAvcisi *avci, Tahta *tahta);
void sagaDon(HazineAvcisi *avci, Tahta *tahta);
void yakalanmaKontrol(HazineAvcisi *avci, Tahta *tahta);
void elmasKontrol(HazineAvcisi *avci, Tahta *tahta);
void mesafeYazdir(Tahta *tahta, HazineAvcisi *avci);

int main(void)
{
    printf("\n********************************HAZINE AVCISI*****************************************\n");
    printf("\n HAZIRLAYANLAR:\n");
    printf("-Oktay GUN \n-Abdulkadir BINER");

    // rastgele deger atamak icin rand fonksiyonu kullandik .
    //Her seferinde farkli bir noktaya atamsi icin srand fonksiyonunu kullandik.

    srand(time(NULL));

    Tahta tahta;
    HazineAvcisi avci = {AVCI_SATIR, AVCI_SUTUN, 0, 0};// elmas ve yakalanma degerlerini gosteriri.


   // Baslangicta alana elmaslari ve muhafizlari rastgele atadik.

    tahtayiGuncelle(&tahta);

   // Oyun avci tum elmaslari bulana kadar veya tum cani tukenen kadar devam ettirir.

    while (avci.elmas < TOPLAM_ELMAS && avci.yakalanma < MAX_AVCI_HAKKI)
    {

   // Ekrana alani ve avcinin mevcut konumu yazdirmak icin kullandigimiz yapi.

        tahtayiYazdir(&tahta, &avci);

        // avcinin mevcud konumunu ve her elmasa olan mesafelerini yazdirmak kullandigimiz yapi.

        mesafeYazdir(&tahta, &avci);

        printf("Hareket gir (w,a,s,d): ");

        char hareket;

        //scanf(" %c", &hareket);
        hareket=getch();
        system("Cls");
 
        switch (hareket)
        {
        case 'w':
            yukariCik(&avci, &tahta);
            break;
        case 'a':
            solaDon(&avci, &tahta);
            break;
        case 's':
            asagiIn(&avci, &tahta);
            break;
        case 'd':
            sagaDon(&avci, &tahta);
            break;
        default:
            printf("\nGecersiz bir tusa bastiniz.\n");
            break;
        }

        // Askere yakalanma durumunu kontrol etme.

        yakalanmaKontrol(&avci, &tahta);

        // Elmas bulunup bulunmadigini kontrol etmek icin kullandigimiz yapi.

        elmasKontrol(&avci, &tahta);

        if (tahta . kalanElmas == 0)

            break;
    }

    // Oyunun sonucunu ekrana yazdirmak icin kullandigimiz yapi.

    if (avci.elmas == TOPLAM_ELMAS)
    {
        printf("\nTEBRIKLER OYUNU KAZANDÝNÝZ!\n");
    }
    else
    {
        printf("\n**OYUN BITTI***\n");
    }

    return 0;
}

void tahtayiGuncelle(Tahta *tahta)
{
    // Tahtayi guncellemek ve sifirlamak icin kullandigimiz yapi.
int i = 0;
int j = 0;
    for (i = 0; i < SATIR_SAYISI; i++)
    {
        for (j = 0; j < SUTUN_SAYISI; j++)
        {
            tahta->tahta[i][j] = 0;// tahtada satir ve sutunu sifira esitledik tahtayi sýfýrladik.
        }
    }



    // Tahtaya elmasleri rastgele yerlestir.

    srand(time(0));
    

    for (i = 0; i < TOPLAM_ELMAS; i++)
    {
        int satir, sutun;
        do
        {
            satir = rand() % SATIR_SAYISI; // random sifirla on arasida deger atar.
            sutun = rand() % SUTUN_SAYISI; // randon sifirla on arasinda deger atar.
        } while (tahta->tahta[satir][sutun] != 0);
        tahta->tahta[satir][sutun] = 1;     //elmaslai 1 ile gosterdik.
        tahta->elmasPozisyonlar[i][0] = satir;
        tahta->elmasPozisyonlar[i][1] = sutun;
    }


    // askerler elmaslarin etrafina rastgele yerlestirmek icin kullandigimiz yapi.


    for (i = 0; i < TOPLAM_ELMAS; i++)
    {
        int satir, sutun;
        do
        {
            satir = rand() % 3 - 1 + tahta->elmasPozisyonlar[i][0]; //satir ve sutunda ikiser adet ihtimal var elmasin yerlesecegi.
            sutun = rand() % 3 - 1 + tahta->elmasPozisyonlar[i][1];

            // askerin elmas konumunda veya tahtanin disina konumlandirilmamsini engelleyen yapi.

            if (satir == tahta->elmasPozisyonlar[i][0] && sutun == tahta->elmasPozisyonlar[i][1])
            {
                continue;
            }
            if (satir < 0 || satir >= SATIR_SAYISI || sutun < 0 || sutun >= SUTUN_SAYISI)
            {
                continue;
            }
        } while (tahta->tahta[satir][sutun] != 0); // 0 tahtanin bos oldugunu gosterir.

        tahta->tahta[satir][sutun] = 2;
        tahta->askerPozisyonlar[i][0] = satir; //askerleri 2 ile gosterdik.
        tahta->askerPozisyonlar[i][1] = sutun;
    }

    //kalan elmas sayisini gosteren yapi.

    tahta->kalanElmas = TOPLAM_ELMAS;
}

void tahtayiYazdir(Tahta *tahta, HazineAvcisi *avci)
{
    printf("\n\n\n\n");
int i = 0;
int j = 0;
    for (i = 0; i < SATIR_SAYISI; i++)
    {
        for (j = 0; j < SUTUN_SAYISI; j++)
        {
            if (i == avci->satir && j == avci->sutun) //avci satir =2 ve avci sutun =4 A goster degilse  nokkta goster.
            {
                printf("A ");
            }
            else
            {
                printf(". ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

void yukariCik(HazineAvcisi *avci, Tahta *tahta)
{
    if (avci->satir > 0)
    {
        avci->satir--;
    }
    else
    {
        printf("\n\nyukari gidememzsin alan bitti.\n");
    }
}

void asagiIn(HazineAvcisi *avci, Tahta *tahta)
{
    if (avci->satir < SATIR_SAYISI - 1)
    {
        avci->satir++;
    }
    else
    {
        printf("\n\nasagiya gidemezsin alan bitti.\n");
    }
}

void solaDon(HazineAvcisi *avci, Tahta *tahta)
{
    if (avci->sutun > 0)
    {
        avci->sutun--;
    }
    else
    {
        printf("\n\nsola gidemezsin alan bitti.\n");
    }
}

void sagaDon(HazineAvcisi *avci, Tahta *tahta)
{
    if (avci->sutun < SUTUN_SAYISI - 1)
    {
        avci->sutun++;
    }
    else
    {
        printf("\n\nsaga gidemezsin alan bitti.\n");
    }
}

void yakalanmaKontrol(HazineAvcisi *avci, Tahta *tahta)
{

    // avcinin askere  yakalanip yakalanmadigini kontrol eden yapi.
int i = 0;
    for (i = 0; i < TOPLAM_ELMAS; i++)
    {
        if (avci->satir == tahta->askerPozisyonlar[i][0] && avci->sutun == tahta->askerPozisyonlar[i][1])
        {
            avci->yakalanma++;
            printf("\n\nasker tatrafindan yakalandin. Suan %d canin kaldi.", MAX_AVCI_HAKKI - avci->yakalanma);

            // avcinin konumunu 2,4 e sabitleyen yapi.

            avci->satir = AVCI_SATIR;
            avci->sutun = AVCI_SUTUN;

            break;
        }
    }
}

void elmasKontrol(HazineAvcisi *avci, Tahta *tahta)
{

    // avcinin elmasi bulup bulamadigini kontrol eden yapi.
int i = 0;
int j = i;
    for (i = 0; i < tahta->kalanElmas; i++)
    {
        if (avci->satir == tahta->elmasPozisyonlar[i][0] && avci->sutun == tahta->elmasPozisyonlar[i][1])
        {
            tahta->tahta[tahta->elmasPozisyonlar[i][0]][tahta->elmasPozisyonlar[i][1]] = 0;
            tahta->kalanElmas--;
            printf("\n\nTebrikler, bir elmas buldun! %d elmas kaldi.\n", tahta->kalanElmas);

            //

            for (j = i; j < tahta->kalanElmas; j++)
            {
                tahta->elmasPozisyonlar[j][0] = tahta->elmasPozisyonlar[j + 1][0];
                tahta->elmasPozisyonlar[j][1] = tahta->elmasPozisyonlar[j + 1][1];
            }
            break;
        }
    }
}

void mesafeYazdir(Tahta *tahta, HazineAvcisi *avci)

{
int i = 0;
    for (i = 0; i < tahta->kalanElmas; i++)
    {
        int mesafe = abs(tahta->elmasPozisyonlar[i][0] - avci->satir) + abs(tahta->elmasPozisyonlar[i][1] - avci->sutun); //abs mutlak deger fonksiyonudur.

        printf("Elmas %d Uzaklik: %d\n\n", i + 1, mesafe);
    }


}
/*HAZÝRLAYANLAR:

OKTAY GUN

ABDULKADIR BINER*/
