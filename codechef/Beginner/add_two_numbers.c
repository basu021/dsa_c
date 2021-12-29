// Add Two Numbers 

// Problem Statement

// Shivam is the youngest programmer in the world, he is just 12 years old.
// Shivam is learning programming and today he is writing his first program.
// The task is very simple: given two integers A and B, write a program to add 
// these two numbers and output it.

// Sample Input 1 
// 3
// 1 2
// 100 200
// 10 40
// Sample Output 1 
// 3
// 300
// 50

#include <stdio.h>
int add(int a, int b);
int main() {
    int input,first_num,second_num;
    int result[1000];
    scanf("%d",&input);
    for(int i = 0; i < input; i++) {
        scanf("%d %d",&first_num,&second_num);
        result[i] = add(first_num,second_num);
    }
    for(int i = 0; i < input; i++) {
        printf("%d\n",result[i]);
    }
    return 0;
}
int add(int a, int b) {
    return a+b;
}