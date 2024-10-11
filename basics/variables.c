
#include<stdio.h>

int main() {

    char name[] = "Adam";
    int age = 20;
    char grade = 'A';
    

    printf( "Name : %s\n", name);
    printf( "Age : %d\n", age);
    printf( "Grade : %c\n", grade);


// working with input:

//   int input;
//   scanf( "%i", &input);
//   printf( "you entered : %i", input);

  char inputChar;
  scanf( "%c", &inputChar);
  printf( "you entered : %c ", inputChar); // char
  printf( "you entered : %i ", inputChar); // ascii value

    return 0;





}