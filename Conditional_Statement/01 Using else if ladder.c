///else if ladder.

#include<stdio.h>
#include<conio.h>
int main()
    {
      float Amount = 0.0;

      printf("\n Enter Your Account Balance =");
      scanf("%f",&Amount);

      if(Amount > 10000)
      {
        printf("\n\n\t Weli To Mall!!!\n");
        printf("\n\t You Are Prime Customer");
        printf("\n\t Go To Counter No 7 For Prime Offers\n");
      }
      else if(Amount >= 7000)
      {
        printf("\n\n\t Welcome To Mall !!!\n");
        printf ("\n\t You Can Shop At Ground Floor\n");
      }
      else
      {
        printf("\n\n\t Minimum Balance Required To Shop Is 1000\n");
      }
      getch ();

      printf("\n\n Thanks For visit!!!");

      getch ();
      return 0;
}
