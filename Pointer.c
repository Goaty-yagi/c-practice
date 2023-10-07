#include <stdio.h>

int main() {

    int num = 5;
    double dou = 0.5;
    // to access memory addresses, %p with & + variable.
    printf("%p", &num); 
    int * pNum = &num; //  to create pointer varible.
    double * pDou = &dou; // a type to declare must be the same as the original varible.
    // pointer is type of data. &num is pointer


//dereferencing is like get value from pointer vice versa
    printf("\n%p", pNum); // return address. 
    printf("\ncall with d:\n%d", * pNum); // dereferencing return 5
    printf("\n%d",  *&num); // dereferencing return 5
    printf("\n%p",  &*&num); // dereferencing return address
    return 0;
}