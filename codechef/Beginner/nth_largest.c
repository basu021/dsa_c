#include <stdio.h>

int main() {
    int arr[1000];
    int arr_size;
    printf("Enter the size of the array: ");
    scanf("%d", &arr_size);
    for(int i=0; i<arr_size; i++) {
        scanf("%d",&arr[i]);
    }
    printf("Entered arr = [ ");
    for(int i=0; i<arr_size; i++) {
        printf("%d ",arr[i]);
    }
    printf("]");
    
}