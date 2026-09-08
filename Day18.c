#include <stdio.h>

int main() {
    int num;
    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    printf("Factors of %d are: ", num);

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
#include <stdio.h>

int main() {
    int num1, num2, temp;
    int original_num1, original_num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    original_num1 = num1;
    original_num2 = num2;

    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;

    while (num2 != 0) {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    printf("The HCF (GCD) of %d and %d is: %d\n", original_num1, original_num2, num1);

    return 0;
}




