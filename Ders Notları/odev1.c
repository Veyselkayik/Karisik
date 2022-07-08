#include <stdio.h>

main(){
	int sayi[8]; //Diziyi tanimladim
	
	int i; // Dizinin elemanlarini kullaniciden aldim
	for(i=0;i<8;i++){
		printf("Lutfen %dinci sayiyi giriniz\n",i+1);
		scanf("%d",&sayi[i]);
	}
		
	// Bu bolumde sayilari buyukten kucuge dogru siraladim
	int x,y,gecici;
	for(x=0;x<8;x++){
		for(y=0;y<8;y++)
		if(sayi[y]<sayi[y+1]){
			gecici=sayi[y];
			sayi[y]=sayi[y+1];
			sayi[y+1]=gecici;
	


	}

	
		}	
	// Bu bolumde en kucuk sayi ve en buyuk sayiyi bulan donguyu yaptim
	int	buyuk=sayi[0];
	int kucuk=sayi[0];
	int j;
	for(j=0;j<8;j++){
		if(buyuk<sayi[j]) buyuk=sayi[j];
		if(kucuk>sayi[j]) kucuk=sayi[j];
	}
	
	
//Sonuclari yazdirdim	
	printf("En buyuk sayi ile en kucuk sayinin farki %d dir\n",buyuk-kucuk);
	int a;
	for(a=0;a<8;a++) printf("%d > ",sayi[a]);
}
