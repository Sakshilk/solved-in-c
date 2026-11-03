#include <stdio.h>
int main(){
  int num1,num2;
  float result;
  int choice;
  printf("MAIN MENU:\n");
  printf("1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Modulus\n");
  printf("Enter the first integer:");
  scanf("%d",&num1);
  printf("Enter the second integer:");
  scanf("%d",&num2);
  printf("Enter the operation: %d",choice);
  switch (choice)
  {
  case 1 :
    result = num1 + num2;
    printf("%f",result);
    break;
  
  default:
   printf("Please enter the correct operation and try again!");
    break;
  }
  
}