#include <stdio.h> 
#include <string.h> 

int main() {

    char name[25]; //byte
    int age;
    printf("What is your name?");
    // scanf("%s", &name); // this case, white space won't be accepted
    fgets(name,25,stdin); // fgets can accept white space. and append \n

    printf("How old are you?");
    scanf("%d", &age); //scanf shows input field in terminal.
    // first arg is type, second is variable to store the val.

    printf("Your name is %sj", name);
    printf("You are %d years old\n", age);
    char firstname[10];
    char lastname[10];
    printf("Enter fullname");
    scanf("%s%s",firstname, lastname); // user can enter fname and lname in one go by dividing with whitespace.
    printf("fullname: %s %s",firstname, lastname);
    return 0;
}