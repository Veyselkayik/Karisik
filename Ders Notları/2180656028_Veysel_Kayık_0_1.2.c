#include <stdio.h>
#include <math.h>
/* Veysel Kayýk , 2180656028 , Bilgisayar Programlama
, odev0_1 , 07.06.2020 */

main(){
 printf("2180656028 numarali Veysel Kayik'in Bilgisayar Programlama dersinin\n ''odev1_0'' adli 07.06.2020 tarihli odevini yapacagiz.\n");
    //Ust satýrda istenildigi uzere bilgileri yazdýrdým
    
	int x,sonuc;
	 //degiskenleri tanimladim
	
	x=1;
	 // degiskene ilk degeri atadým	
	sonuc=2*pow(x+3,4)-3*pow(x+4,2)+5*(x+1)+17; 
	//islemi yaptirdim
	printf("x=1 f(1)=%d",sonuc);
	 //sonucu yazdirdim	
    if(sonuc%2==1) printf("(tek sonuc)\n");
	 //kalani ogrenerek 1e esitse neyi yazdirmasi gerektigini yazdirdim
	else printf("(cift sonuc)\n"); 
	//degilse neyi yazdiracagini gosterdim


	x=2;
	 // degiskene ikinci degeri atadým		
	sonuc=2*pow(x+3,4)-3*pow(x+4,2)+5*(x+1)+17; 
	//islemi yaptirdim
	printf("x=2 f(2)=%d",sonuc);
	 //sonucu yazdirdim
    if(sonuc%2==1) printf("(tek sonuc)\n"); 
	//kalani ogrenerek 1e esitse ney, yazdirmasi gerektigini yazdirdim
	else printf("(cift sonuc)\n");
	//degilse neyi yazdiracagini gosterdim

	x=3;
	 // degiskene ucuncu degeri atadým	
	sonuc=2*pow(x+3,4)-3*pow(x+4,2)+5*(x+1)+17; 
	//islemi yaptirdim
	printf("x=3 f(3)=%d",sonuc); 
	//sonucu yazdirdim	
    if(sonuc%2==1) printf("(tek sonuc)\n"); 
	//kalani ogrenerek 1e esitse ney, yazdirmasi gerektigini yazdirdim
	else printf("(cift sonuc)\n");
	//degilse neyi yazdiracagini gosterdim
	
}
