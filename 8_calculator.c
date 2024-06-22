#include <stdio.h>

int main(){
  char operator;
  double number1;
  double number2;
  double result;

  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &operator);

  printf("Enter two numbers: ");
  scanf("%lf %lf", &number1, &number2);

  switch (operator){
    case '+':
      result = number1 + number2;
      break;
    case '-':
      result = number1 - number2;
      break;
    case '*':
      result = number1 * number2;
      break;
    case '/':
      result = number1 / number2;
      break;
    default:
      printf("Invalid operator\n");
      return 1;
  }

  printf("%.2lf %c %.2lf = %.2lf\n", number1, operator, number2, result);
  return 0;
}
