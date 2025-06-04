#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <assert.h>

int count(char string1[], char string2[], int length1, int length2){
    int matches = 0;
    for(int i = 0; i < length1; i++){
        if(string1[i] == string2[0]){
            for(int j = 0; j < length2; j++){
                if(string2[j] == string1[i + j] && i <= (length1 - length2))matches++;
            }
        }
    }
    int count = matches / length2;
    return count;

}

void test(){
    assert(count("hahaha", "aha", 6, 3) == 2);
    assert(count("aaaaa", "a", 5, 1) == 5);
    assert(count("hello", "d", 5, 1) == 0);
    assert(count("aaaaa", "aa", 5, 2) == 4);
    printf("All tests pass");

}



int main(int n, char *args[n]){
    setbuf(stdout, NULL);
    if(n==0){
        fprintf(stderr, "Usage:   ./count   or   ./count w i\n");
        fprintf(stderr, "where w is an word and i is a inner word to search for.\n");
        return 1;
    } else if(n == 1){
        test();
    }else{
        int length1 = strlen(args[1]);
        int length2 = strlen(args[2]) ;
        int counter = count(args[1], args[2], length1, length2);
        printf("Counter is %d \n", counter);
    }
    return 0;

}