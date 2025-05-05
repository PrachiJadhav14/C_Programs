#include<stdio.h>
#include<conio.h>
void printHello(); ///Function Declaration / Prototype
  int main()
    {
        printHello();    ///Function Call
        printHello();
        printHello();
        printHello();
        return 0;

    }
    void printHello(){             ///Function Defination
      printf("Hello Function \n");
    }
