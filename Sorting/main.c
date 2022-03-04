#include <stdio.h>

    int arr[25];
    int cari,a, sum = 0;
    int jumlah = 0;

void input()
{

    printf("Jumlah Angka yang ingin di input : " );
    scanf("%d", &sum);

    printf("Masukan %d bilangan \n", sum);

        for (a = 0; a < sum; a++){
        printf("Bilangan ke-%d : ",a+1);
        scanf("%d", &arr[a]);
        }

}

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

void insertionSort(int arr[], int n)
{
    int  key, y;
    for (int x = 1; x < n; x++) {
        key = arr[x];
        y = x - 1;

        while (y >= 0 && arr[y] > key) {
            arr[y + 1] = arr[y];
            y = y - 1;
        }
        arr[y + 1] = key;
    }
}

void selectionsort(int array[], int n) {
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

void print(int n)
{
    printf("Berikut Data Yang Telah Diurutkan : ");
    for (int i=0; i < n; i++){
    printf("%d ", arr[i]);
    }
    printf("\n");
}

void enterkembali()
{
    printf("\n\nTekan apa saja untuk kembali...");
    system("pause > nul");
    system("cls");
}

int main()
{
    int pilih;
menu:
    printf("1. Input Data\n");
    printf("2. Bubble Sort\n");
    printf("3. insertion Sort\n");
    printf("4. Selection Sort\n");
    printf("5. Tampilkan Data\n");
    printf("6. Exit\n");
    printf("Pilih : ");
    scanf("%d",&pilih);
    if (pilih == 1){
    system("cls");
    input();
    enterkembali();
    goto menu;
    }
    else if(pilih == 2){
        system("cls");
        bubblesort(arr,sum);
        enterkembali();
        goto menu;
    }
    else if(pilih == 3){
        system("cls");
        insertionSort(arr,sum);
        enterkembali();
        goto menu;
    }
    else if(pilih == 4){
        system("cls");
        selectionsort(arr,sum);
        enterkembali();
        goto menu;
    }
    else if(pilih == 5){
        system("cls");
        print(sum);
        enterkembali();
        goto menu;
    }
    else if(pilih == 6){
        system("cls");
        return 0;
    }
    else {
        printf("Masukan Angka antara 1-6!, Tekan apa saja untuk mengulang");
        system("pause>null");
        system("cls");
        goto menu;
    }

}
