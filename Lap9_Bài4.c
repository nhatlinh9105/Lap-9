#include <stdio.h>
#include <math.h>

void nhapmang(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("Nhập số thứ %d: ", i+1);
        scanf("%d", &a[i]);
    }
}

int primenumber (int n, int * pn)
{
    int count = 0;
    if(n<2)
    {
        count = 1;
    }
    for(int i=2; i<=sqrt(n); i++)
    if(n % i ==0)
    {
        count ++;
    }
    if(count == 0)
    {
        return n;
    }
    else
    {
        (*pn)++;
        return 0;
    }
}

int main()
{
    int a[100],n,b[100],m;
    m = 0;
    int pn = 0;
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);
    
    nhapmang(a, n);
    
    for(int i=0; i<n; i++)
    {
        if ((primenumber(a[i], &pn)) != 0)
        {
            b[m] = primenumber(a[i], &pn);
            m++;
        }
    }
    if(pn == n)
    {
        printf("Chuỗi không có số nguyên tố.\n");
    }
    else
    {
        printf("Các số nguyên tố có trong dãy là: ");
        for (int i=0;i<m;i++)
        {
            printf("%d\t", b[i]);
        }
    }
}
