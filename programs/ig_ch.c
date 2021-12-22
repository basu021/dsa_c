#include <stdio.h>

int main() {
    int a,b;
    char s[100];
    char c[5];
    printf("Desc. about your sal: ");
    scanf("%99[^:]%*c%d",s,&a);
    printf("Well your salary is %d",a);
    printf("\nTrying on 5 char: \nEnter 4 words and a number");
    scanf("%4[^\n]s%d",c,&b);
    printf("Your input integer is : %d",b);
}