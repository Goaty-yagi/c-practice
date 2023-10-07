#include <stdio.h>

int main () {
    // format specifier = %

    // %c = character
    // %s = string (array of character)
    // %f = float
    // %lf = double
    // %d = interger

    // %.N = decimal precision N is num
    // %N = minimum field width
    // %-N = left align

    float item = 5.75;
    char item2 = 'o';
    printf("item 1:%f\n",item); // return 5.750000
    printf("item 1:%.2f\n",item); // return 5.75
    printf("item 2:%2c\n",item2); 
    printf("item 2:%3c\n",item2);

    //array
    int numbers[] = {1,2,3,4,5}; // declare an array
    int nums[10]; // means this array can hold 10 ints
    printf("Array:%d\n", numbers[0]); //access to the index 0, in this case 1
    numbers[1] = 20; // reasign to index 1
    printf("Array2%d", numbers[1]);
    return 0;
}