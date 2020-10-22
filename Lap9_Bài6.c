#include <stdio.h>
#include <string.h>
 


 
void to_upper(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i];
        }
    }
}
 
int main()
{
    char s[100];
    
    printf("\nNhap dong chu muon chuyen : ");
    gets(s);
    to_upper(s);
    printf("\nChuyz en doi = %s", s);
    return 0;
}
