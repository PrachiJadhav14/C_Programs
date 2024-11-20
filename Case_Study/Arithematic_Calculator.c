
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// Arithematic Calculator - Case Study

/// Arithematic Operators Ues as console Based Calculator

///Input => Two Integral Number
///Output => Arithematic Result Of User Choice i.e Addition Or Substacttion Or Multiplicaton Or Divison Or Reminder
///
/// Auther => Fork Infosytems
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#include"Arithematic_Add.c"
#include"Arithematic_Substract.c"
#include"Arithematic_Multiple.c"
#include"Arithematic_Modulo.c"
#include"Arithematic_Div.c"

 int main()
 {
    int Choice = 0;
    char ch = '\0';

    for(;;)
    {
      printf("\n ******************Fork Infosytem***************\n\t ARITHEMATIC CALCULATION");
      printf("\n==================================================================================\n");

      printf("\n Choice => \n\t 1. Addition \n\t 2. Substraction \n\t 3.Multiplication \n\t 4.Division \n\t 5.Reminder \n\t 6.Exist\n");
      printf("\n====================================================================================\n");
      scanf("%d",&Choice);

      switch(Choice)
      {
          case 1 :
                Add();
                getch();
                system("cls");
                 break;

          case 2:
                Substract();
                getch();
                system("cls");
                break;

          case 3:
               Multiple();
               getch();
               system("cls");
               break;

          case 4:
               Div();
               getch();
               system("cls");
               break;

            case 5:
               Modulo();
               getch();
               system("cls");
               break;

            case 6:

                fflush(stdin);
                printf("\n Are You Sure DO You Want To Exit ???(Yes/No):");
                ch = getchar();

                if(ch=='y' || ch=='Y')
                {
                    goto Dwn;
                }
                fflush(stdin);
                system("cls");
               break;
      }

      }
      Dwn:

      printf("******\n\n Thanks For Using Fork INFOSYSTEMS Calculator Service********");
      printf("\n Any Key TO Exit Application !!!!!\n ");

    getch();
    return 0;
 }



