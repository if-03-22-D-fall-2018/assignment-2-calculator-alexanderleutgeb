#include <stdio.h>

void AddOperands(){
  GetFirstOperand();
  GetSecondOperand();
  int result;
  result = firstOperand+secondOperand
  printf("Result: %lf\n", result);
}
void SubOperands(){
  GetFirstOperand();
  GetSecondOperand();
  int result;
  result = firstOperand-secondOperand
  printf("Result: %lf\n", result);
}
void MultiplyOperands(){
  GetFirstOperand();
  GetSecondOperand();
  int result;
  result = firstOperand*secondOperand
  printf("Result: %lf\n", result);
}
void DivideOperands(){
  GetFirstOperand();
  GetSecondOperand();
  int result;
  result = firstOperand/secondOperand
  printf("Result: %lf\n", result);
}
int GetFirstOperand(){
  double firstOperand;

  return firstOperand;
}
int GetSecondOperand(){
  double secondOperand;
  
  return secondOperand;
}
int main(int argc, char const *argv[])
{
  printf("Choose one of the following operations: ");
  printf("Add(1)\n");
  printf("Subtract(2)\n");
  printf("Multiplay(3)\n");
  printf("Divide(4)\n");
  printf("Stop programm(-1)\n");
  printf("Enter your Choice:\n");

  int type_of_operation;
  printf("Enter yout choice: ");
  scanf("%d\n", &type_of_operation);

  switch (type_of_operation) {
    case -1:
      printf("Programm closes by users desission\n");
      return 1;
    case 1:
      AddOperands();
    case 2:
      SubOperands();
    case 3:
      MultiplyOperands();
    case 4:
      DivideOperands();
  }
}
