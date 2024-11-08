
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{

    char Name[20] ="Unknown";
    char FNM[20] ="jack Fruit";

    printf("\n string1 Value = %s.", Name);
    printf("\n string2 Value = %s.", FNM);


    printf("\n Enter Your Name =");
    gets(Name);                                ///scanf("%s",&Name);

    printf("\n Enter Favorite Fruit = ");
    gets(Name);                                ///scanf("S",&FNM);

    printf("\n Name Enterd is  = %s.",Name);
    printf("\n Favourite Fruit Name = %s.",FNM);

    getch();
    return 0;
}
