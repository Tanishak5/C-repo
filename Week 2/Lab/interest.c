#include <stdio.h>

double interest(double amount, double interestRate){
    return (amount + amount *(interestRate/100));
}

int main(){
    double a, i;
    printf("Enter the amount: \n");
    scanf("%lf", &a);
    printf("Enter the interest: \n");
    scanf("%lf", &i);
    printf("Add the %lf%% interest to %lf gives us %lf \n", i, a, interest(a, i));
}