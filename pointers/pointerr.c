#include <stdio.h>

void swap(int *x, int *y);

int main()
{
    //  pointer in c
    // int age = 20.00;
    // int *pAge = &age;

    // printf("%p\n", &age);
    // printf("%p\n", pAge);
    // printf("%i\n", age);
    // printf("%i\n", *pAge);
    // printf("%p\n", &pAge);
    // printf("%d\n", sizeof(pAge));

    // char name[8] = "Jay";
    // char* pName = &name;

    // size of pointer is 8 bytes, no matter what type of pointer we create so far....
    // printf("%s\n",name);
    // printf("%c\n",name[0]);
    // printf("%s\n",*pName);
    // printf("%d\n",sizeof(pName));

    // double pointers ->
    int num = 18;
    int *first_Ptr = &num;         // -> int* -> int ka address store krega yahan pe
    int **second_ptr = &first_Ptr; // int** -> int* ka address store krega yahan pe

    // printf("%p\n", &num); 
    // printf("%p\n", first_Ptr); 
    // printf("%p\n", second_ptr);

    // following will print their own address, bcus pointers first_ptr and second_ptr has their own addresses as well!
    // printf("%p\n", &num); 
    // printf("%p\n", &first_Ptr); 
    // printf("%p\n", &second_ptr);

    // printing the values;
    // printf("%d\n", num); // 18
    // printf("%d\n", *first_Ptr);  // 18
    // printf("%d\n", **second_ptr); // 18
    // // swaping numbers
    // int x = 2;
    // int y = 10;

    // printf("Value of x and y before swaping %d %d\n", x,y);
    // swap(&x, &y);
    // printf("Value of x and y after swaping %d %d\n", x,y);

    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
