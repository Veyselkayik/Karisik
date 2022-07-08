#include <stdio.h>
#include <string.h>
#include <stdlib.h>
main(){
	char cumle[100000];//cumleyi tanýmladim ve kullaniciden aldim
	printf("Lutfen cumlenizi giriniz\n");
	gets(cumle);
	
	/*bu kisimde ilk harfi donguye sokmadan aldim ve sonra donguyu baslattim,
	dongude bosluktan sonraki harfi yazdirdim*/
	printf("%c",cumle[0]);
	int i;
	for(i=0;i<strlen(cumle);i++){
		
			if(cumle[i]==' ') printf("%c",cumle[i+1]);
	}
	
}

