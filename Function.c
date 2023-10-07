#include <stdio.h> 

void noReturn();
double cube(double num); // to access function declared after main fun, 
// it shoud be prototyped like this before main.


int main() {
    noReturn();
    return 0;
}

void noReturn() {
    printf("Just print");
}

double cube(double num){
    return num * num;
}