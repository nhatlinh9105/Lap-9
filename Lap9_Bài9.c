#include <stdio.h>

float diem(float a[5])
{
    float sum = 0;
    float avg;
    for(int i=0; i<5; i++)
    {
        sum = sum+a[i];
    }
    avg = sum/5;
    return avg;
}

int sosanh(float avg)
{
    int xeploai;
    if(avg < 4)
    {
        xeploai = 0;
    }
    else if(avg < 6)
    {
        xeploai = 1;
    }
    else if(avg < 8)
    {
        xeploai = 2;
    }
    else if(avg <9)
    {
        xeploai = 3;
    }
    else
    {
        xeploai = 4;
    }
    return xeploai;
}

char xephang(int xeploai )
{
    char xl;
    switch(xeploai)
    {
        case 0: xl = 'F';
            break;
        case 1: xl = 'D';
            break;
        case 2: xl = 'C';
            break;
        case 3: xl = 'B';
            break;
        case 4: xl = 'A';
            break;
    }
    return xl;
}

int main ()
{
    char xeploai;
    int xl;
    float a[5];
    printf ("Nhập số điểm của học sinh: ");
    for(int i = 0; i<5; i++)
    {
        do {
            printf("\nĐầu điểm %d: ", i+1);
            scanf("%f", &a[i]);
        }while(a[i]>10 || a[i]<0);
    }
    printf("Điểm trung bình là: %.2f\n", diem(a));
    
    xl = sosanh(diem(a));
    xeploai = xephang(xl);
    
    printf("Xếp loại học sinh: %c\n", xeploai);
    return 0;
}
