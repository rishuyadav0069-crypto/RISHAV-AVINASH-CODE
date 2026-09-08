#include <stdio.h>

int main() {
    int days;
    int fine = 0;

    printf("Enter the number of days late: ");
    if (scanf("%d", &days) != 1 || days < 0) {
        printf("Invalid input. Days late cannot be negative.\n");
        return 1;
    }

    if (days == 0) {
        printf("No fine. Book returned on time.\n");
    } 
    else if (days <= 5) {
        fine = days * 2;
        printf("Total fine is: ₹%d\n", fine);
    } 
    else if (days <= 10) {
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Total fine is: ₹%d\n", fine);
    } 
    else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Total fine is: ₹%d\n", fine);
    } 
    else {
        printf("Late duration exceeded 30 days. Membership Cancelled.\n");
    }


    return 0;
}

#include <stdio.h>

int main() {
    float units, bill_amount = 0;

    printf("Enter the total units consumed: ");
    scanf("%f", &units);

    if (units <= 100) {
        bill_amount = units * 5;
    } 
    else if (units <= 200) {
        bill_amount = (100 * 5) + ((units - 100) * 7);
    } 
    else if (units <= 300) {
        bill_amount = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    } 
    else {
        bill_amount = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }
    printf("Total Electricity Bill: ₹%.2f\n", bill_amount);

    return 0;
}



