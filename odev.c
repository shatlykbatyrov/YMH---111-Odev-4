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

#include <stdio.h>

int main()
{
    int sayi, toplam = 0;

    while (1)
    {
        printf("Sayi giriniz:");
        if (scanf("%d", &sayi) == 1)
        {
            toplam += sayi;
            printf("%d\n", toplam);
        }
        else
        {
            break;
        }
    }
    return 0;
}