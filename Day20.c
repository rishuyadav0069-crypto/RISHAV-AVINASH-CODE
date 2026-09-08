#include <stdio.h>
#include <stdlib.h>
int main() {
    int num, temp, digit;
    long product = 1;
    int has_odd = 0; 

    printf("Enter any number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    
    temp = abs(num);

    if (temp == 0) {
        has_odd = 0;
    } else {
        while (temp > 0) {
            digit = temp % 10; 

        
            if (digit % 2 != 0) {
                product *= digit; 
                has_odd = 1;      
            }

            temp /= 10; 
        }
    }
    if (has_odd) {
        printf("The product of the odd digits of %d is: %lld\n", num, product);
    } else {
        printf("There are no odd digits in %d.\n", num);
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char binary[MAX_SIZE];
    char onesComplement[MAX_SIZE];
    int i, isValid = 1;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    int length = strlen(binary);
    for (i = 0; i < length; i++) {
        if (binary[i] == '1') {
            onesComplement[i] = '0';
        } else if (binary[i] == '0') {
            onesComplement[i] = '1';
        } else {
    
            printf("Error: Invalid binary digit '%c' detected.\n", binary[i]);
            isValid = 0;
            break;
        }
    }

    onesComplement[length] = '\0';

    if (isValid) {
        printf("Original Binary : %s\n", binary);
        printf("1's Complement  : %s\n", onesComplement);
    }

    return 0;
}
