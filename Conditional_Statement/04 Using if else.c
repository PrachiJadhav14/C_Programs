
///Maximum From 2Numbers -Using If Else.c
#include <stdio.h>
#include <conio.h>
int main()
{
  int Num1 = 0, Num2 = 0;
     Up:
         printf("\n Enter 2 Integer Numbers = ");
         scanf ("%d%d",&Num1,&Num2);


         if(Num1 == Num2)
         {
             printf("\n Both Given Numbers Are Equal, \n Please Enter Different Number To Compare, \n");

            getch();
            goto Up;
        }
        if (Num1 > Num2)
          {
             printf("\n Number %d is Maximum.",Num1);
          }
          else
           {
              printf("\n Number %d is Maximum.",Num2);
          }
          printf("\n Thanks!!!");

 getch ();
return 0;
}








