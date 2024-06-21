#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<unistd.h>
#include<Windows.h>


int main(int argc, char *argv[]){
	// diamond1 avcýsý oyununda kullanýlan deðiþkenlerdir gerekli yerlerde de kullanýlmýþtýr butun deðiþkenler burada degildir
	char p,a,live=3,arrowK,diaS=0;
	int matris1[12][12];
	int matris2[12][12];
	int i,j,k,wallC=0;
	int str=3,stn=5;
	int randomi[12];
	int randomj[12];
	int diamond1=3,diamond2=3,elmas3=3,diamond4=3,diamond5=3; 
	int guard1=2,guard2=2,guard3=2,guard4=2,guard5=2;
	int strdia1,strdia2,strdia3,strdia4,strdia5;
	 int stndia1,stndia2,stndia3,stndia4,stndia5;
	 int strgua1,strgua2,strgua3,strgua4,strgua5;
	 int stngua1,stngua2,stngua3,stngua4,stngua5;
	 int diamondmsf1,diamondmsf2,diamondmsf3,diamondmsf4,diamondmsf5,controltakeit1=0,controltakeit2=0,controltakeit3=0,controltakeit4=0,controltakeit5=0,alinanelmas=0;
	 
	 
	 srand(time(NULL));
	
  
	printf("ELMAS AVCISI\n");//SELAMLAMA KISMI
	sleep(2);
     printf("kurallari gormek icin (p) tusuna basiniz.\n");
     scanf("%c",&p);
     
    
    switch(p){
    	case'l': printf("1-avcimiz oyun tahtasinin 2. satirin 4. sutunundadir. \n");
    	        printf("2-oyunda elmaslari sakli konumdalarinda  bulmaniz gerekmektedir toplamda 5 tane elmas vardir. \n");
    	        printf("3-elmaslarin hemen bir komsu karesinde 1 muhafizi bulunmaktdir. bu muhafizler gözükmemektedir.  \n");
    	        printf("4-oyuncunun hareketi w yukari, s asagi, a sola, d saga hareketi kontrol etmektedir. \n");
    	        printf("5- 3 cani bulunmaktadir muhafizlere yakalandiginde bir cani azalmaktadir ve avci baslangic konumuna donmektedir. \n");
    	        printf("6- su an (2,4) konumundasiniz lutfen hareket ediniz. \n");
    	         break;
	     default:break;
	}
	
	printf("karakterlerimiz 1=avci,9=duvar, 0= tahtadaki hareket edilenecek arazilerdir\n");
	printf("oyunun baslamasi icin w a s d olan arrowKey tuslarindan birini yuslayiniz konumunun su anda 2. satirin 4. sutunundadir.");

	//MATRÝS2 üzerinde deneme yapýlan dizidir.
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			if(i==0||i==11){
				matris2[i][j]=9;
			}
			else if(j==0||j==11){
				matris2[i][j]=9;
			}
		
			else{
				matris2[i][j]=0;
			}
		}
	}
		
		for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			if(i==0||i==11){
				matris1[i][j]=9;
			}
			else if(j==0||j==11){
				matris1[i][j]=9;
			}
			else if(i==3 && j==5){
				matris1[i][j]=1;
			}
			else{
				matris1[i][j]=0;
			}
		}
		
		
	}
	// elmaslar ve muhafýzlarýn rastgele konumu buradan rund fonksiyonu ile ayarlandý	
     turnback:
	 strdia1=1+rand()%10;
	 strdia2=1+rand()%10;
	 strdia3=1+rand()%10;
	 strdia4=1+rand()%10;
	 strdia5=1+rand()%10;
	 stndia1=1+rand()%10;
	 stndia2=1+rand()%10;
	 stndia3=1+rand()%10;
	 stndia4=1+rand()%10;
	 stndia5=1+rand()%10;
	 
   setguard:
	 strgua1=1+rand()%10;
	 strgua2=1+rand()%10;
	 strgua3=1+rand()%10;
	 strgua4=1+rand()%10;
	 strgua5=1+rand()%10;
     stngua1=1+rand()%10;
     stngua2=1+rand()%10;
     stngua3=1+rand()%10;
     stngua4=1+rand()%10;
     stngua5=1+rand()%10;
	 // muhafýzlarýn elmasýn bir uzaðýnda olusunu kontrol etmek için iflerle istenilen konum dýsýna cýkýlmamasý saglandý.
	 if(strdia1==strdia2  && stndia1==stndia2){
	 	goto turnback;
	 }
	 
	if(strdia1==strdia3  && stndia1==stndia3){
	 	goto turnback;
	 }
	 if(strdia1==strdia4 && stndia1==stndia4){
	 	goto turnback;
	 }
	 if(strdia1==strdia5  && stndia1==stndia5){
	 	goto turnback;
	 }
	 if(strdia2==strdia3 && stndia2==stndia3){
	 	goto turnback;
	 }
	  if(strdia2==strdia4 && stndia2==stndia4){
	 	goto turnback;
	 }
	  if(strdia2==strdia5 && stndia2==stndia5){
	 	goto turnback;
	 }
	  if(strdia3==strdia4 && stndia3==stndia4){
	 	goto turnback;
	 }
	 if(strdia3==strdia5 && stndia3==stndia5){
	 	goto turnback;
	 }
	 if(strdia4==strdia5 && stndia4==stndia5){
	 	goto turnback;
	 }
	 
	if(strgua1==strgua2  && stngua1==stngua2){
	 	goto setguard;
	 }
	 
	if(strgua1==strgua3  && stngua1==stngua3){
	 	goto setguard;
	 }
	 if(strgua1==strgua4 && stngua1==stngua4){
	 	goto setguard;
	 }
	 if(strgua1==strgua5  && stngua1==stngua5){
	 	goto setguard;
	 }
	 if(strgua2==strgua3 && stngua2==stngua3){
	 	goto setguard;
	 }
	  if(strgua2==strgua4 && stngua2==stngua4){
	 	goto setguard;
	 }
	  if(strgua2==strgua5 && stngua2==stngua5){
	 	goto setguard;
	 }
	  if(strgua3==strgua4 && stngua3==stngua4){
	 	goto setguard;
	 }
	 if(strgua3==strgua5 && stngua3==stngua5){
	 	goto setguard;
	 }
	 if(strgua4==strgua5 && stngua4==stngua5){
	 	goto setguard;
	 }
	
	
	
	
	
	
	
	matris2[strdia1][stndia1]=3;
	matris2[strdia2][stndia2]=3;
	matris2[strdia3][stndia3]=3;
	matris2[strdia4][stndia4]=3;
	matris2[strdia5][stndia5]=3;
	
	if(abs(strdia1-strgua1)+abs(stndia1-stngua1)==1 && abs(strdia2-strgua2)+abs(stndia2-stngua2)==1 && abs(strdia3-strgua3)+abs(stndia3-stngua3)==1 && abs(strdia4-strgua4)+abs(stndia4-stngua4)==1 && abs(strdia5-strgua5)+abs(stndia5-stngua5)==1)
	{
		  matris2[strgua1][stngua1]=2;
		  matris2[strgua2][stngua2]=2;
		  matris2[strgua3][stngua3]=2;
		  matris2[strgua4][stngua4]=2;
		  matris2[strgua5][stngua5]=2;
	}
	else{
		goto setguard;
	}
  
  

 // duvara geldiðinde uyarý mahiyetinde duvarý geçemezsiniz komutu ekrana yazdýracak.
	wall:
		if(wallC==1)
		{
			printf("duvari geçemezsiniz...");
			
		}
		//live sýfýra ulaþana kadar hareketler burda dönecek w yukarý, s aþaðý, d saða, a ise sola hareketi saðlayacak biçimde iflerle düzenlenmiþ getche fonksiyonu kullanýldý.
   for(;live>0;){
    
    
    arrowK=getche();
   	 //a komutu sola hareket 
   	if(arrowK == 'A' || arrowK=='a'){
   		system("CLS");
   		if(matris2[str][stn-1]==9){
   			wallC=1;
   			goto wall;
		   }
		   else{
		   
   		if(matris2[strgua1][stngua1]==matris2[str][stn-1])
   		{
   			matris2[str][stn]=0;
   			str=3,stn=5;
   			matris2[str][stn]=1;
   			live--;
   			
   			
   				goto jump;
   				
			   
		   }
   		 matris2[str][stn-1]=1;
		   matris2[str][stn]=0;
		   stn--;
		   
		   	 for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			
			if(matris2[i][j]==1 || matris2[i][j]==9)	
				printf("%d\t",matris2[i][j]);
			else
				printf("0\t");	
		}
	     printf("\n");
   
}
// d komutu saða hareket
		   }
	}
   	
   	  	if(arrowK == 'd' || arrowK=='D'){
   		system("CLS");
  		if(matris2[str][stn+1]==9){
   			wallC=1;
   			goto wall;
		   }
		   else{
		   
   		if(matris2[strgua1][stngua1]==matris2[str][stn+1])
   		{
   			matris2[str][stn]=0;
   			str=3,stn=5;
   			matris2[str][stn]=1;
   			live--;
   			
   			
   				goto jump;
   				
			   
		   }
   		 matris2[str][stn+1]=1;
		   matris2[str][stn]=0;
		   stn++;
		   
		   	 for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			
			if(matris2[i][j]==1 || matris2[i][j]==9)	
				printf("%d\t",matris2[i][j]);
			else
				printf("0\t");	
		}
	     printf("\n");
   
}

		   }
		   }
		  // w komutu yukarý hareket 
	  	if(arrowK == 'w' || arrowK=='W'){
   		system("CLS");
  		if(matris2[str-1][stn]==9){
   			wallC=1;
   			goto wall;
		   }
		   else{
		   
   		if(matris2[strgua1][stngua1]==matris2[str-1][stn])
   		{
   			matris2[str][stn]=0;
   			str=3,stn=5;
   			matris2[str][stn]=1;
   			live--;
   			
   			
   				goto jump;
   				
			   
		   }
   		 matris2[str-1][stn]=1;
		   matris2[str][stn]=0;
		   str--;
		   
		   	 for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			
			if(matris2[i][j]==1 || matris2[i][j]==9)	
				printf("%d\t",matris2[i][j]);
			else
				printf("0\t");	
		}
	     printf("\n");
   
}

		   }
		   }
   	
   	// s komutu aþaðý hareket 
   	  	if(arrowK == 'S' || arrowK=='s'){
   		system("CLS");
  		if(matris2[str+1][stn]==9){
   			wallC=1;
   			goto wall;
		   }
		   else{
		   
   		if(matris2[strgua1][stngua1]==matris2[str+1][stn])
   		{
   			matris2[str][stn]=0;
   			str=3,stn=5;
   			matris2[str][stn]=1;
   			live--;
   			
   			
   				goto jump;
   				
			   
		   }
   		 matris2[str+1][stn]=1;
		   matris2[str][stn]=0;
		   str++;
		   
		   	 for(i=0;i<12;i++){
		for(j=0;j<12;j++){
			
			if(matris2[i][j]==1 || matris2[i][j]==9)	
				printf("%d\t",matris2[i][j]);
			else
				printf("0\t");	
		}
	     printf("\n");
   
}
		   }
		   }
   	
   	printf("*\n");
   	
   	// elmas uzaklýðý abs fonksiyonu ile mutlak deðer hesabý alýnýp hesaplandý kontrol alýnan bir tür bool deðiþkeni gibi kullanýldý eðer elmas uzaklýðý her bir elmas için sýfýra indiðinde o matrisin altýndaki konumundan silinecek þekilde yazdýrýldý. 
   	
   	diamondmsf1=abs(str-strdia1)+abs(stn-stndia1);
   	if(diamondmsf1==0)
   	{
   	
   		controltakeit1=1;
   		
	}
	else if(controltakeit1==0)
	{
		printf("Birinci elmasa uzakliginiz: %d \n",abs(str-strdia1)+abs(stn-stndia1));	
	}
   	diamondmsf2=abs(str-strdia2)+abs(stn-stndia2);
   	if(diamondmsf2==0)
   	{
   	
   		controltakeit2=1;
   		
	}
	else if(controltakeit2==0)
	{
		printf("ikinci elmasa uzakliginiz: %d \n",abs(str-strdia2)+abs(stn-stndia2));	
	}
		diamondmsf3=abs(str-strdia3)+abs(stn-stndia3);
   	if(diamondmsf3==0)
   	{
   	
   		controltakeit3=1;
   		
	}
	else if(controltakeit3==0)
	{
		printf("Ucuncu elmasa uzakliginiz: %d \n",abs(str-strdia3)+abs(stn-stndia3));	
	}
		diamondmsf4=abs(str-strdia4)+abs(stn-stndia4);
   	if(diamondmsf4==0)
   	{
   	
   		controltakeit4=1;
   		
	}
	else if(controltakeit4==0)
	{
		printf("Dorduncu elmasa uzakliginiz: %d \n",abs(str-strdia4)+abs(stn-stndia4));
	}
		diamondmsf5=abs(str-strdia5)+abs(stn-stndia5);
   	if(diamondmsf5==0)
   	{
   	
   		controltakeit5=1;
   		
	}
	else if(controltakeit5==0)
	{
		printf("Besinci elmasa uzakliginiz: %d \n",abs(str-strdia5)+abs(stn-stndia5));
	}
	// eðer bütün elmaslar alýndýðýnda oyunu kazandýnýz yazýsý ekrana çýkartýldý
	alinanelmas=controltakeit1+controltakeit2+controltakeit3+controltakeit4+controltakeit5;
	printf("ALINAN ELMASLAR = %d \n",alinanelmas);
	if(alinanelmas==5)
	{
		sleep(2);
		system("CLS");
		printf("OYUNU KAZANDINIZ....");
		goto finish;
	}
	// eðer elmaslarý toplarken 3 defa muhafýza yakalandýðýnda live deðeri 0 a ineceði için oyunu kaybettiniz yazýsý ekrana yazdýrýldý. 
	printf("KALAN CANINIZ = %d",live);
 	int yakalanma=1;
 	if(yakalanma==0){
 		jump:
 		printf("MUHAFIZA YAKALANDINIZ\n");
 		if(live==0){
 			printf("OYUN BITTI...");
 			sleep(2);
 			goto finish;
		 }
	 }
   }

	 
finish:
	exit(0);
	
}
