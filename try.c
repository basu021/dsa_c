#include <stdio.h>
int main() {
    int no_of_input, arr[500], max, sum=0, d;
    scanf("%d", &no_of_input);
    for(int i=0; i<no_of_input; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &d);
    max = arr[0];
    for(int i=0; i<no_of_input; i++) {
        if(arr[i]>max) {
            max = arr[i];
            printf("max:- %d \n", max);
            arr[i] = 0;
        }
    }
    for(int i=0; i<no_of_input; i++) {
        sum += arr[i];
    }
    printf("%d\n", sum + max/d);
}

