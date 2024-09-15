#include <stdio.h>

int main() {
    int num1, num2;

    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

   
    
	
	if (num1 > num2) {
     
        if (num1 > 100) {
       printf("1st number is significantly larger\n");
        } else {
                 printf("1st number is larger\n");
        }
    } else if (num1 < num2) {
       
        if (num1 < 0) {
       printf("1st number is negative and smaller\n");
        } else {
    printf("1st number is smaller\n");
        }
    } else {
        
printf("numbers are equal\n");
    }

    return 0;
}

