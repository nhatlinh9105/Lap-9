#include <stdio.h>

void nhapmang(int mang[5])
{
    for(int i=0; i<5; i++)
    {
        printf("nhập số thứ %d: ", i+1);
        scanf("%d", &mang[i]);
        
    }
}

void daochieu(int a[5])
{
    printf("Mảng đảo ngược là: ");
    for(int i=4 ; i>=0; i--)
    printf("%d\t", a[i]);
}

int main ()
{
    int mang[5];
    nhapmang(mang);
    daochieu(mang);
   
    return 0;
}
