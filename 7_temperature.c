#include <stdio.h>
#include <ctype.h>

int main(){

  char unit;
  float temp;

  printf("Is the temperature in Celsius or Fahrenheit? (C/F): ");
  scanf("%c", &unit);
  unit = toupper(unit);

  if (unit == 'C'){
    printf("The temperature in Fahrenheit is: %.2f\n", (temp * 9/5) + 32);
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temp);
  } else if (unit == 'F'){
    printf("The temperature in Celsius is: %.2f\n", (temp - 32) * 5/9);
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &temp);
  } else {
    printf("%c is not a valid unit of measurement\n", unit);
  }

  return 0;
}
