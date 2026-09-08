#include <stdio.h>

int main() {
    int num, i = 0;
    int binaryNum[32]; 

    printf("Enter a decimal number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (num == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    int temp = num;
    while (temp > 0) {
        binaryNum[i] = temp % 2; 
        temp = temp / 2;         
        i++;
    }
    
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>

int main() {
    int num, originalNum, remainder;
    long reversedNum = 0; 

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    if (num < 0) {
        printf("%d is not a palindrome.\n", originalNum);
        return 0;
    }

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}



