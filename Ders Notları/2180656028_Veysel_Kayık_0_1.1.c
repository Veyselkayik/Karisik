#include <stdio.h>
#include <math.h>
/* Veysel Kayýk , 2180656028 , Bilgisayar Programlama
, odev0_1 , 07.06.2020 */

main (){
	
printf("2180656028 numarali Veysel Kayik'in Bilgisayar Programlama dersinin\n ''odev1_0'' adli 07.06.2020 tarihli odevini yapacagiz.\n");
printf("Odevimize sizden 3 tam sayi alarak basliyoruz\n");
//istenilen bilgileri yazdirdim

float x,y,z,toplam,islem,ortalama; 
//degiskenleri tanimladim

printf("Lutfen bir tam sayi giriniz\n");
scanf("%f",&x);
printf("Lutfen 2. tam sayiyi giriniz\n");
scanf("%f",&y);
printf("Lutfen 3. tam sayiyi giriniz\n");
scanf("%f",&z);
//kullanicidan x,y, ve z tam sayilerini istedim
toplam=(x+y+z); 
//alinan sayileri toplayip 'toplam' degiskenine tanimladim

ortalama=(toplam/3);
//Alinan sayilerin toplamini 3e bolerek 'ortalama' ya tanimladim
islem=3*pow(x,4)*y*z+x/3-4*pow(x,2)*pow(y,3)*z;
//islemleri yazarak 'islem' e tanimladim

printf("Sayilerin ortalamasi %fdir\n",ortalama);

printf("Sayilarin toplami %fdir\n",toplam);

printf("Islemin sonucu %f'dir",islem);
//Sonuclarý yazdirdim
}
