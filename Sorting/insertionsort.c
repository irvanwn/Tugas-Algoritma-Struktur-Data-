#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int sum)
{
    int  key, y;
    for (int x = 1; x < sum; x++) {
        key = arr[x];
        y = x - 1;

        while (y >= 0 && arr[y] > key) {
            arr[y + 1] = arr[y];
            y = y - 1;
        }
        arr[y + 1] = key;
    }
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

    insertionSort(arr, sum);

    printf("\nBilangan Yang Sudah diurutkan : \n");
        for (int i = 0; i < sum; i++){
        printf("%d ", arr[i]);
        }
    printf("\n");

    return 0;
}
