
#include<stdio.h>

int main() {

int numbers[] = {1, 2, 3, 4, 5};

// for(int i = 0; i<5; i++ ) {
//    printf("%d ", numbers[i]);

// }

 // size of array
  int sizeOfArray = sizeof(numbers)/sizeof(numbers[0]);

  for(int i = 0; i < sizeOfArray; ++i) {
    printf("%d ", numbers[i]);
  }

  
    return 0;
}