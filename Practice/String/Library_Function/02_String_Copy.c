#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char FName[20] = {'\0'};
    char LName[20] = {};

    printf("\n Enter a 1st Name : ");
    gets(FName);

    printf("\n Enter 2nd Name : ");
    gets(LName);

    printf("\n 1st Name is => %s",FName);

    printf("\n 2nd Name is => %s",LName);

    strcpy(FName,LName);

    getch();

    printf("\n\n After Copy 1st Name is = %s....!",FName);

    printf("\n\n After Copy Last Name is = %s $$$",LName);

    getch();
    return 0;
}
