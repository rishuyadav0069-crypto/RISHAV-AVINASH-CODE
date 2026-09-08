#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;









    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }
    
    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        
        result += pow(remainder, n);
        
        originalNum /= 10;





    }
    
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
#include <stdio.h>


int main() {
    int n ;
    printf("ENTER THE INTEGER:");
    scanf("%d",&n);
    int count = 0;

    if (n <= 1) {
        printf("%d is NOT prime", n);






    }
    else {
        for (int i = 1; i <= n; i++) {
            if (n % i == 0)
                count++;
        }

        if (count == 2)
            printf("%d is prime", n);
        else
            printf("%d is NOT prime", n);




    }






    return 0;
}




