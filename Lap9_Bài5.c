#include <stdio.h>
#include <math.h>

int heron(int a, int b, int c)
{
    int s, p;
    
        p = (a +b +c)/2;
        s=sqrt(p*(p-a)*(p-b)*(p-c));
        return s;
}

int main()
{
    int a, b, c;
    printf("Nhập độ dài ba cạnh tam giác: ");
    scanf("%d %d %d", &a,&b,&c);
    if(a<(b+c) &&  b<(a+c) && c<(a+b))
    {
        printf("Diện tích tam giác là: %d", heron(a, b ,c));
    }
    else
    {
        printf("Đây không phải là tam giác.");
    }
}
