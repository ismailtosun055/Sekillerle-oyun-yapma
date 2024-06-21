#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h> 
#include <time.h>

int main()
{
	char *tahta[20][20];
	int satir,sutun,i;
	char yon;
	
	int avcisatir=2;
    int avcisutun=4;
    
    int elmassatir,elmassutun,elmassatir1,elmassutun1,elmassatir2,elmassutun2,elmassatir3,elmassutun3,elmassatir4,elmassutun4;
    int mhfzsatir,mhfzsutun,mhfzsatir1,mhfzsutun1,mhfzsatir2,mhfzsutun2,mhfzsatir3,mhfzsutun3,mhfzsatir4,mhfzsutun4;
    
	srand(time(NULL));
	elmassatir=1+rand()%18;
    elmassutun=1+rand()%18;
    
	elmassatir1=1+rand()%18;
    elmassutun1=1+rand()%18;
    
    elmassatir2=1+rand()%18;
    elmassutun2=1+rand()%18;
    
    elmassatir3=1+rand()%18;
    elmassutun3=1+rand()%18;
    
    elmassatir4=1+rand()%18;
    elmassutun4=1+rand()%18;
    
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
    
    
    
    /*while(elmassatir==elmassatir1&&elmassutun==elmassutun1||elmassatir==elmassatir2&&elmassutun==elmassutun2||elmassatir==elmassatir3&&elmassutun==elmassutun3||elmassatir==elmassatir3&&elmassutun==elmassutun3||elmassatir==elmassatir4&&elmassutun==elmassutun4||elmassatir1==elmassatir2&&elmassutun1==elmassutun2||elmassatir1==elmassatir3&&elmassutun1==elmassutun3||elmassatir1==elmassatir4&&elmassutun1==elmassutun4||elmassatir2==elmassatir3&&elmassutun2==elmassutun3||elmassatir2==elmassatir4&&elmassutun2==elmassutun4||elmassatir3==elmassatir4&&elmassutun3==elmassutun4)*/
    
	
	while(mhfzsatir==elmassatir1&&mhfzsutun==elmassutun1||mhfzsatir==elmassatir2&&mhfzsutun==elmassutun2||mhfzsatir==elmassatir3&&mhfzsutun==elmassutun3||mhfzsatir==elmassatir4&&mhfzsutun==elmassutun4||mhfzsatir1==elmassatir2&&mhfzsutun1==elmassutun2||mhfzsatir1==elmassatir3&&mhfzsutun1==elmassutun3||mhfzsatir1==elmassatir4&&mhfzsutun1==elmassutun4||mhfzsatir2==elmassatir3&&mhfzsutun2==elmassutun3||mhfzsatir2==elmassatir4&&mhfzsutun2==elmassutun4||mhfzsatir3==elmassatir4&&mhfzsutun3==elmassutun4||elmassatir==elmassatir1&&elmassutun==elmassutun1||elmassatir==elmassatir2&&elmassutun==elmassutun2||elmassatir==elmassatir3&&elmassutun==elmassutun3||elmassatir==elmassatir3&&elmassutun==elmassutun3||elmassatir==elmassatir4&&elmassutun==elmassutun4||elmassatir1==elmassatir2&&elmassutun1==elmassutun2||elmassatir1==elmassatir3&&elmassutun1==elmassutun3||elmassatir1==elmassatir4&&elmassutun1==elmassutun4||elmassatir2==elmassatir3&&elmassutun2==elmassutun3||elmassatir2==elmassatir4&&elmassutun2==elmassutun4||elmassatir3==elmassatir4&&elmassutun3==elmassutun4||mhfzsatir==elmassatir&&mhfzsutun==elmassutun||mhfzsatir1==elmassatir1&&mhfzsutun1==elmassutun1||mhfzsatir2==elmassatir2&&mhfzsutun2==elmassutun2||mhfzsatir3==elmassatir3&&mhfzsutun3==elmassutun3||mhfzsatir4==elmassatir4&&mhfzsutun4==elmassutun4)
	{
		elmassatir=1+rand()%18;
        elmassutun=1+rand()%18;
    
        elmassatir1=1+rand()%18;
        elmassutun1=1+rand()%18;
    
        elmassatir2=1+rand()%18;
        elmassutun2=1+rand()%18;
    
        elmassatir3=1+rand()%18;
        elmassutun3=1+rand()%18;
    
        elmassatir4=1+rand()%18;
        elmassutun4=1+rand()%18;
    
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
	

    /*
    mhfzsatir=elmassatir+rand()%2;
    mhfzsutun=elmassutun+rand()%2;
    mhfzsatir=elmassatir-rand()%2;
    mhfzsutun=elmassutun-rand()%2;
    
    
    while(mhfzsatir==elmassatir&&mhfzsutun==elmassutun)
	{
		mhfzsatir=elmassatir+rand()%2;
        mhfzsutun=elmassutun+rand()%2;
        mhfzsatir=elmassatir-rand()%2;
        mhfzsutun=elmassutun-rand()%2;
	}
	
	mhfzsatir1=elmassatir1+rand()%2;
    mhfzsutun1=elmassutun1+rand()%2;
    mhfzsatir1=elmassatir1-rand()%2;
    mhfzsutun1=elmassutun1-rand()%2;
    
    
    while(mhfzsatir1==elmassatir1&&mhfzsutun1==elmassutun1)
	{
		mhfzsatir1=elmassatir1+rand()%2;
        mhfzsutun1=elmassutun1+rand()%2;
        mhfzsatir1=elmassatir1-rand()%2;
        mhfzsutun1=elmassutun1-rand()%2;
	}
	
	mhfzsatir2=elmassatir2+rand()%2;
    mhfzsutun2=elmassutun2+rand()%2;
    mhfzsatir2=elmassatir2-rand()%2;
    mhfzsutun2=elmassutun2-rand()%2;
    
    
    while(mhfzsatir2==elmassatir2&&mhfzsutun2==elmassutun2)
	{
		mhfzsatir2=elmassatir2+rand()%2;
        mhfzsutun2=elmassutun2+rand()%2;
        mhfzsatir2=elmassatir2-rand()%2;
        mhfzsutun2=elmassutun2-rand()%2;
	}
	
	mhfzsatir3=elmassatir3+rand()%2;
    mhfzsutun3=elmassutun3+rand()%2;
    mhfzsatir3=elmassatir3-rand()%2;
    mhfzsutun3=elmassutun3-rand()%2;
    
    
    while(mhfzsatir3==elmassatir3&&mhfzsutun3==elmassutun3)
	{
		mhfzsatir3=elmassatir3+rand()%2;
        mhfzsutun3=elmassutun3+rand()%2;
        mhfzsatir3=elmassatir3-rand()%2;
        mhfzsutun3=elmassutun3-rand()%2;
	}
	
	mhfzsatir4=elmassatir4+rand()%2;
    mhfzsutun4=elmassutun4+rand()%2;
    mhfzsatir4=elmassatir4-rand()%2;
    mhfzsutun4=elmassutun4-rand()%2;
    
    
    while(mhfzsatir4==elmassatir4&&mhfzsutun4==elmassutun4)
	{
		mhfzsatir4=elmassatir4+rand()%2;
        mhfzsutun4=elmassutun4+rand()%2;
        mhfzsatir4=elmassatir4-rand()%2;
        mhfzsutun4=elmassutun4-rand()%2;
	}*/
	
	
while(1){
	for(satir=0;satir<20;satir++)
	{
		for(sutun=0;sutun<20;sutun++)
		{
		    if(satir==0 || satir==19)
			{
			   tahta[satir][sutun]="-";
		    }
		    else if(sutun==0 || sutun==19)
			{
				tahta[satir][sutun]="|";
			}
			else
			{
				tahta[satir][sutun]=".";
			}
			
			tahta[avcisatir][avcisutun]="A";
			tahta[elmassatir][elmassutun]="E";
			tahta[elmassatir1][elmassutun1]="E";
			tahta[elmassatir2][elmassutun2]="E";
			tahta[elmassatir3][elmassutun3]="E";
			tahta[elmassatir4][elmassutun4]="E";
			
			tahta[mhfzsatir][mhfzsutun]="M";
			tahta[mhfzsatir1][mhfzsutun1]="M";
			tahta[mhfzsatir2][mhfzsutun2]="M";
			tahta[mhfzsatir3][mhfzsutun3]="M";
			tahta[mhfzsatir4][mhfzsutun4]="M";
			
			
			
			
			printf("%s",tahta[satir][sutun]);
		    
	   }
	   printf("\n");
	}
	
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
	
	
	if(avcisatir==elmassatir&&avcisutun==elmassutun||avcisatir==elmassatir1&&avcisutun==elmassutun1||avcisatir==elmassatir2&&avcisutun==elmassutun2||avcisatir==elmassatir3&&avcisutun==elmassutun3||avcisatir==elmassatir4&&avcisutun==elmassutun4)
	{
        printf("Tebrikler Kazandiniz Elmasi!!!\n\n");
    }

}
return 0;
}

