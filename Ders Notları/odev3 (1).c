#include <stdio.h>
#include <string.h>

main(){
	char kelime[40]; //kelimeyi tanimladim
	
	printf("Lutfen kelimeyi giriniz\n");//kelimeyi kullanicidan aldim
	gets(kelime);
	

	int i;//kelimenin harf sayisini bulan donguyu yaptim
	for(i=0;kelime[i]!='\0';i++);
	
	
	
	int a=i/2;//kelimenin harf sayisini ikiye bolerek dongunun ne kadar donmesi gerektigini buldum
	
	/*bu bolumde kelimenin bir yarisini diger yarisina harf harf kiyaslayip eger ayniysa cyi arttýrdým, 
	c ile dongu sayisi esit ise palindrome, degil ise palindrome olmadigini belirttim ve sonuclari yazdirdim
	*/
	int j,c;
	for(j=0;j<a;j++){
		if(kelime[j]==kelime[i-j-1]) c++;
	}
	if(c==j) printf("Girdiginiz kelime palindromedir\n");
	else printf("Girdiginiz kelime palindrome degildir\n");
	

	printf("Girdiginiz kelimenin harf sayisi %ddir",i);

}
