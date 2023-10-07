#include <stdio.h>

int main(){
    FILE * fpointer = fopen("test_file_name.txt","w"); // open file
    // first arg is filename, second arg is mode
    // mode w = write, r = read, a = 'append'
    // the file variable is pointer include the file address. 
    // if the file doesnt exist, will be created.
    fprintf(fpointer,"Hello \ntest \nmomo"); // write text, it will be overridden each run.


    fclose(fpointer); // close file

    ///READ FILE
    char line[255];
    FILE * fpointer1 = fopen("test_file_name.txt","r");

    fgets(line, 255, fpointer1); // get first line
    printf("%s",line);
    fgets(line, 255, fpointer1); // get second line
    printf("%s",line);
    fclose(fpointer1);
    return 0;
}