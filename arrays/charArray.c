
#include<stdio.h>

int main() {

char myName[32] = "kevin";

  printf("%s\n", myName);
  printf("%c\n", myName[10]);
  printf("%d\n", myName[10]);

  printf("character for iterate\n");

  for(int i =0; i < sizeof(myName); i++) {

    printf("%d_", myName[i]);
    printf("%c_", myName[i]);
  }

printf("\n");

int i = 0;
while(myName[i] != '\0') {

    printf("%c_", myName[i]);
    i++;
}

    return 0;
}