#include <stdio.h>

int main()
{
 int tahun;
    printf ("Menghitung tahun kabisat \n\n");
    printf("Masukkan Tahun: ");
    scanf("%i", &tahun);
    if (tahun%100 != 0 && tahun%4 == 0){ 
        printf("Tahun kabisat");
    }
    else if(tahun%100 == 0 && tahun%400 == 0){ 
        printf("Tahun kabisat");
    }
    else if(tahun%100 == 0 && tahun%400 != 0){ 
        printf("Bukan tahun kabisat");
    }
    else {
        printf("Bukan tahun kabisat");
    }
  

 return 0;
}

