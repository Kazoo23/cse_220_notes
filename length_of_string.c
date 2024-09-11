#include <stdio.h>

int cse_strlen(char str[]);

int main(int argc, char *argv[]){
    //prints out the length of the string
    printf("Length is %i\n", cse_strlen(argv[1]));
    return 0;
}

int cse_strlen(char str[]){
    int len = 0;
    //loops until i is the index of the null character, prints out each character, sums up the length
    for (int i = 0 ; str[i] != '\0' ;i++){
        putchar(str[i]);
        putchar('\n');
        len ++;
    }
    return len;
}