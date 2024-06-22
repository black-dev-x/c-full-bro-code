#include <stdio.h>
#include <math.h>

int main() {
  double side1, side2, hypotenuse;

  printf("\nEnter the length of side 1: ");
  scanf("%lf", &side1);

  printf("Enter the length of side 2: ");
  scanf("%lf", &side2);

  hypotenuse = sqrt((side1 * side1) + (side2 * side2));

  printf("\nThe length of the hypotenuse is: %lf\n\n", hypotenuse);

  return 0;
}
