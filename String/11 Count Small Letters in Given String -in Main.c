
// Count Small Letters in Given String

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[50] = {'\0'};
    char Sm_Cnt = 0,i = 0;


    printf("\n Enter a String :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= 'a' && cSrc[i] <= 'z')
        {
            Sm_Cnt++;
        }
        i++;
    }

    printf("\n Counnt Small Letters Given String is = %d.",Sm_Cnt);

    getch();
    return 0;


}
