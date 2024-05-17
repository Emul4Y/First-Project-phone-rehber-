#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "header.h"
#include "menu.h"
#include "phoneadd.h"
#include "phonelist.h"
#include "phonesearch.h"

int main()
{
    int choice=0;
    char searchName[20];
    int searchResult=0;

    menu();

    do{
        printf("\n\n Seciminizi Giriniz : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                if(phoneAdd()==0){
                    printf("\n Telefon Numarasi Basariyla Eklendi\n");
                }else{
                    printf("\n Telefon Numarasi Ekleme Basarisiz\n");
                }break;

            case 2:
                if(phoneList()==0){
                    printf("\n Telefon Numaralari Basariyla Listelendi\n");
                }else{
                    printf("\n Telefon Numarasi Listeleme Basarisiz\n");
                }break;

            case 3:
                printf("\ Aranacak isim (max 20 karakter) :");
                scanf("%s",&searchName);

                searchResult = phoneSearch(searchName);

                if(searchResult==0){
                    printf("\nAranilan Kayit Bulunamadi\n");
                }else{
                    printf("\n Toplam %d adet kayit bulundu \n",searchResult);
                }break;

            case 4:
                printf("\n CIKIS YAPILDI !! \n");
                return 0;
                break;

            default:
                printf("Lutfen 1-4 arasinda sayi giriniz\n");
        }
    }while(choice != 4);
    return 0;
}
