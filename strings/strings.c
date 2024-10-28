#include<stdio.h>
#include<ctype.h>
#include<string.h>

// functions declarations to work with the strings!!
void printString(char *);
void upperString(char *string);
int compare(char string1[], char string2[]);
void copyString(char *source, char *dest);
int lengthOfString(char *name); 

// main method starts here.
 int main() {

    char name[] = "Kevin";
    char nameCopy[32];
    
    // printf("%c\n",toupper(name[1]));
    // printString(name);
    // copyString(name, nameCopy);
    // printString(nameCopy);
    // upperString(name);
    // printString(name);
    printf("%d", lengthOfString(name));
    return 0;

 }  // main method ends here

// function to print the string...
void printString(char *string) {
     for (int i = 0;  string[i] != '\0'; i++)  {
         printf("%c", string[i]);
     }
}
//  function to copying the string ..
void copyString(char *source, char *dest) {
    for (int i = 0; source[i] != '\0';  i++) {
        dest[i] = source[i];
    }
}
// function to conver the string to uppercase.
void upperString(char *string) {
    for (int i = 0;  string[i] != '\0'; i++) {
       string[i] = toupper(string[i]);   
    }    
}
 // function to compare the strings.
int compare(char *string1, char *string2) {

  return 0;
}
 // functions to find the length of a string.
int lengthOfString(char *name) {
    int length = 0;
    for (int i = 0; name[i] != '\0'; i++){
        length++;
    }
    return length;
}
