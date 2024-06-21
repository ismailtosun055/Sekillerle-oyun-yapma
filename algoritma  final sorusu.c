#include<stdio.h>
#include<stdlib.h>

int main()
{
	float toplam=0,sonuc;
	float i,x,faktoriyel=1,us=1;//burada deðerleri atadým.float biçiminde çünkü sonuç virgüllü çýkýyor
	
	printf("lutfen e'nin ussune bir sayi giriniz:");
	scanf("%f",&x);
	
	for(i=1;i<20;i++)//dögü 10 defa dönecek soruda öyle yazýyo
	{
		faktoriyel*=i;//burada ise her döngü döndüðünde factöriyeli hesaplýyor
		us*=x;//burada ise her döngü döndüðünde üssünü hesaplýyor
		toplam+=us/faktoriyel;//burada ise her döngü döndüðünde ayrý ayrý bu bölü kýsýmlarý topluyorum
	}
	
	sonuc=x+toplam;//en son olarakta ilk deðerimizi ekliyorum .yani aslýnda hocanýn bize verdiði formülü uyguluyoruz
	printf("%.2f",sonuc);
	
	return 0;
}
