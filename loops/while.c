#include <stdio.h>

int main() {
  int sum = 0;

  int i = 0;
  /*
  while (i < 10) {
    sum += i;
    i++;
    printf("%d\n", sum);
  }
*/
  do {
    sum += i;
    i++;
    printf("%d\n", sum);
  } while (i < 10);
  printf("Overall sum: %d\n", sum);
  return 0;
}
