#include <stdio.h> //standard input, output
#include <stdbool.h> //standard boolean

int main() {
    printf("I like python!");
    printf("this is in the same line!");
    printf("\nthis is in the next line!\n");

    //datatype
    int integer = 9;
    float fl = 0.5;
    char grade = 'C'; //single character
    char string[] = "stirng";
    printf("my grade is %d.\n",integer); //use %d to print int
    printf("this is string: %s\n", string); //use %s to print cha array(string)
    printf("this is Cha %c.\n", grade); //use %c to print single cha
    printf("this is Float %f\n", fl); // use %f to print float

    float a = 3.1456781273432; // 4 bytes(32bits precision) 6 - 7 digits %f
    double d = 3.1456781273432; // 8 bytes(64bits precision) 15 - 16 digits %lf
    printf("f:%0.15f\n", a); // 0,15 means 15 digits
    printf("d:%0.15lf\n",d);

    bool bo = true; //1 byte(true(1) or false(0)) %d
    bool bof = false;
    printf("boolTrue:%d\n", bo);
    printf("boolFalse:%d\n", bof);

    char cha1 = 120; // you can set int, 1byte(-128 to +127) %d or %c
    unsigned char cha2 = 228; // 1byte(0 to +255) %d or %c, returns err is out of the range.
    printf("with d:%d\n", cha1);
    printf("with c:%c\n", cha1); //from ascii tabel
    printf("with undefined d:%d\n", cha2);
    printf("with undefined c:%c\n", cha2);

    short int sho = 32767; // 2byte (-32768 to +32767) %d if overlow will be from minimum int,  
    short shor = 32767; // same as the above
    unsigned short int sho2 = 32767; // 2byte (0 to +65535) %d 
    int inter = 342432; //4byte (-2147483648 to +2147483647, unsined is the working in the same way.
    long long int lon = 8345834795895; //8 byte, why lomg long? because int is already long.
    return 0;
}
 