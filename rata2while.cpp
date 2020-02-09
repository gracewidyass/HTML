#include<stdio.h>

int main(){
	int i=1, x, n, sum=0, avg;
	
	printf("Masukkan banyak angka: ");
	scanf("%d", &n);
	
	while(i<=n){
		printf("Masukkan angka ke-%d:", i);
		scanf("%f",&x);
		sum=sum+x;
		i++;
	}
	avg=sum/n;
	printf("rata-rata= %.2f", avg);
}
