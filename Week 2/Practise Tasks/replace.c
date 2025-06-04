/* Example Solution: Replace a string within another string. */ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <assert.h>

void createArray(int **arr, int numItems, int initialValue){
    *arr = malloc(numItems * sizeof(int));
    if(*arr == NULL){
        fprintf(stderr, "MEM ALLOC faled \n");
    }

    for(int i = 0; i < numItems; i++){
        (*arr)[i] = initialValue;
    }
}

void createCharArray(char **arr, int numItems, char initialValue){
    *arr = malloc(numItems *sizeof(char));
    if(*arr == NULL){
        fprintf(stderr, "MemAlloc failed\n");
    }

    for(int i = 0; i < numItems; i++){
        (*arr)[i] = initialValue;
    }
}

void replacement(int lengthOfResults, int lengthOfReplacement, int lengthOfCheck, char string1[], char* results, int* list1, int count){
    for(int i = 0; i <lengthOfReplacement; i++){
        if(list1[i]!=100){
            for(int j= 0; j < lengthOfReplacement; j++){
                results[list1[i]+j] = string1[j];
            }
            
        }else{
            count = 0;
            for(int i  = 0; i < lengthOfResults; i++){
                if(results[i] == '/'){
                    results[i] = string1[count];
                    printf("\n rest results[i] %c  %d %c %d \n", results[i], i, string1[count], count);
                    count++;
                }else{
                    count = lengthOfCheck + 1;
                }
            }
        }
    }
}


bool innerWordNoOverlap(char string1[], char string2[]){
    int length1 = strlen(string1);
    int length2 = strlen(string2);
    int lastMatch = 0, match = 0, x = 0, count = 0;
    int currentMatch = 100;
    bool matched = false;
    int* list1 = NULL;
    char* results = NULL;
    createArray(&list1, length1, 100);
    
    for(int i = 0; i < length1; i++){
        if(string1[i] == string2[0] && (currentMatch - lastMatch) > length2){
            currentMatch = i;
            for(int j = 0; j < length2; j++){
                if(string1[i + j] == string2[j]) {
                    match++;
                    matched = true;
                }
                else{
                    matched = false;
                }
            }
            lastMatch = currentMatch;
            if(currentMatch <= length1){
                list1[x] = currentMatch;
                printf("%d heloooo", list1[x]);
                printf("thesijfain %d", sizeof(list1));
                x++;

            }
            
        }
        
    }

    match = match / length2;
    int newLength = length1 - length2 + length1 * match;
    createCharArray(&results, newLength, '/');
    replacement(newLength, length1, length2, string1, results, list1,count);

    printf("\n");
    for(int k = 0; k < newLength; k++){
        printf("%c", results[k]);
    }
    free(list1);
    free(results);
    return true;
}
// length1, new length, aha


int main(int n, char *args[n]){
    setbuf(stdout, NULL);
    if(n==0){
        fprintf(stderr,"ERROR");
        return 1;
    }else if(n == 1){
        //do whatever
    }else{
        innerWordNoOverlap(args[1], args[2]);
    }
}