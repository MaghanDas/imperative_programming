#include <stdio.h>

int main()
{
  char myName[32] = "Kevin";

  // printf("%s\n", myName);
  // printf("%c\n", myName[10]);
  // printf("%d\n", myName[10]);
  // printf("CHAR FOR ITERATE\n");

  // for (int i = 0; i < sizeof(myName); i++)
  // {
  //   printf("%d_", myName[i]);
  // }

  //   int i = 0;
  //   while (myName[i] != '\0') {
  //     printf("%c_", myName[i]);
  //     i++;
  //   }

  // for (unsigned int i = 0; myName[i];) {
  //   myName[i] = 'K';
  //   printf("%c_", myName[i++]);
  // }

  //
  // 0. Create an array, that has length 3, and store the values from the user,
  // using scanf.

  //   int arr[3];
  //   printf("write the values : ");
  //  for (int i = 0; i < 3 ; i++) {
  //    scanf("%d_",  &arr[i]);
  // }

  // for (int i = 0; i < 3 ; i++) {
  //     printf("you entered %d \n" , arr[i] );
  // }

  // 1. Save your name in an array, iterate through the array and change all the
  // characters to be eitehr Upper or Lowercase

  // char name[] = "maghan";
  // int sizeOfArray = sizeof(name) / sizeof(name[0]);
  // int i = 0;
  // while (name[i])
  // {
  //   printf("%c", name[i] - 32);
  //   i++;
  // }

  // 2. Use scanf to read in a string from the user and print it out using ONLY
  // while loop / for loop.

  char username[7];
  int sizeOfArray = sizeof(username) / sizeof(username[0]);

  printf("input your name : ");
  int i = 0;
  while (i < sizeOfArray - 1)
  {
    scanf("%c", &username[i]);
    i++;
  }

  for (int j = 0; j < sizeOfArray - 1; j++)
  {
    printf("%c", username[j]);
  }

  // 3. Calculate the factorial of a number given by the user. First save each
  // element as 1, 2, ....., n (n is the given number) and use this array to
  // calculate the factorial of the number in another for loop.

  return 0;
}