#include<stdio.h>
#include<stdlib.h>

int main()
{
	float toplam=0,sonuc;
	float i,x,faktoriyel=1,us=1;//burada de�erleri atad�m.float bi�iminde ��nk� sonu� virg�ll� ��k�yor
	
	printf("lutfen e'nin ussune bir sayi giriniz:");
	scanf("%f",&x);
	
	for(i=1;i<20;i++)//d�g� 10 defa d�necek soruda �yle yaz�yo
	{
		faktoriyel*=i;//burada ise her d�ng� d�nd���nde fact�riyeli hesapl�yor
		us*=x;//burada ise her d�ng� d�nd���nde �ss�n� hesapl�yor
		toplam+=us/faktoriyel;//burada ise her d�ng� d�nd���nde ayr� ayr� bu b�l� k�s�mlar� topluyorum
	}
	
	sonuc=x+toplam;//en son olarakta ilk de�erimizi ekliyorum .yani asl�nda hocan�n bize verdi�i form�l� uyguluyoruz
	printf("%.2f",sonuc);
	
	return 0;
}
