#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <assert.h>


int fibonacci(int n){
    if(n == 0) return 1;
    else if(n == 1) return 1;
    else{
        return fibonacci(n-1) +  fibonacci(n-2);
    }
}




int main(int n, char *argc[n]){
    setbuf(stdout, NULL);
    if(n==0){
        fprintf(stderr, "NOT ENOUGH ARGUMENTS");
        return 1;
    }else if(n == 1){
        // run tests
    } else{
        printf("%d", fibonacci(atoi(argc[1])));
        return 0;
    }
}