
// Count Digit in Given String

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[50] = {'\0'};
    char Dig_Cnt = 0,i = 0;


    printf("\n Enter a String :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= '0' && cSrc[i] <= '9')
        {
            Dig_Cnt++;
        }
        i++;
    }

    printf("\n Counnt Small Letters in  Given String is = %d.",Dig_Cnt);

    getch();
    return 0;


}
