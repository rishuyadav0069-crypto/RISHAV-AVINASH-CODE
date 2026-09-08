#include <stdio.h>

int main() {
    int num, originalNum;
    int firstDigit, lastDigit;
    int multiplier = 1;

    printf("Enter any integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    originalNum = num;

    lastDigit = num % 10;

    int temp = num;
    while (temp >= 10) {
        temp /= 10;
        multiplier *= 10;
    }
    
    firstDigit = temp;

    int middlePart = (originalNum % multiplier) / 10;
    int swappedNum = (lastDigit * multiplier) + (middlePart * 10) + firstDigit;
    printf("Original number: %d\n", originalNum);
    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}
#include <stdio.h>

int main() {
    int num, i;
    int sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a perfect number.\n", num);
        return 0;
    }

    for(i = 1; i <= num / 2; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }

    if(sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}

