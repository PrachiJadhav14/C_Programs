#include<stdio.h>
#include<conio.h>

int main()
{

    int Cnt = 0, i = 0, Bill_Sum = 0;
    int *Bills = NULL;

    printf("\n Enter  How Many Bills : ");
    scanf("&d",&Cnt);

    Bills = (int*)malloc(Cnt * sizeof (int ));

    if(NULL == Bills)
    {

        printf("\n Memory Cant Be Allocated.");
        return -1;
    }
      for(i = 0; i < Cnt; i++)
    {

        printf("\n Enter Bill %d Amount : ",i+1);
        scanf("%d",&Bills[10]);

        Bill_Sum = Bill_Sum + Bills[i];
    }
    getch();
    //System ("Cls");

    printf("\n Entered bills & Their Sum is => ");

           for (i =0; i < Cnt; i++)
           {
               printf("%d +",Bills[1]);

           }
           printf("\n %d.",Bill_Sum);

           getch();

}
