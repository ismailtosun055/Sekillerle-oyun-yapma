#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h> 
#include <time.h>
//Global de�i�kenler
int hak=3; //Oyundaki hakk�m�z.
long int gecenzaman=0; //�lk zaman� almak i�in kulland���m de�i�ken.
 
int main() {
    setlocale(LC_ALL, "Turkish");
 
    if(gecenzaman==0){ 
        gecenzaman = (long int)time(NULL); //�uanki zaman� al�yoruz
    } 
 
    int satir,sutun; //Oyun tahtas�n�n sat�r ve s�tun 
    int yilansatir=1; //Yilan�n sat�r�
    int yilansutun=2; //Y�lan�n s�tunu
    int yemsatir; // Yemin sat�r�
    int yemsutun; // Yemin s�tunu
    char yon; // Y�lan� hareket ettirmek i�in kulland���m de�i�ken.
    char yon2; // Oyunu tekrar oynamak ister misiniz ? E/H i�in kulland���m de�i�ken.
    char yon3; // Oyunu kazand�ktan sonra E/H kulland���m de�i�ken.
    char yon4;
 
    srand ( time(NULL) ); // Her a��l��ta farkl� say� �retmek i�in kullan�lan kod.
    yemsatir=1+rand()%10; //Yemin sat�r�n� rastgele belirliyoruz. 1<sat�r<10
    yemsutun=1+rand()%10; // Yemin s�tununu rastgele belirliyoruz.1<s�tun<10
    char *tahta[12][12]; //Oyun tahtas�n�n dizisi.
 
    printf("Y�lan oyununa ho� geldiniz, hareket i�in wasd tu�larini kullan�n�z.\n");
while(1){
        long int gecenzaman2=((long int)time(NULL)); //D�ng� her d�nd���nde anl�k zaman� gecenzaman2'ye aktaracak.
        for(satir=0;satir<12;satir++)
        {
            for(sutun=0;sutun<12;sutun++){
                    if(satir == 0 || satir == 11)
                    tahta[satir][sutun] = "-";
                    else if(sutun == 0 || sutun == 11)
                    tahta[satir][sutun] = "|";
                    else
                    tahta[satir][sutun] = ".";
 
                    tahta[yilansatir][yilansutun] = "X";
                    tahta[yemsatir][yemsutun] = "*";
 
                    printf("%s", tahta[satir][sutun]);
                                         }              
                    printf("\n");
 
        }
 
        yon=getch();
 
                    switch(yon){
                        case 's':
                        yilansatir+=1;
                        break;
                        case 'S':
                        yilansatir+=1;
                        break;
                        case 'w':
                        yilansatir-=1;
                        break;
                        case 'W':
                        yilansatir-=1;
                        break;
                        case 'a':
                        yilansutun-=1;
                        break;
                        case 'A':
                        yilansutun-=1;
                        break;
                        case 'd':
                        yilansutun+=1;
                        break;
                        case 'D':
                        yilansutun+=1;
                        break;
                        case 'q':
                        printf("Oyunu kapatt�n�z :(");
                        return 0;
                        break;
                        case 'Q':
                        printf("Oyunu kapatt�n�z :(");
                        return 0;
                        break;
                        }
 
                        // s�re dolma durumu
                        if((gecenzaman2-gecenzaman)>119){
                                system("CLS");
                                printf("Size verilen s�rede oyunu tamamlayamad�n�z!!!\n\n");
                                printf("Tekrar oynamak ister misiniz? E/H\n\n");
                    yon2: //Etiket          
                    yon2=getch();
                    switch(yon2){
                        case 'E':
                            system("CLS");
                            gecenzaman=0;
                            gecenzaman2=0;
                            return main();
                        break;
                        case 'e':
                            system("CLS");
                            gecenzaman=0;
                            gecenzaman2=0;
                            return main();
                        break;
                            case 'H':
                            return 0;
                        break;
                        case 'h':
                            return 0;
                        break;
                        } //Swich son
                            if("yon2!='E','e','H','h'"){
                                goto yon2;
                            }
 
                        }
 
            // Oyunu kazanma durumu
            if(yilansatir==yemsatir&&yilansutun==yemsutun){
                printf("%c","X");
            system("CLS");
            printf("Tebrikler Kazand�n�z!!!\n\n");
            printf("Tekrar oynamak ister misiniz? E/H\n\n");
 
            yon3: //Etiket
            yon3=getch();
                    switch(yon3){
                        case 'E':
                            system("CLS");
                            gecenzaman=0;
                            gecenzaman2=0;
                            return main();
                        break;
                        case 'e':
                            system("CLS");
                            gecenzaman=0;
                            gecenzaman2=0;
                            return main();
                        break;
                            case 'H':
                            return 0;
                        break;
                        case 'h':
                            return 0;
                        break;
                        }
                            if("yon3!='E','e','H','h'"){
                                    goto yon3;
                                }
 
            hak=3; //Hakk� tekrar 3 yap�yoruz.
            //Zamanlar� s�f�rl�yoruz.
            gecenzaman=0;
            gecenzaman2=0; 
            return main();
 
        }
 
            //Duvara carpma durumu
            if((yilansatir==1,2,3,4,5,6,7,8,9&&yilansutun==11)||(yilansatir==1,2,3,4,5,6,7,8,9&&yilansutun==0)||(yilansatir==0||yilansatir==11)){
 
                if(--hak>0){ 
                system("CLS");
                printf("Duvara carpt�n�z!!! %d hakk�n�z kald�.\n",hak);
                //Zamanlar� s�f�rl�yoruz.
                gecenzaman=0; 
                gecenzaman2=0;
                return main();
            }else{
                        system("CLS");
                printf("Ba�ar�s�z �� hakk�n�z� da tamamlad�n�z!\n\n");
                printf("Tekrar oynamak ister misiniz? E/H\n\n");
                hak=3;
            yon4: //Etiket
            yon4=getch();
                    switch(yon4){
                        case 'E':
                            system("CLS");
                            gecenzaman=0;
                            gecenzaman2=0;
                            return main();
                        break;
                        case 'e':
                            system("CLS");
                            gecenzaman=0;
                            gecenzaman2=0;
                            return main();
                        break;
                            case 'H':
                            return 0;
                        break;
                        case 'h':
                            return 0;
                        break;
                        }
                            if("yon4!='E','e','H','h'"){
                                    goto yon3;
                                }
 
                return main();                      
            }
 
                            }
 
             system("CLS");
                printf("Y�lan oyununa ho� geldiniz, hareket i�in wasd tu�larini kullan�n�z.\n");
 
    } //while son
 
}
