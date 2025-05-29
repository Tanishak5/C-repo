#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <assert.h>

int count(char string1[], char string2[], int length1, int length2){
    bool match = true;
    int count = 0;
    for(int i = 0; i < length1; i++){
        for(int j = 0; j < length2; j++){
            if(string2[j] != string1[i]){
                match = false;
            }
        }
        if(match == true)count++;
    }
    return count;

}



int main(int n, char *args[n]){
    setbuff(stdout, NULL);
    if(n==0){
        printf("ERROR");
        return 1;
    } else if(n == 1){// Do whatever
    }else{
        int length1 = strlen(args[2]);
        int length2 = strlen(args[3]);
        count(args[1], args[2], length1, length2);
        return 0;
    }

}