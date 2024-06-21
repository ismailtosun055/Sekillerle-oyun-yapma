#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h> 
#include <time.h>
//Global deðiþkenler
int hak=3; //Oyundaki hakkýmýz.
long int gecenzaman=0; //Ýlk zamaný almak için kullandýðým deðiþken.
 
int main() {
    setlocale(LC_ALL, "Turkish");
 
    if(gecenzaman==0){ 
        gecenzaman = (long int)time(NULL); //Þuanki zamaný alýyoruz
    } 
 
    int satir,sutun; //Oyun tahtasýnýn satýr ve sütun 
    int yilansatir=1; //Yilanýn satýrý
    int yilansutun=2; //Yýlanýn sütunu
    int yemsatir; // Yemin satýrý
    int yemsutun; // Yemin sütunu
    char yon; // Yýlaný hareket ettirmek için kullandýðým deðiþken.
    char yon2; // Oyunu tekrar oynamak ister misiniz ? E/H için kullandýðým deðiþken.
    char yon3; // Oyunu kazandýktan sonra E/H kullandýðým deðiþken.
    char yon4;
 
    srand ( time(NULL) ); // Her açýlýþta farklý sayý üretmek için kullanýlan kod.
    yemsatir=1+rand()%10; //Yemin satýrýný rastgele belirliyoruz. 1<satýr<10
    yemsutun=1+rand()%10; // Yemin sütununu rastgele belirliyoruz.1<sütun<10
    char *tahta[12][12]; //Oyun tahtasýnýn dizisi.
 
    printf("Yýlan oyununa hoþ geldiniz, hareket için wasd tuþlarini kullanýnýz.\n");
while(1){
        long int gecenzaman2=((long int)time(NULL)); //Döngü her döndüðünde anlýk zamaný gecenzaman2'ye aktaracak.
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
                        printf("Oyunu kapattýnýz :(");
                        return 0;
                        break;
                        case 'Q':
                        printf("Oyunu kapattýnýz :(");
                        return 0;
                        break;
                        }
 
                        // süre dolma durumu
                        if((gecenzaman2-gecenzaman)>119){
                                system("CLS");
                                printf("Size verilen sürede oyunu tamamlayamadýnýz!!!\n\n");
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
            printf("Tebrikler Kazandýnýz!!!\n\n");
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
 
            hak=3; //Hakký tekrar 3 yapýyoruz.
            //Zamanlarý sýfýrlýyoruz.
            gecenzaman=0;
            gecenzaman2=0; 
            return main();
 
        }
 
            //Duvara carpma durumu
            if((yilansatir==1,2,3,4,5,6,7,8,9&&yilansutun==11)||(yilansatir==1,2,3,4,5,6,7,8,9&&yilansutun==0)||(yilansatir==0||yilansatir==11)){
 
                if(--hak>0){ 
                system("CLS");
                printf("Duvara carptýnýz!!! %d hakkýnýz kaldý.\n",hak);
                //Zamanlarý sýfýrlýyoruz.
                gecenzaman=0; 
                gecenzaman2=0;
                return main();
            }else{
                        system("CLS");
                printf("Baþarýsýz üç hakkýnýzý da tamamladýnýz!\n\n");
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
                printf("Yýlan oyununa hoþ geldiniz, hareket için wasd tuþlarini kullanýnýz.\n");
 
    } //while son
 
}
