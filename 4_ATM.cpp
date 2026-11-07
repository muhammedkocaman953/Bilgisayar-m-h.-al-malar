#include <stdio.h>

int main()
{
    int sifre;
    int bakiye = 500;
    int tutar;

    do
    {
        printf("Sifrenizi giriniz: ");

        if (scanf("%d", &sifre) != 1)
        {
            printf("Gecersiz giris!\n");
            return 1;
        }

        if (sifre != 1234)
        {
            printf("Sifre yanlis. Tekrar deneyiniz.\n");
        }

    } while (sifre != 1234);

    printf("Bakiyeniz: %d TL\n", bakiye);
    printf("Cekmek istediginiz tutari giriniz: ");

    if (scanf("%d", &tutar) != 1)
    {
        printf("Gecersiz giris!\n");
        return 1;
    }

    if (tutar <= 0)
    {
        printf("Cekilecek tutar pozitif olmalidir.\n");
    }
    else if (tutar <= bakiye)
    {
        bakiye = bakiye - tutar;

        printf("Paranizi aliniz.\n");
        printf("Kalan bakiye = %d TL\n", bakiye);
    }
    else
    {
        printf("Yetersiz bakiye!\n");
        printf("Bakiyeniz = %d TL\n", bakiye);
    }

    return 0;
}
