#include<stdio.h>
#include<conio.h>

struct Product
{
    int p_Id;
    char p_Name[20];
    float p_S_price;
    float p_p_price;

};
int main()
{
    int Cnt = 0;
    struct Product *S_ptr = NULL;

    printf("\n How Many Products Do You Want To Add => ");
    scanf("%d",&Cnt);

    S_ptr = (struct Product*)malloc(Cnt * sizeof(struct Product));

    printf("\n\n Accepting Product Details => \n");

    for(int i = 0; i < Cnt; i++)
    {
        printf("\n Enter %d Product ID = ",i+1);
        scanf("%d",&S_ptr[i].p_Id);
        printf("\n Enter %d Product Name =",i+1);
        scanf("%d",&S_ptr[i].p_Name);
        printf("\n Enter %d product Sales price =",i+1);
        scanf("%f",&S_ptr[i].p_S_price);
        printf("\n Enter %d Product Purchase Price =",i+1);
        scanf("%f",&S_ptr[i].p_p_price);
   }
   system("cls");
   printf("\n\n==============================********************==================\n");


    // Display Product Details
    printf("\n Display Product Details =>\n");


    for(int i = 0; i < 3; i++)
    {
      printf("\n %d Product Details => \n ID = %d. \n Sales Price = %0.2f. \n Purchase price = %0.2f.\n",i+1, S_ptr[i].p_Id,S_ptr[i].p_Name,S_ptr[i].p_S_price,S_ptr[i].p_p_price);
    }

    printf("\n\n===============***************=================");

    return 0;

}





