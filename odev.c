// ------ORNEK 1-------
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Sayi girin:");
//     scanf("%d", &n);

//     while (n > 0)
//     {
//         printf("%d\n", n);
//         n--;
//     }

//     return 0;
// }

// ------ORNEK 2-------
// #include <stdio.h>

// int main()
// {
//     int sayi, toplam = 0;

//     while (1)
//     {
//         printf("Sayi giriniz:");
//         if (scanf("%d", &sayi) == 1)
//         {
//             toplam += sayi;
//             printf("%d\n", toplam);
//         }
//         else
//         {
//             break;
//         }
//     }
//     return 0;
// }

// ------ORNEK 3-------
// #include <stdio.h>

// int main()
// {
//     int n, sayac = 0;
//     printf("Bir sayi giriniz: ");
//     scanf("%d", &n);
//     while (n >= 1)
//     {
//         n /= 10;
//         sayac++;
//     }
//     printf("Girdiginiz sayi %d basamakli sayi", sayac);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int sayi;
//     do
//     {
//         printf("Pozitif sayi girin:");
//         scanf("%d", &sayi);

//         if (sayi <= 0)
//         {
//             printf("Pozitif Sayi girmediniz!!! Tekrar deneyin\n");
//         }
//     } while (sayi <= 0);

//     printf("Pozitif Sayi Girdiniz>>>");
// }

// #include <stdio.h>

// int main()
// {
//     char secim;

//     do
//     {
//         printf("A. Buyuk Menu \nB. Orta Menu \nC.KucukMenu \nMenu Secin (A,B,C den birisini girin): ");
//         scanf(" %c", &secim);
//         if (secim != 'A' && secim != 'B' && secim != 'C')
//         {
//             printf("Uc secimden birini secmelisiniz\n");
//         }
//     } while (secim != 'A' && secim != 'B' && secim != 'C');

//     switch (secim)
//     {
//     case 'A':
//         printf("Seciminiz Buyuk Menu");
//         break;
//     case 'B':
//         printf("Seciminiz Orta Menu");
//         break;
//     case 'C':
//         printf("Seciminiz Kucuk Menu");
//         break;
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int sayi, toplam = 0;
//     ;
//     do
//     {
//         printf("Pozitif tam sayi giriniz: ");
//         scanf("%d", &sayi);
//         if (sayi > 0)
//         {
//             toplam += sayi;
//         }
//     } while (sayi >= 0);
//     printf("Girilen pozitif tam sayilarin toplami = %d \n", toplam);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int sayi, toplam = 0;
//     for (int i = 0; i < 1;)
//     {
//         printf("Sayi giriniz:");
//         scanf("%d", &sayi);
//         if (sayi >= 0)
//         {
//             toplam += sayi;
//         }
//         else
//         {
//             i++;
//         }
//     }

//     printf("Girilen pozitif tam sayilarin toplami = %d \n", toplam);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     const int sabitSayi = 7;
//     int tahminSayi;
//     do
//     {
//         printf("Bir sayiyi tahmin etmeye calisin: ");
//         scanf("%d", &tahminSayi);
//         if (tahminSayi != sabitSayi)
//         {
//             printf("Tahmininiz yanlis. Tekrar deneyin\n");
//         }
//     } while (tahminSayi != sabitSayi);

//     printf("Tebrikler Tahminiz dogru cikti");
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int num, yildiz;

//     printf("Sayi girin: ");
//     scanf("%d", &num);
//     yildiz = num;
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= num; j++)
//         {
//             if (j >= yildiz)
//             {
//                 printf(" * ");
//             }
//             else
//             {
//                 printf("   ");
//             }
//         }
//         yildiz--;
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int num;

//     printf("Sayi girin: ");
//     scanf("%d", &num);
//     for (int i = 1; i <= num; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int sifre;

//     do
//     {
//         printf("Sifreyi giriniz: ");
//         scanf("%d", &sifre);

//         if (sifre != 1234)
//         {
//             printf("Yanlis sifre! Tekrar deneyin.\n");
//         }
//     } while (sifre != 1234);
//     printf("Giris basarili.\n");
//     return 0;
// }

