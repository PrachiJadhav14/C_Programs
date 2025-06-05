#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 5


void Accept_Elements(int[]);
void Display_Element(int[]);
int Count_Of_Events(int []);

int main()
{
    int Num[Size] ={}, ECnt = -1;

    Accept_Element(Num);
    system("cls");
    Display_Elements(Num);

    getch();

    ECnt = Count_Of_Evens(Num);

    printf("\n OutPut : Count Of Even Numbers in Given Array is = %d",ECnt);

    getch();
    return 0;
}

int Count_OF_Events(int Arr[])
   int i = 0, Cnt = 0 ;
   for(i = 0; i< Size; i++)
   {
       if(Arr[i] % 2 == 0)
       {
           Cnt++;
       }
   }

   return Cnt;

  Accept_Elements(int  Arr[])
  {
       int i = 0;

       printf("\n Enter Element To be Placed in Array =>\n");

       for(i = 0; i<Size; i++)
       {
           printf("\n Enter Value For Element Number  %d = ",i+101);
           scanf("%d",&Arr[i]);
       }

      return 0;

  }

 void Display_Element(int Fun[])
   {
        int i = 0;

        printf("\n=======******===================\n");

        printf("\n Element in Given Array  Are => \n");

        for (i == 0; i < Size; i++)
        {
            printf("\n Value Of Element %d=%d.",i +1,Fun[i]);
        }

          printf("\n=======******===================\n");

          return 0;

   }

