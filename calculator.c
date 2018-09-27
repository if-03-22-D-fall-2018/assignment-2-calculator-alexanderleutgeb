#include <stdio.h>

int main(int argc, char const *argv[]) {
  printf("Choose one of the following operations: ");
  printf("Add(1)\n");
  printf("Subtract(2)\n");
  printf("Multiplay(3)\n");
  printf("Divide(4)\n");
  printf("Stop programm(-1)\n");
  printf("Enter your Choice:\n");

  int type_of_operation;
  scanf("%d\n", &type_of_operation);

  if (type_of_operation == -1) {
    printf("Programm quit by user request\n");
  }

  else if (type_of_operation == 1) {
    Get_first_number();
    Get_second_number();
    double result = first_number+second_number;
    printf("Result: %lf\n", result);
  }
  else if (type_of_operation == 2) {
    Get_first_number();
    Get_second_number();
    double result = first_number-second_number;
    printf("Result: %lf\n", result);
  }
  else if (type_of_operation == 3) {
    Get_first_number();
    Get_second_number();
    double result = first_number*second_number;
    printf("Result: %lf\n", result);
  }
  else if (type_of_operation == 4) {
    Get_first_number();
    Get_second_number();
    if (second_number == 0) {
      printf("division by zero\n", );
    }
    else{
      result = first_number/second_number;
      printf("Result: %ld\n", &result);
    }
    double result = first_number/second_number;
    printf("Result: %lf\n", result);
  }
  else{
    printf("Invalid Input\n");
  }
  return 0;
}
//Gets the first number
double Get_first_number(){
  printf("Please enter the first operand: \n");
  double first_operand;
  scanf("%lf\n",&first_operand);
  return first_operand;
}
//Gets the second number
double Get_second_number(){
  printf("Please enter the second operand: \n");
  double second_operand;
  scanf("%lf\n",&second_operand);
  return second_operand;
}
