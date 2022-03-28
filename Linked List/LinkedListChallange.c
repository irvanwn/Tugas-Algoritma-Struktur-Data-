#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node *head;

void awal()
{
    struct node *ptr;
    int item;

    ptr = (struct node*)malloc(sizeof(struct node *));
    if(ptr == NULL)
    {
        printf("\n\n\tOVERFLOW!");
    }
    else
    {
        printf("\n\n\tMasukan Data : ");
        scanf("%d",&item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\n\tData Berhasil Disimpan di NODE awal!");
    }
}

void akhir()
{
    struct node *ptr,*temp;
    int item;
    ptr = (struct node*)malloc(sizeof(struct node *));
    if(ptr == NULL)
    {
        printf("OVERFLOW!");
    }
    else
    {
        printf ("\n\n\tMasukan data: ");
        scanf("%d",&item);
        ptr->data = item;
        if(head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("\n\tBerhasil Simpan NODE!");
        }
        else
        {
            temp = head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr ->next =NULL;
            printf("\n\tBerhasil simpan NODE akhir!");
        }
    }
}

void sembarang()
{
    struct node *ptr,*temp;
    int item,loc;
    ptr = (struct node*)malloc(sizeof(struct node *));
    if(head == NULL)
    {
        printf("\n\n\tData Kosong!");
    }
    else
    {
    printf ("\n\n\tMasukan data: ");
    scanf("%d",&item);
    ptr->data = item;
        printf("\n\tMasukan lokasi penyimpanan berapa : ");
        scanf("%d",&loc);

        if (loc == 1)
        {
            ptr->data = item;
            ptr->next = head;
            head = ptr;
            printf("\n\tNode Berhasil disimpan!");
        }
        else
        {
            temp = head;
            for(int i = 0 ; i < loc-2;i++)
            {
                temp = temp->next;
                if(temp == NULL)
                {
                    printf("\n\tTidak bisa disimpan datamu!");
                    return;
                }
            }
            ptr ->next = temp ->next;
            temp->next = ptr;
            printf("\n\tNode Berhasil disimpan!");
        }
    }
}



void hapusawal()
{
    struct node *ptr;
    if(head==NULL)
    {
        printf("\n\n\tList Kosong");
    }
    else
    {
        ptr = head;
        head = ptr->next;
        free(ptr);
        printf("\n\n\tNode Awal sudah dihapus");

    }
}


void hapusakhir()
{
    struct node *ptr,*temp;

     if(head == NULL)
        {
            printf("\n\n\tData kosong");
        }
        else if(head -> next == NULL)
        {
            head = NULL;
            free(head);
            printf("\n\n\tData Node terakhir sudah dihapus, data kosong\n");
        }

        else
        {
            ptr = head;
            while(ptr->next != NULL)
            {
                temp = ptr;
                ptr = ptr ->next;
            }
            temp->next = NULL;
            free(ptr);
            printf("\n\n\tNode paling akhir sudah terhapus\n");
        }
}

void hapusembarang()
{
    struct node *ptr,*temp;
    int loc;

    if(head == NULL)
    {
        printf("\n\n\tData kosong");
    }
    else
    {
        printf("\n\n\tMasukan lokasi node yang ingin dihapus : ");
        scanf("%d",&loc);
        ptr = head;
        if (loc == 1)
        {
            head = ptr->next;
            free(ptr);
            printf("\n\tnode pada lokasi 1 terhapus");
        }
        else
        {
            loc-=1;
            for(int i=0;i<loc;i++)
            {
                temp = ptr;
                ptr = ptr->next;

                if(ptr == NULL)
                {
                    printf("\n\tTidak bisa dihapus");
                    return;
                }
            }
            temp ->next = ptr ->next;
            free(ptr);
            printf("\n\t node pada lokasi %d terhapus",loc+1);
        }
    }

}



void cetak()
{
     struct node *ptr;
     ptr = head;
     int a = 1;
     if(ptr == NULL)
     {
         printf("\n\n\tList Kosong");
     }
     else
     {
         printf("\n\n\t---------------\n");
         printf("\t| Cetak List  |\n");
         printf("\t|-------------|\n");
         printf("\t| No | Data   |\n");
         printf("\t|-------------|\n");
         while(ptr != NULL)
         {
            printf("\t| %d. | %d",a,ptr->data);
            a++;
            int len = floor(log10(abs(ptr->data))) + 1;
                for (int x = 0; x < 7 - len ;x++){
                printf(" ");
                }
            printf("|\n");
            ptr = ptr ->next;
         }
         printf("\t---------------\n");
     }

}

void enterkembali(){
    printf ("\n\n\tTekan Enter untuk Kembali . . ");
    system("pause>nul");
    system ("cls");
}



int main()
{
    int pilihan = 0;
    while(pilihan!= 8)
    {
        printf("\n\n\t****** Menu Linked List ******\n");
        printf("\t==============================\n");
        printf("\t1. Input Data di Awal\n");
        printf("\t2. Input Data di Akhir\n");
        printf("\t3. Input Data Sembarang\n");
        printf("\t4. Hapus Data Awal\n");
        printf("\t5. Hapus Data Akhir\n");
        printf("\t6. Hapus Data Sembarang\n");
        printf("\t7. Lihat Data Dalam Linked List\n");
        printf("\t8. EXIT\n ");
        printf("\tPilihan : ");
        scanf("%d",&pilihan);
        switch(pilihan)
        {
            case 1:
            system("cls");
            awal();
            enterkembali();
            break;

            case 2:
            system("cls");
            akhir();
            enterkembali();
            break;

            case 3:
            system("cls");
            sembarang();
            enterkembali();
            break;

            case 4:
            system("cls");
            hapusawal();
            enterkembali();
            break;
            case 5:
            system("cls");
            hapusakhir();
            enterkembali();
            break;
            case 6:
            system("cls");
            hapusembarang();
            enterkembali();

            break;
            case 7:
            system("cls");
            cetak();
            enterkembali();
            break;

            case 8:
            exit(0);
            break;

            default:
                printf("\n\tSilahkan Pilih Yang Benar!");
                system("pause>nul");
                system("cls");
        }
    }
}
