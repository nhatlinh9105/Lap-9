#include<stdio.h>

int tong(int a[], n, m)
{
    int sum = 0;
    for(int i=n; i<=m; i++)
    {
        if(i%7 == 0)
        {
            a[i]= i;
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int a[100], n, m;
    printf("Nhập hai số giới hạn: ");
    scanf("%d %d", &n, &m);
    printf("\nTổng các số từ 300 tới 500 mà chia hết cho 7 là: %d\n", tong(a, n, m));
}
