#include <stdio.h>

int main() {
    int num;
    long factorial = 1;

    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (num < 0) {
        printf("Error: Factorial of a negative number does not exist.\n");
    } else {
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        
        printf("Factorial of %d = %u\n", num, factorial);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int n, reversed_num = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;                 
        reversed_num = reversed_num * 10 + remainder; 
        n /= 10;            
    }

    printf("Reversed number: %d\n", reversed_num);

    return 0;
}


