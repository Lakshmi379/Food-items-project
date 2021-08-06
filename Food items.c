#include<stdio.h>
#include<conio.h>
void main()
{
	int choice;
	int num;
	float price;
	printf("Food items\n");
	printf("----------\n");
	printf("1.Pasta\n");
	printf("2.Pizza\n");
	printf("3.Sandwich\n");
	printf("4.French Fries\n");
	printf("5.Burger\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
	printf("Pasta");
	break;		
	case 2:
	printf("2.Pizza");
	break;
	case 3:
	printf("3.Sandwich");
	break;
	case 4:
	printf("4.French Fries");
	break;
	case 5:
	printf("5.Burger");
	break;
	default:
	printf("Invalid choice");
    }
    if(choice==1)
    {
    printf(" Price:Rs 179");
    scanf("%d",&price);
    }
    if(choice==2)
    {
    printf(" Price:Rs 239");
    scanf("%d",&price);
    }
    if(choice==3)
    {
    printf(" Price:Rs 149");
    scanf("%d",&price);
    }
    if(choice==4)
    {
    printf(" Price:Rs 99");
    scanf("%d",&price);
    }
    if(choice==5)
    {
    printf(" Price:Rs 129");
    scanf("%d",&price);
    }
}
