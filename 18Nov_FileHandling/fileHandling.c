#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE_OF_LINE 32

int main() {
  
  FILE *fileToRead = fopen("readNames.txt", "r");
  FILE *fileToWrite = fopen("writeNames.txt", "w");
  char buffer[SIZE_OF_LINE];

  // read each line from the file 
  while(fgets(buffer, SIZE_OF_LINE, fileToRead) != NULL){

    // converting to uppercase
    for (int i = 0; i < SIZE_OF_LINE; i++) {
      buffer[i] = toupper(buffer[i]);
    } 
      // writing to file
      fputs(buffer, fileToWrite);
      
  }
     
  return 0;
}