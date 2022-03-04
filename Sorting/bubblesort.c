#include <stdio.h>
#include <stdlib.h>


void tukar(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubblesort(int arr[], int n)
{
   for (int x = 0; x < n-1; x++)
       for (int y = 0; y < n-x-1; y++)
           if (arr[y] > arr[y+1])
              tukar(&arr[y], &arr[y+1]);
}

int main()
{
    int arr[25];
    int cari,a, sum = 0;
    int jumlah = 0;

    printf("Jumlah Angka yang ingin di input : " );
    scanf("%d", &sum);

    printf("Masukan %d bilangan \n", sum);

        for (a = 0; a < sum; a++){
        printf("Bilangan ke-%d : ",a+1);
        scanf("%d", &arr[a]);
        }

    bubblesort(arr, sum);
    printf("\nBilangan yang sudah diurutkan : \n");
    for (int i=0; i < sum; i++){
        printf("%d ", arr[i]);
        }
        printf("\n");
    return 0;
}
