#include<stdio.h>
#include<conio.h>
#include<String.h>
int main()
{
    char FName[10] = {'\0'};
    char LName [10] = {};

     printf("\n Enter First Name : ");
     gets(FName);

     printf("\n Enter 2nd Name :");
     gets(LName);

     strncpy(FName,LName,2);

     FName[2]= '\0';


     printf("\n\n After Copy 1st Name is = %s..!",FName);

     printf("\n\n After Copy 2nd Name is = %s...!",LName);

     getch();
     return 0;
}
