#include <stdio.h>

int main() {
    int num1, num2, max;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    max = (num1 > num2) ? num1 : num2;

    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            printf("The LCM of %d and %d is: %d\n", num1, num2, max);
            break;
        }
        max++; 
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, temp, remainder, sum = 0;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    temp = abs(num); 

    while (temp > 0) {
        remainder = temp % 10;  
        sum += remainder;       
        temp /= 10;            
    }
    printf("The sum of the digits of %d is: %d\n", num, sum);

    return 0;
}



