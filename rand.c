#include <stdio.h>
#include <stdlib.h>

int main () {
    int upper = 6, lower = 1, num = 0;
    printf("Enter the number of dice: ");
    scanf("%d", &num);
    for(int i = 0; i < num; i++) {
        int dice = rand() % (upper - lower + 1) + lower;
        printf("%d ", dice);
    }
}