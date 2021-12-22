#include <stdio.h>
#include <stdlib.h>

int add(int a, int b){
    printf("%d + %d = %d",a,b,a+b);
}

int main(){
	char operator;
	int a,b,choice;
	printf("Enter choice:");
	scanf("%d",&choice);
	printf("Enter two numbers:");
	scanf("%d %d", &a, &b);
	
	switch(choice){
		case 1:

	    add(a,b);
	    break;
	    
	    case 2:
	    	printf("%d - %d = %d",a,b,a-b);
	    	break;
	    	
	    case 3:
	    	printf("%d * %d = %d",a,b,a*b);
	    	break;
	    case 4:
	    	printf("%d / %d = %d",a,b,a/b);
	    	break;
	        default:
	        printf("invalid");
	}
}