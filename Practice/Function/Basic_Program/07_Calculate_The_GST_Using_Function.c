#include<stdio.h>
#include<conio.h>

void CalculatePrice(float Value); ///Declaration

int main()
{
    float Value = 100.0;
    CalculatePrice(Value);    ///Arguments
    printf("\nValue is : %f",Value);

    return 0;
}
void CalculatePrice(float Value)           ///Parameters
{
    ///Value =  Value + (0.18 * Value);
    Value += (0.18 * Value);
    printf("\n Final Price is : %f",Value);
}
