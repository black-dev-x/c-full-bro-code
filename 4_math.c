#include <stdio.h>
#include <math.h>

int main(){
  double A = sqrt(9);
  double B = pow(2, 4);
  int C = round(3.14);
  int D = ceil(3.14);
  int E = floor(3.99);
  double F = fabs(-100.0);
  double G = log(3);
  double H = sin(45);
  double I = cos(45);
  double J = tan(45);

  printf("The square root of 9 is: %f\n", A);
  printf("2 to the power of 4 is: %f\n", B);
  printf("The rounded value of 3.14 is: %d\n", C);
  printf("The ceiling value of 3.14 is: %d\n", D);
  printf("The floor value of 3.99 is: %d\n", E);
  printf("The absolute value of -100 is: %f\n", F);
  printf("The natural log of 3 is: %f\n", G);
  printf("The sine of 45 is: %f\n", H);
  printf("The cosine of 45 is: %f\n", I);
  printf("The tangent of 45 is: %f\n", J);
}
