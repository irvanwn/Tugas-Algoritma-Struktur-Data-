#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[25];
    int cari,a, sum = 1;
    int jumlah = 0;

    printf("Jumlah Angka yang ingin di input : " );
    scanf("%d", &sum);

    printf("Masukan %d bilangan \n", sum);

        for (a = 1; a <= sum; a++){
        printf("Bilangan ke-%d : ",a);
        scanf("%d", &arr[a]);
        }

  printf("\n\nMasukan angka yang ingin dicari : ");
  scanf("%d", &cari);

    for (a = 1; a <= sum; a++)
    {
        if (arr[a] == cari)    /* If required element is found */
        {
        printf("Angka %d ditemukan pada indeks %d ", cari, a);
        jumlah++;
        //break;
        }
        if (jumlah > 0 && arr[a] == cari && a+1 != sum){
            //printf ("%d %d",a,sum);
            printf("dan ");
        }
    }
    if (jumlah == 0)
        printf("%d Tidak Ditemukan.\n", cari);
    else
        printf("\nAngka %d tampil sebanyak %d kali",cari,jumlah);

  return 0;
}
