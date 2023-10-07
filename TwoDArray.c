#include <stdio.h>

int main() {
    int nums[3][2] = {
        // first num is index0 array, second num is length 
        {1,2},
        {3,4},
        {5,6}
    };
    printf("%d",nums[0][0]); // access first array
    // in python list = [[1,2],[3,4],[5,6]]
    return 0;
}