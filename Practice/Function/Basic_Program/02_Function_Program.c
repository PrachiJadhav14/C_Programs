#include<stdio.h>
#include<conio.h>

  void printHello();          //Function Declaration / Function Prototype
  void printGoodBye();
  int main()
  {
     printHello();       //Function Call
     printGoodBye();
      printHello();
       printGoodBye();
       return 0;

  }
   void printHello()        //Function Defination
   {
       printf("Hello \n ");
   }
  void printGoodBye()  //Function Defination
    {
       printf("Good Bye \n ");
    }
