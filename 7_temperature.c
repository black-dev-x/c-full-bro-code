#include <stdio.h>
#include <ctype.h>

int main(){

  char unit;
  float temp;

  printf("Is the temperature in Celsius or Fahrenheit? (C/F): ");
  scanf("%c", &unit);
  unit = toupper(unit);
  
  printf("Enter the temperature: ");
  scanf("%f", &temp);

  if (unit == 'C'){
    printf("The temperature in Fahrenheit is: %.2f\n", (temp * 9/5) + 32);
  } else if (unit == 'F'){
    printf("The temperature in Celsius is: %.2f\n", (temp - 32) * 5/9);
  } else {
    printf("Invalid unit\n");
  }

  return 0;
}
