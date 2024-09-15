#include <stdio.h>

int main() {
    float units, bill = 0, surcharge;

    
    printf("Input electricity units used: ");
    scanf("%f", &units);
if (units <= 30) {
        bill = units * 0.60;
    }
    else if (units <= 110) {
        bill = (30 * 0.60) + ((units - 30) * 0.85);
    }
    else if (units <= 210) {
        bill = (30 * 0.60) + (80 * 0.85) + ((units - 110) * 1.30);
    }
    else {
        bill = (30 * 0.60) + (80 * 0.85) + (100 * 1.30) + ((units - 210) * 1.60);
    }

   
    surcharge = bill * 0.15;
    bill += surcharge;

    
    printf("electricity bill: Rs. %.2f\n", bill);

    return 0;
}

