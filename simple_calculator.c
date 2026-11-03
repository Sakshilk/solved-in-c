/* Variables 
* num1 = stores the first integer operand
* num2 = stores the second integer operand 
* result = stores the result of the selected operation
* choice = stores the user's choice of operation 
 */
#include <stdio.h>
int main(){
  int num1,num2;
  int result;
  int choice;

  //Display the main menu using printf()
  printf("MAIN MENU:\n");
  printf("1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Modulus\n");

  //Read the two operands and user's choice 
  printf("Enter the first integer:");
  scanf("%d",&num1);
  printf("Enter the second integer:");
  scanf("%d",&num2);
  printf("Enter the operation:");
  scanf("%d",&choice);

  //Using switch-case to perform simple calculator operations
  switch (choice)
  {
  case 1 :
    result = num1 + num2;
    printf("%d",result);
    break;
  case 2 :
   printf("Subtraction\n");
   result = num1 - num2;
   printf("%d",result);
   break;
  case 3:
   printf("Multiplication:\n");
   result = num1*num2;
   printf("%d\n",result);
   break;
  case 4:
   result = num1/num2;
   printf("%d\n",result);
   break;
  case 5:
   result = num1%num2;
   printf("%d\n",result);
   break;
  default:
   printf("Please enter the correct operation and try again!");
    break;
  }
  
}
