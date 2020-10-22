#include<stdio.h>
#include<math.h>

void primenumber(double a)
{
    int count = 0;
    if(a < 2)
    {
        count = 1;
    }
    for(int i=2; i<= sqrt(a); i++)
        if((int)a % i ==0)
        {
            count++;
        }
   if(count == 0)
   {
       printf("%0.lf là số nguyên tố.", a);
   }
   else
   {
       printf("%0.lf không phải là số nguyên tố.", a);
   }
}

main ()
{
    double a;
    printf("Nhập số: ");
    scanf("%lf", &a);
    
    primenumber(a);
}
