#include <stdio.h>
#include <string.h>

int main(){
  int age;
  char name[20];

  printf("What is your name? ");
  //the scanf won't include whitespaces, a problem when you have first and and last name
  //scanf("%s", name);
  
  fgets(name, 20, stdin);
  name[strlen(name) - 1] = '\0';

  printf("How old are you? ");
  scanf("%d", &age);

  printf("\nHello, %s!\n", name);
  printf("You are %d years old\n", age);
  return 0;
}