// #include <stdio.h>
// #include<ctype.h>

// int main()
// {
//     int bakiye = 1000, miktar;
//     char islem;

//     do
//     {
//         printf("\n P - Para Cekimi \n W - Para Yatirma \n B - Bakiye Sorgulama \n E - Cikis\n\n Ne islem yapmak istersiniz: ");
//         scanf(" %c", &islem);
//         islem = toupper(islem);
//         switch (islem)
//         {
//         case 'P':
//             printf("\nNe kadar para cekmek istersiniz: ");
//             scanf("%d", &miktar);
//             if (miktar > bakiye)
//             {
//                 printf("\nHesabinizdaki para yetersiz. Hesabinizda %d tl var \n", bakiye);
//             }
//             else
//             {
//                 bakiye -= miktar;
//                 printf("\n%d tl miktarinda para cektiniz. Hesabinizda kalan para miktari: %d tl\n", miktar, bakiye);
//             }
//             break;

//         case 'W':
//             printf("\nNe kadar miktarda para yatirmak istersiniz: ");
//             scanf("%d", &miktar);
//             bakiye += miktar;
//             printf("\nYatirdiginiz para miktari: %d tl. Hesabinizdaki guncel para miktari: %d tl\n", miktar, bakiye);
//             break;

//         case 'B':
//             printf("\nHesabinizda bulunan para miktari: %d tl\n", bakiye);
//             break;
//         case 'E':
//         break;

//         default:
//             printf("\nBoyle bir islem yok. Tekrar deneyin!\n");
//             break;
//         }

//     } while (islem != 'E');
//     printf("\nIsleminiz icin tesekkurler. Size iyi gunler dileriz!");
// }

// #include <stdio.h>
// #include <stdbool.h>
// int main()
// {
//     int baslangic, bitis;
//     bool asalmi;

//     printf("Baslangic Sayiyi giriniz: ");
//     scanf("%d", &baslangic);
//     printf("Bitis Sayiyi giriniz: ");
//     scanf("%d", &bitis);

//     if (baslangic < 2)
//     {
//         baslangic = 2;
//     }

//     for (int i = baslangic; i <= bitis; i++)
//     {
//         asalmi = true;
//         for (int j = 2; j < i; j++)
//         {
//             if (i % j == 0)
//             {
//                 asalmi = false;
//                 break;
//             }
//         }
//         if (asalmi)
//         {
//             printf("%d\n", i);
//         }
//     }
// }

#include <stdio.h>

int main()
{
    int sifre, sabitSifre = 1234, secim;

    do
    {
        printf("Sifrenizi girin: ");
        scanf("%d", &sifre);
        if (sifre != sabitSifre)
        {
            printf("\nHatali sifre. Tekrar deneyin!\n\n");
        }

    } while (sifre != sabitSifre);
    printf("\nSifreniz dogru!\n");
    do
    {
        printf("\n* deseni icin - 1\n# deseni icin - 2\n\nHangi deseni cizmek istersiniz: ");
        scanf("%d", &secim);

        switch (secim)
        {
        case 1:
            for (int i = 1; i <= 5; i++)
            {
                for (int j = 1; j <= 5; j++)
                {
                    printf("* ");
                }
                printf("\n");
            }
            break;

            // case 2:
            //     int yildiz = 5;
            //     for (int i = 1; i <= 5; i++)
            //     {
            //         for (int j = 1; j <= 5; j++)
            //         {
            //             if (j >= yildiz)
            //             {
            //                 printf(" # ");
            //             }
            //             else
            //             {
            //                 printf("   ");
            //             }
            //         }
            //         yildiz--;
            //         printf("\n");
            //     }
            //     break;

        case 2: // Üçgen Deseni için basit ve temiz çözüm
            for (int i = 1; i <= 5; i++)
            {
                // İç döngüyü, i kadar çalışacak şekilde ayarla
                for (int j = 1; j <= i; j++)
                {
                    printf("# ");
                }
                printf("\n");
            }
            break;
        default:
            printf("\n2 secimden birini secin. 1 yada 2 girin!\n");
            break;
        }

    } while (secim != 1 && secim != 2);
}
