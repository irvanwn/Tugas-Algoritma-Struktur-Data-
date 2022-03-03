#include <stdio.h>
#include <stdlib.h>


int binarySearch(int arr[], int size, int cari){
    int low, mid, high;
    low = 0;
    high = size-1;

    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == cari){
            return mid;
        }
        if(arr[mid]<cari){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
    return -1;

}

int main(){
    int arr[] = {1,2,12,34,61,78,89,101,213,534,765};
    int size = sizeof(arr)/sizeof(int);
    int cari = 101;
    int carindeks = binarySearch(arr, size, cari);
    if (carindeks == -1){
        printf("Angka %d Tidak Ditemukan\n\n",cari);
    } else {
    printf("Angka %d Ditemukan Pada Index %d \n\n", cari, carindeks);
    }
    return 0;
}
