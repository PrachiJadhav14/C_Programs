#include<stdio.h>
#include<conio.h>

int lengthCase(char[]);

int main()

{
    int cSrc[20] = {'\0'};
     int i = 0;

    printf("\n Enter A String => ");
    gets(cSrc);

   i= lengthCase(cSrc);

    printf("\n You're String Length is = %d",i);

getch();
return 0;
}
int lengthCase(char cSrc[])
{
    int i =0;

        while(cSrc[i] != '\0')
    {
        i++;
    }
    return i;

}

