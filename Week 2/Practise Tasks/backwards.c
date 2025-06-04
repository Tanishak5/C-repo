#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <assert.h>

void backwards(char string[], char reversed[]){
    int length = strlen(string);
    reversed[length] = '\0'; //Missed This First Go Around

    for(int i = length - 1; i >= 0; i--){
        reversed[length-1 - i] = string[i];
    }

    for(int i = 0; i < length; i++){
        printf("%c", reversed[i]);
    
    }
    printf("\n");
}

void test(){
    char word1[6];
    char word2[2];
    char word3[8];

    backwards("Hello", word1);
    backwards("A", word2);
    backwards("Reverse", word3);

    assert(strcmp("olleH", word1) == 0);
    assert(strcmp("A", word2) == 0);
    assert(strcmp("esreveR", word3) == 0);
    printf("All tests pass \n");

}



int main(int n, char *args[n]){
    setbuf(stdout, NULL);
    if(n == 0){
        printf("Sorry You didn't Enter an argument");
        fprintf(stderr, "Ussage: ./Hanoi");
        return 1;
    }
    else if(n == 1) {test();
    }
    else{
        char reversed[strlen(args[1]) + 1];
        char string[strlen(args[1])];
        backwards(args[1], reversed);

    }
    

    return 0;
}