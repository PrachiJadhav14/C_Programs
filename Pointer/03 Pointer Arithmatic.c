#include<stdio.h>
#include<conio.h>

  void Add();
  int main()
  {
     printf("\n main Welcome You");

      Add();
     getch();
     return 0;
  }
  void Add()
  {
      int N1=0,N2=0,sum=0;

      printf("\n Enter No1=");
      scanf("%d",&N1);
      printf("\n Enter No2=");
      scanf("%d",&N2);

      sum=N1+N2;
      printf("\n Addition Of %d And %d is=%d.",N1,N2,sum);
      return;

  }

