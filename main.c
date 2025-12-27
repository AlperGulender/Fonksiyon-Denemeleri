#include <stdio.h>
#include "Fon.h"
int main(void) {
    float f,g,h;
    int a,b,d,e;
    char c;
    printf("-----Hos Gelidiniz-----\n");
    while(1) {
        printf("Lutfen yapmak istediginiz islemi seciniz:\n"
           "1)Hesap Makinesi\n"
           "2)Asallik\n"
           "3)Faktoriyel alma\n"
           "4)Fibo Bulma\n"
           "5)Alan Hesaplama\n"
           "6)Kare Alma\n"
           "7)Kup Alma\n"
           "8)Hacim Alma\n"
           "0)Exit\n");
        scanf(" %d",&a);
        switch (a) {
            case 0: {
                printf("----iyi gunler-----");
                return 0;
            }
            case 1: {
                printf("\nsayilari giriniz:");
                scanf(" %d %d",&d,&b);
                printf("\nislemi giriniz:");
                scanf(" %c",&c);
                hesap2li(d,b,c);
                break;
            }
            case 2: {
                printf("\nsayiyi giriniz:");
                scanf(" %d",&b);
                asal(b);
                break;
            }
            case 3: {
                printf("\nsayiyi giriniz:");
                scanf(" %d",&b);
                printf("Sonuc:%d\n",fakto(b));
                break;
            }
            case 4: {
                printf("\nsayiyi giriniz:");
                scanf("%d",&b);
                fibo(b);
                break;
            }
                case 5: {
                printf("\nUzunluklari giriniz:");
                scanf(" %f %f",&f,&g);
                printf("\nAlan:%f",alanhesap(f,g));
                break;
            }
                case 6: {
                printf("\nSayi giriniz:");
                scanf(" %f",&f);
                printf("\nSonuc:%f",kare(f));
                break;
            }
            case 7: {
                printf("\nSayi giriniz:");
                scanf(" %f",&f);
                printf("\nSonuc:%f",küp(f));
                break;
            }
            case 8: {
                printf("\nAyritleri giriniz:");
                scanf(" %f %f %f",&f,&g,&h);
                printf("\nSonuc:%f",hacim(f,g,h));
                break;
            }
             default: {
                printf("\nHatali secenek\n");
            }
        }
    }
}
