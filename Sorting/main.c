#include <stdio.h>
#include <stdlib.h>

void tukar(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionsort(int array[], int sum) {
    for (int step = 0; step < sum - 1; step++) {
    int min_idx = step;
        for (int x = step + 1; x < sum; x++)
        {
            if (array[x] < array[min_idx])
            min_idx = x;
        }
    tukar(&array[min_idx], &array[step]);
    }
}



int main() {
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
    selectionsort(arr, sum);
    printf("\nArray yang sudah diurutkan : \n");
    for (int i = 0; i < sum; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
