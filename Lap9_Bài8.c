#include <stdio.h>

int dem(char a[], char b)
{
    int count = 0;
    for(int i = 0; a[i] != '\0' ; i++)
    {
        if(a[i] >= 'a' && a[i] <= 'z')
        {
            if(b == a[i] - 1)
                count++;
        }
    }
    return count;
}

int main()
{
    char a[100];
    char b;
    
    printf("Nhập chuỗi: ");
    gets(a);
    printf("Nhập b: ");
    scanf("%c", &b);
    printf("Số kí tự liền sau kí tự %c trong chuỗi là: %d", b, dem(a,b));
}
