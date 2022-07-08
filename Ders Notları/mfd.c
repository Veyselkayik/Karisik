#include<stdlib.h>
#include<stdio.h>

int main() {

	int* ptr;
	int n,x;
	int i;
//degiskenleri tanimladim
	printf("Yazdirmak istediginiz eleman sayisini giriniz\n");
	//Kullanicidan eleman sayisini istedim
	scanf("%d", &n);
	//eleman sayisini n' e tanimladim
	ptr = (int*)calloc(n, sizeof(int));
	if (ptr==NULL) {
		printf("Hafiza alinamadi.\n");
		exit(0);
	}
	else {
		printf("\ncalloc ile %d tane tam sayi icin hafizada basarili bir sekilde alan ayrildi.\n\n", n);
	}

	for (i = 0; i < n; i++  ) {
		
		ptr[i] = i+1;
		
	}
	printf("Dizinin elemanlari\n");
	for (i = 0; i < n; i++) {
		printf("%d\n", ptr[i]);
	}
	
	printf("\nYazdirmak istediginiz, ilk degerden daha buyuk bir eleman sayisi giriniz\n");
	scanf("%d", &x);
	while (x <= n) {
		printf("\nYazdirmak istediginiz, ilk degerden daha buyuk bir eleman sayisi giriniz\n");
		scanf("%d", &x);
	}
	
	ptr = (int*)realloc(ptr, x * sizeof(int));
	
	
	for (i = 0; i < x; i++) {
		ptr[i] = i+1;
	}
	printf("\nDizinin tum elemanlari\n");
	for (i = 0; i < x; i++) {
		printf("%d\n", ptr[i]);
	}

	free(ptr);

}
