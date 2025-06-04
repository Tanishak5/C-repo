#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <assert.h>
#include <math.h>


void enrich(char input[], char results[], int length, int length1){
    //LOOP through elements of results
    // Loop through elemnts of input
    // Every other input element added twice to the result
    // I increases by 1, pointer in results increases depending on i
   int j =0 ;
   int i = 0;
    while(j < length1 - 1){
        results[j] = input[i];
        if(i % 2 == 1){
            results[j + 1] = input [i];
            j+=2;
        }else{
            j++;
        }
        i++; 
    }
    results[length1 - 1] = '\0';
    for(int j = 0; j < length1 - 1; j++){
        printf("%c", results[j]);
    }
    // printf("%d the length of", strlen(results));
}
    


void test(){
    char results1[8];
    char results2[8];
    enrich("hello", results1, strlen("hello"), 8);
    enrich("final", results2, strlen("final"), 8);
    assert(strcmp(results2, "fiinaal\0") == 0);
    assert(strcmp(results1, "heelllo\0") == 0);
    printf("\nALL tests pass \n");

}

int main(int n, char *args[n]){
    setbuf(stdout, NULL);
    if(n == 0){
        fprintf(stderr, "USAGE OF . WITHOUT FILE NAME");
        return 1;
    } else if(n == 1){
        test();
        return 0;
    }else{
        int length = strlen(args[1]);
        int length1 = round(length / 2)  + 1+length;
        char string1[length1];
        enrich(args[1], string1, length, length1);
    }
}