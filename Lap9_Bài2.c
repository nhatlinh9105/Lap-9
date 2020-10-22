#include <stdio.h>

void timmax (int a[], n, max)
{
    int vt=0;
    printf("Nhập giới hạn của chuỗi: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        printf("Nhập số thứ %d: ", i+1);
        scanf("%d", &a[i]);
        
        max = a[0];
        if(max < a[i])
        {
            max = a[i];
        }
        vt=i;
    }
    printf("Số lớn nhất là: %d", max);
    printf("\nVị trí của max là: %d", vt);
}

int main ()
{
    int a[100], n, max=0;
    timmax(a, max, n);
}
