#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct Stud
{
    int Roll_No;
    char Name[40];
    int Phy;
    int Chem;
    int Maths;
    float Total;
    float Per;
};
int main()
{
    struct Stud Std;

    printf("\n Enter Student Details =>\n");

    printf("\n Enter Student ROll_Number :-");
    scanf("%d",&Std.Roll_No);
    fflush(stdin);

    printf("\n Enter Student Name :-");
    gets(Std.Name);

    printf("\n Enter Physics Marks :-");
    scanf("%d",&Std.Phy);

    printf("\n Enter Chemistry Marks :-");
    scanf("%d",&Std.Chem);

    printf("\n Enter Mathematics Marks :-");
    scanf("%d",&Std.Maths);

    Std.Total = Std.Phy + Std.Chem + Std.Maths;

    Std.Per = (Std.Total/300)*100;

    printf("\n Enter Any Key To Go Ahead");
    getch();

    printf("\n==================================*********=================================");

    printf("\n\n Enter Student Details Are :\n\n");

    printf("\n\n\t  Student Roll Number  =%d",Std.Roll_No);
    printf("\n\n\t Student Name          =%d",Std.Name);
    printf("\n\n\t Physics Marks         =%d",Std.Phy);
    printf("\n\n\t Chemistry Marks       =%d",Std.Chem);
    printf("\n\n\t Mathematics Marks     =%d",Std.Maths);
    printf("\n\n\t Total Marks           =%0.of",Std.Total);
    printf("\n\n\t Percentage            =%0.3f",Std.Per);


    printf("\n===============**************===============");

    printf("\n\n Thanks For Using Our Application");

    getch();
    return 0;
    }
