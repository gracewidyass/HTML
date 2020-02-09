#include<stdio.h>
int main(){
	int bocil;
	int i;
	
	printf("Masukkan Bocil: ");
	scanf("%d", &bocil);
	
	for(i=bocil; i>1; i--){
		printf("\nBocil Turun: %d", bocil);
		bocil=bocil-1;
		printf("\nMati 1 Tinggal: %d", bocil);
	}
	printf("\nTurun 1, tinggal induknya.");
	return 0;
}
