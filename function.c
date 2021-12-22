#include <stdio.h>
#include <stdlib.h>

int jumlah = 3;
int bilangan [3];

void cetak(){
    printf("pertemuan 12, fungsi\n\n");
}

void input (indeks){
    printf ("masukan angka ke %d : ", indeks+1);
    scanf("%d", &bilangan[indeks]);



}
void cetak_dengan_param(indeks){
    printf("\n\n Angka ke-%d adalah %d : ", indeks+1,bilangan[indeks]);
}

char* is_bilangan_bulat(indeks){
    if(bilangan[indeks] % 2 == 0){
        return "bilangan bulat.";
    }else{
        return "bilangan ganjil.";
    }
}

int pankat3(indeks){
    int hasil = 1;
    for(int i = 1; i<=3; i++){
        hasil = hasil *bilangan [indeks];
    }
        return hasil;
}


int main()
{

    cetak();

    for (int i=0; i<jumlah; i++){
        input (i);
    }
    for (int i=0;i<jumlah; i++){
        cetak_dengan_param(i);
        printf(is_bilangan_bulat(i));
        printf("\n Hasil Pangkat 3 nya adalah : %d ", pankat3(i));
    }
    printf("\n\n");

    return 0;
}