#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <assert.h>
/* 
3 disks 
3 pillars
smaller placed on larger only

recurseive
if 1 sequence is 1
if 2 middle use as temporary

*/

void hanoi(int n, int source, int aux, int target){
    int count = 0;
    if(n == 1){
        printf("\n Move 1 disk from stack %d to stack %d\n", source, target);
    }
    else{
        hanoi(n - 1, source, target, aux);
        printf("\n Move %d disks from stack %d to stack %d \n", n, source, target);
        hanoi(n-1, aux,  source, target);
        
    }
}



int main(){
    setbuf(stdout, NULL);
    int n;
    printf("ENTER THE NUMBER OF DISKS: \n");
    scanf("%d", &n);
    printf("%d", n);
    hanoi(n, 1, 2, 3);

}

