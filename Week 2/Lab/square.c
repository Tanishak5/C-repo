#include <stdio.h>

int square(int n){
    return n * n;
}


int main(){
    int n;
    printf("Enter the number you want to square\n");
    scanf("%d", &n);
    printf("Your ansewr is %d \n", square(n));
    return 0;
}