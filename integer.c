#include <stdio.h>
// Week 1 
// Warm Ups
// 1). Cube .c 

int cube(int n){
    return n * n * n;
}

double sphere(double r){
    return r * r * 3.14;
}

int remainde(int x, int y){
    return x % y;
}

int factorial(int f){
    int start = 1;
    for(int i =1; i < f; i++){
        start = start * i;
    }
    return start;
}

int collatz(int x){
    printf("%d, ", x);
    if(x == 1) return 1;
    if(x%2 == 0) x= x/2;
    else x = x *3 + 1;
    return collatz(x);
    
    
}



int main(){
    int n; int r; int x; int y; int z; int f; int c;
    printf("Enter the integer you want you want: \n");
    scanf("%d", &n);

    printf("Enter the radius you want you want: \n");
    scanf("%d", &r);

    printf("Enter the number you want you want: \n");
    scanf("%d", &x);
    printf("Enter the number you want to be divided: \n");
    scanf("%d", &y);
    printf("Enter the number you want to divide with: \n");
    scanf("%d", &z);
    
    printf("Enter the number you want the factorial of: \n");
    scanf("%d", &f);
    printf("Your factorial is: %d \n", factorial(f));

    printf("What do you want to find the collatz conjecture\n");
    scanf("%d", &c);
    printf("The anser for collatz is: %d", collatz(c));


    printf("you're answer is: %d for cubing\n. Your answer is %f for surface area.\n", cube(n), sphere(r));
    printf("Your answer for remainder is %d, \n", remainde(y,z));
    if(x % 2 == 0){printf("even");}
    else{printf("ODD");}
    


    
    return 0;
}
// clang -std=c11 -Wall minimal.c -o minimal$ ./minimal
