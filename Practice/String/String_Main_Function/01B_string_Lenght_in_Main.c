#include<stdio.h>
#include<conio.h>
int main()
{
    char cSrc = {'\0'};
    int i = 0;

    printf("\n Enter Youre String is => ");
    gets(cSrc);

     while(cSrc[i] != '\0')
     {
         i++;
     }

     printf("\n Length Of Given String is = %d",i);

     getch();
     return 0;
}
