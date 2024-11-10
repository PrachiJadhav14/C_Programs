#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{

    int Count = 0;
    char Name[20] ="";
    char SNm[20] ="";

    printf("\n Enter Name1 =");
    gets(Name);
    printf("\n Enter Name2 =");
    gets(SNm);

    Count= strcmp(Name,SNm);

    printf("\n %d \n",Count);

    if(Count ==0)
    {
        printf("\n BOth String Are Same.");
    }
    else
    {
        printf("\n Both String Are Different.");
    }
    getch();
    return 0;

    getch();
    return 0;
}
