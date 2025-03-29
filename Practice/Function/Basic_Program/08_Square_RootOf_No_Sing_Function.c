#include<stdio.h>
#include<conio.h>

void CalculateSquare(float Value);

int main()
{
    int n = 4;
    printf("%f",pow(n,2));

  return 0;
}
void CalculatePrice(float Value)
{
    Value = Value + (0.18*Value);
    printf("Final Price is : %f\n",Value);
}

