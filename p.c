#include <stdio.h>
int add(int a, int b);
int main() {
    int input,first_num,second_num,sum=0;
    int result[1000];
	scanf("%d",&input);
    for(int i = 0; i < input; i++) {
        scanf("%d %d",&first_num,&second_num);
        result[i] = add(first_num,second_num);
    }
    for(int i = 0; i < input; i++) {
        printf("%d\n",result[i]);
        sum = sum + result[i];
    }
    printf("\n%d",sum);
    return 0;
}
int add(int a, int b) {
    return a+b;
}