//////Program To Print 28 TO 43
#include<stdio.h>
#include<conio.h>
int main()
{
    int R = 0,C = 0;
    printf("\n=================**************=============\n\n");

    for (R = 1;R <= 10;R++)
    {
        for(C = 41;C >= 31;C--)
        {
            printf("%4d",R * C);
        }
        printf("\n");
    }
     printf("\n=================**************==============");
     getch();
     return 0;
}

