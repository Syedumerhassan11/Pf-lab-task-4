#include <stdio.h>

int main() {
    float amount, discount = 0, amount_saved, total_amount;

    
    printf("Enter the total shopping amount: ");
    scanf("%f", &amount);

    
    if (amount >= 5000) {
        discount = 0.30;  // 30% discount
    } else if (amount >= 3000) {
        discount = 0.22;  // 22% discount
    } else if (amount >= 1500) {
        discount = 0.12;  // 12% discount
    } else {
        discount = 0.07;  // 7% discount
    }
amount_saved = amount * discount;
       total_amount = amount - amount_saved;

  
    printf("Original amount: Rs. %.2f\n", amount);
    printf("Amount saved due after discount: Rs. %.2f\n", amount_saved);
    printf("Total amount after applying discount: Rs. %.2f\n", total_amount);

    return 0;
}


