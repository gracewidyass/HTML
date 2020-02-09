#include <stdio.h>
int main(){
	int marks[10], i, n, sum=0, avg;
	printf("Masukkan angka: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("Masukkan nilai%d: ",i+1);
		scanf("%d", &marks[i]);
		
		sum+=marks[i];
	}
	avg = sum/n;
	printf("rata-rata = %d", avg);
	return 0;
}
