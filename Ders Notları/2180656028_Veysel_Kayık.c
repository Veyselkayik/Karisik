void terskopya(char*);
void terskopya(char *p) {
	printf("Kelimenin tersten yazilisi=");
	int i=0,a=0;
	while(p[a]!=0)
	a++;
	for(i=a-1;i>=0;i--){
		putchar(*(p+i));
		
	}	
}
#include <stdio.h>
int main(int argc, char*argv[]){
	char*kelime1="Merhaba C Programlamaya Hos Geldiniz";
	terskopya(kelime1);
	return 0;
}
