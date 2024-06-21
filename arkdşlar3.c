#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h> 
#include <time.h>
#include <windows.h>

/* HAZIRLAYANLAR: KUTAY CERAN VE MUHAMMED YUSUF TOSUN*/

int main()
{
	char *tahta[12][12];
	int yon;
	int satir,sutun,i,can=3;
	int avcisatir=3;
    int avcisutun=5;
    int elmaskonum,elmaskonum1,elmaskonum2,elmaskonum3,elmaskonum4;
    int elmassatir,elmassutun,elmassatir1,elmassutun1,elmassatir2,elmassutun2,elmassatir3,elmassutun3,elmassatir4,elmassutun4;
    int mhfzsatir,mhfzsutun,mhfzsatir1,mhfzsutun1,mhfzsatir2,mhfzsutun2,mhfzsatir3,mhfzsutun3,mhfzsatir4,mhfzsutun4;
    int kontrol1=0,kontrol2=0,kontrol3=0,kontrol4=0,kontrol5=0,alinanelmas=0;
    
	srand(time(NULL));
	
	elmassatir=1+rand()%10;
    elmassutun=1+rand()%10;
    
	elmassatir1=1+rand()%10;
    elmassutun1=1+rand()%10;
    
    elmassatir2=1+rand()%10;
    elmassutun2=1+rand()%10;
    
    elmassatir3=1+rand()%10;
    elmassutun3=1+rand()%10;
    
    elmassatir4=1+rand()%10;
    elmassutun4=1+rand()%10;
    
    mhfzsatir=elmassatir+rand()%2;
    mhfzsutun=elmassutun+rand()%2;
    mhfzsatir=elmassatir-rand()%2;
    mhfzsutun=elmassutun-rand()%2;
    
    mhfzsatir1=elmassatir1+rand()%2;
    mhfzsutun1=elmassutun1+rand()%2;
    mhfzsatir1=elmassatir1-rand()%2;
    mhfzsutun1=elmassutun1-rand()%2;
    
    mhfzsatir2=elmassatir2+rand()%2;
    mhfzsutun2=elmassutun2+rand()%2;
    mhfzsatir2=elmassatir2-rand()%2;
    mhfzsutun2=elmassutun2-rand()%2;
    
    mhfzsatir3=elmassatir3+rand()%2;
    mhfzsutun3=elmassutun3+rand()%2;
    mhfzsatir3=elmassatir3-rand()%2;
    mhfzsutun3=elmassutun3-rand()%2;
    
    mhfzsatir4=elmassatir4+rand()%2;
    mhfzsutun4=elmassutun4+rand()%2;
    mhfzsatir4=elmassatir4-rand()%2;
    mhfzsutun4=elmassutun4-rand()%2;
 
    for(;can>0;)
	{
	
	while(avcisatir==mhfzsatir&&avcisutun==mhfzsutun||avcisatir==mhfzsatir1&&avcisutun==mhfzsutun1||avcisatir==mhfzsatir2&&avcisutun==mhfzsutun2||avcisatir==mhfzsatir3&&avcisutun==mhfzsutun3||avcisatir==mhfzsatir4&&avcisutun==mhfzsutun4||
	      avcisatir==elmassatir&&avcisutun==elmassutun||avcisatir==elmassatir1&&avcisatir==elmassutun1||avcisatir==elmassatir2&&avcisutun==elmassutun2||avcisatir==elmassatir3&&avcisatir==elmassutun3||avcisatir==elmassatir4&&avcisutun==elmassutun4||
		  mhfzsatir==elmassatir1&&mhfzsutun==elmassutun1||mhfzsatir==elmassatir2&&mhfzsutun==elmassutun2||mhfzsatir==elmassatir3&&mhfzsutun==elmassutun3||mhfzsatir==elmassatir4&&mhfzsutun==elmassutun4||mhfzsatir1==elmassatir2&&mhfzsutun1==elmassutun2||mhfzsatir1==elmassatir3&&mhfzsutun1==elmassutun3||mhfzsatir1==elmassatir4&&mhfzsutun1==elmassutun4||mhfzsatir2==elmassatir3&&mhfzsutun2==elmassutun3||mhfzsatir2==elmassatir4&&mhfzsutun2==elmassutun4||mhfzsatir3==elmassatir4&&mhfzsutun3==elmassutun4||
		  elmassatir==elmassatir1&&elmassutun==elmassutun1||elmassatir==elmassatir2&&elmassutun==elmassutun2||elmassatir==elmassatir3&&elmassutun==elmassutun3||elmassatir==elmassatir4&&elmassutun==elmassutun4||elmassatir1==elmassatir2&&elmassutun1==elmassutun2||elmassatir1==elmassatir3&&elmassutun1==elmassutun3||elmassatir1==elmassatir4&&elmassutun1==elmassutun4||elmassatir2==elmassatir3&&elmassutun2==elmassutun3||elmassatir2==elmassatir4&&elmassutun2==elmassutun4||elmassatir3==elmassatir4&&elmassutun3==elmassutun4||
		  mhfzsatir==elmassatir&&mhfzsutun==elmassutun||mhfzsatir1==elmassatir1&&mhfzsutun1==elmassutun1||mhfzsatir2==elmassatir2&&mhfzsutun2==elmassutun2||mhfzsatir3==elmassatir3&&mhfzsutun3==elmassutun3||mhfzsatir4==elmassatir4&&mhfzsutun4==elmassutun4||
		  mhfzsatir==0||mhfzsatir==12||mhfzsutun==0||mhfzsutun==12||mhfzsatir1==0||mhfzsatir1==12||mhfzsutun1==0||mhfzsutun1==12||mhfzsatir2==0||mhfzsatir2==12||mhfzsutun2==0||mhfzsutun2==12||mhfzsatir3==0||mhfzsatir3==12||mhfzsutun3==0||mhfzsutun3==12||mhfzsatir4==0||mhfzsatir4==12||mhfzsutun4==0||mhfzsutun4==12||
		  mhfzsatir==mhfzsatir1&&mhfzsutun==mhfzsutun1||mhfzsatir==mhfzsatir2&&mhfzsutun==mhfzsutun2||mhfzsatir==mhfzsatir3&&mhfzsutun==mhfzsutun3||mhfzsatir==mhfzsatir4&&mhfzsutun==mhfzsutun4||mhfzsatir1==mhfzsatir2&&mhfzsutun1==mhfzsutun2||mhfzsatir1==mhfzsatir3&&mhfzsutun1==mhfzsutun3||mhfzsatir1==mhfzsatir4&&mhfzsutun1==mhfzsutun4||mhfzsatir2==mhfzsatir3&&mhfzsutun2==mhfzsutun3||mhfzsatir2==mhfzsatir4&&mhfzsutun2==mhfzsutun4||mhfzsatir3==mhfzsatir4&&mhfzsutun3==mhfzsutun4)
	{
		elmassatir=1+rand()%10;
        elmassutun=1+rand()%10;
    
        elmassatir1=1+rand()%10;
        elmassutun1=1+rand()%10;

        elmassatir2=1+rand()%10;
        elmassutun2=1+rand()%10;
    
        elmassatir3=1+rand()%10;
        elmassutun3=1+rand()%10;
    
        elmassatir4=1+rand()%10;
        elmassutun4=1+rand()%10;
    
		mhfzsatir=elmassatir+rand()%2;
        mhfzsutun=elmassutun+rand()%2;
        mhfzsatir=elmassatir-rand()%2;
        mhfzsutun=elmassutun-rand()%2;

		mhfzsatir1=elmassatir1+rand()%2;
        mhfzsutun1=elmassutun1+rand()%2;
        mhfzsatir1=elmassatir1-rand()%2;
        mhfzsutun1=elmassutun1-rand()%2;

		mhfzsatir2=elmassatir2+rand()%2;
        mhfzsutun2=elmassutun2+rand()%2;
        mhfzsatir2=elmassatir2-rand()%2;
        mhfzsutun2=elmassutun2-rand()%2;

		mhfzsatir3=elmassatir3+rand()%2;
        mhfzsutun3=elmassutun3+rand()%2;
        mhfzsatir3=elmassatir3-rand()%2;
        mhfzsutun3=elmassutun3-rand()%2;

		mhfzsatir4=elmassatir4+rand()%2;
        mhfzsutun4=elmassutun4+rand()%2;
        mhfzsatir4=elmassatir4-rand()%2;
        mhfzsutun4=elmassutun4-rand()%2;
    }
    
    if(avcisatir==3||avcisutun==5)
	{ 
	  elmaskonum=abs(avcisatir-elmassatir)+abs(avcisutun-elmassutun);
	  elmaskonum1=abs(avcisatir-elmassatir1)+abs(avcisutun-elmassutun1);
	  elmaskonum2=abs(avcisatir-elmassatir2)+abs(avcisutun-elmassutun2);
	  elmaskonum3=abs(avcisatir-elmassatir3)+abs(avcisutun-elmassutun3);
	  elmaskonum4=abs(avcisatir-elmassatir4)+abs(avcisutun-elmassutun4);
	
      printf("avcinin 1.elmasa konumu:%d\n",elmaskonum);	
	  printf("avcinin 2.elmasa konumu:%d\n",elmaskonum1);
	  printf("avcinin 3.elmasa konumu:%d\n",elmaskonum2);	
	  printf("avcinin 4.elmasa konumu:%d\n",elmaskonum3);
	  printf("avcinin 5.elmasa konumu:%d\n",elmaskonum4);
	  
	  printf("\nAlinan elmas: %d",alinanelmas);
	  
	  printf("\nKalan Caniniz: %d\n",can);
	  
	 }

while(1){
	for(satir=0;satir<12;satir++)
	{
		for(sutun=0;sutun<12;sutun++)
		{
		    if(satir==0 || satir==11)
			{
			   tahta[satir][sutun]=" ";
		    }
		    else if(sutun==0 || sutun==11)
			{
				tahta[satir][sutun]=" ";
			}
			else
			{
			tahta[satir][sutun]=".";
			tahta[avcisatir][avcisutun]="A";
			tahta[elmassatir][elmassutun]="E" ;
			tahta[elmassatir1][elmassutun1]="E";
			tahta[elmassatir2][elmassutun2]="E";
			tahta[elmassatir3][elmassutun3]="E";
			tahta[elmassatir4][elmassutun4]="E";
			
			tahta[mhfzsatir][mhfzsutun]="M";
			tahta[mhfzsatir1][mhfzsutun1]="M";
			tahta[mhfzsatir2][mhfzsutun2]="M";
			tahta[mhfzsatir3][mhfzsutun3]="M";
			tahta[mhfzsatir4][mhfzsutun4]="M";
			}

			printf("%s",tahta[satir][sutun]);   
	   }
	   printf("\n");  
	}
	/*
	yon=getch();
	system("CLS");
	switch(yon)
	{
		case 'w':
		    avcisatir -= 1;
		break;
		case 'a':
			avcisutun -= 1;
		break;
		case 's':
		    avcisatir += 1;
		break;
		case 'd':
		    avcisutun += 1;
	    break;	
	}
	*/
	
	yon = getch ();
	system("CLS");
if (yon == 0 || yon == 224)
{
    switch (_getch ())
    {
        case 72:
            avcisatir -= 1;
            break;

        case 80:
            avcisatir += 1;
            break;

        case 75:
             avcisutun -= 1;
             break;
             
        case 77:
             avcisutun += 1;
             break;
    }
}

	while (avcisatir==0||avcisatir==11||avcisutun==0||avcisutun==11)
	{
		if(avcisatir==0){
			avcisatir=1;	
		}
		else if(avcisatir==11){
			avcisatir=10;	
		}
		else if(avcisutun==0){
			avcisutun=1;			
		}
		else if(avcisutun==11){
			avcisutun=10;			
		}
	}
	
    if(avcisatir==mhfzsatir&&avcisutun==mhfzsutun||avcisatir==mhfzsatir1&&avcisutun==mhfzsutun1||avcisatir==mhfzsatir2&&avcisutun==mhfzsutun2||avcisatir==mhfzsatir3&&avcisutun==mhfzsutun3||avcisatir==mhfzsatir4&&avcisutun==mhfzsutun4)
    {
    	printf("Muhafiza Yakalandiniz\n");
    	avcisatir=3;
    	avcisutun=5;
    	can--;
	}
	if(can==0)
	{
		printf("\nCaniniz Kalmadi\n\nOyun Sona Erdi\n");
		return 0;
	}
    
	  elmaskonum=abs(avcisatir-elmassatir)+abs(avcisutun-elmassutun);
	  if(elmaskonum==0)
	  {
	  	kontrol1=1;
	  	elmassatir=0;
	  	elmassutun=0;
	  	mhfzsatir=0;
	  	mhfzsutun=0;
	  	tahta[mhfzsatir][mhfzsutun]=" ";
	  }
	  else if(kontrol1==0)
	  {
	  	printf("avcinin 1.elmasa konumu:%d\n",elmaskonum);	
	  }
	  elmaskonum1=abs(avcisatir-elmassatir1)+abs(avcisutun-elmassutun1);
	  if(elmaskonum1==0)
	  {
	  	kontrol2=1;
	  	elmassatir1=0;
	  	elmassutun1=0;
	  	mhfzsatir1=0;
	  	mhfzsutun1=0;
	  }
	  else if(kontrol2==0)
	  {
	  	printf("avcinin 2.elmasa konumu:%d\n",elmaskonum1);	
	  }
	  elmaskonum2=abs(avcisatir-elmassatir2)+abs(avcisutun-elmassutun2);
	  if(elmaskonum2==0)
	  {
	  	kontrol3=1;
	  	elmassatir2=0;
	  	elmassutun2=0;
	  	mhfzsatir2=0;
	  	mhfzsutun2=0;
	  }
	  else if(kontrol3==0)
	  {
	  	printf("avcinin 3.elmasa konumu:%d\n",elmaskonum2);	
	  }
	  elmaskonum3=abs(avcisatir-elmassatir3)+abs(avcisutun-elmassutun3);
	  if(elmaskonum3==0)
	  {
	  	kontrol4=1;
	  	elmassatir3=0;
	  	elmassutun3=0;
	  	mhfzsatir3=0;
	  	mhfzsutun3=0;
	  }
	  else if(kontrol4==0)
	  {
	  	printf("avcinin 4.elmasa konumu:%d\n",elmaskonum3);	
	  }
	  elmaskonum4=abs(avcisatir-elmassatir4)+abs(avcisutun-elmassutun4);
	  if(elmaskonum4==0)
	  {
	  	kontrol5=1;
	  	elmassatir4=0;
	  	elmassutun4=0;
	  	mhfzsatir4=0;
	  	mhfzsutun4=0;
	  }
	  else if(kontrol5==0)
	  {
	  	printf("avcinin 5.elmasa konumu:%d\n",elmaskonum4);	
	  }
	
	  alinanelmas=kontrol1+kontrol2+kontrol3+kontrol4+kontrol5;
	  printf("\nAlinan elmas: %d",alinanelmas);
	  
	  if(alinanelmas==5)
	  {
		system("CLS");
		printf("OYUNU KAZANDINIZ....");
		return 0;
		
	  }
	  
	  printf("\nKalan Caniniz: %d\n",can);
	  
    
	if(avcisatir==elmassatir&&avcisutun==elmassutun||avcisatir==elmassatir1&&avcisutun==elmassutun1||avcisatir==elmassatir2&&avcisutun==elmassutun2||avcisatir==elmassatir3&&avcisutun==elmassutun3||avcisatir==elmassatir4&&avcisutun==elmassutun4)
	{
		printf("\nTebrikler Elmasi Kazandiniz\n");
	}
}
}
	return 0;
}
