#include<stdio.h>
#include<conio.h>

  void printTable(int n);         ///Declaration

int main()
{
    int n;
   printf("\n Enter The No =>");
   scanf("%d",&n);

   printTable(n);     //Arguments

}
 void printTable(int n)          ///Parameters
{
     for (int i = 1; i<= 10; i++){
        printf("%d\n",i*n);
     }
}


