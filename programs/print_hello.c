int printf(const char *format, ...); 

int main() {
    int a;
    printf("Enter your age: ");
    scanf("%d", &a);
    printf("You are %d years old.\n", a);
    
}