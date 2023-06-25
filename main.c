//Gerekli kütüphanleri tanımlıyoruz
#include <stdio.h>
#include <stdbool.h>
// Değişkenlerimizi tanımlıyoruz
int sayi = 0;
bool asal = 1;
bool hata = 0;
/*Kullanıcının belirttiği sayıyı kaydediyoruz,
  girilen veri sayı değilse veya
  2'ye eşit veya 2'den küçük bir sayı ise
  asal sayı olmadığını belirtiyoruz.
  */
void girdi(){
    printf("Enter an integer:");
    scanf("%d", &sayi);

    if (sayi <=2){
        printf("Bu sayi asal degildir.");
        hata = 1;
    }
}
// Kaydettiğimiz sayının asallığını kontrol ediyoruz
void asallik(){
    for(int i=2;sayi>i;i++){
        if(sayi%i ==0){
            asal = 0;
            break;
        }
    }
}
// Kaydettiğimiz sayının asallık durumunu kullanıcıya bildiriyoruz
void control(){
    if(asal == 1){
        printf("Bu sayi asaldir.");
    }
    else{
        printf("Bu sayi asal degildir.");
    }
}
int main() {
    girdi();
    // Girdi sayı değil yada 2'ye küçük eşittir ise programı sonlandırıyoruz.
    if (hata == 1){
        return 0;
    }
    asallik();
    control();
    return 0;
}
