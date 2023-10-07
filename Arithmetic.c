#include <stdio.h>

int main() {
    // arithmetic operations

    // + (adding)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (modulus)
    // ++ increment
    // -- decrement

    float x = 5;
    int y = 2;

    int z = x / y;  // return 2, int cant hold decimal
    float zz = x / y;  // return 2
    float zzz = x / (float)y;  // return 2
    printf("%d\n",z);
    printf("%f\n",z); // int cant form with f
    printf("%f\n",zz); //return 2.000000, still not 2.5
    printf("%f\n",zzz); //return 2.500000, you can change y to float to get the same result not x in this case.

}