#include<stdio.h>
int main(){
  float cost_price , selling_price , profit , loss , percentage ;
   printf("Enter the Cost Price (CP): ");
    scanf("%f", &cost_price);

    printf("Enter the Selling Price (SP): ");
    scanf("%f", &selling_price);
     if (selling_price > cost_price) {
        profit = selling_price - cost_price;
        percentage = (profit / cost_price) * 100;
        
        printf("Profit Percentage = %.2f%%\n", percentage);
    } 
    else if (cost_price > selling_price) {
        loss = cost_price - selling_price;
        percentage = (loss / cost_price) * 100;
        printf("Loss Percentage = %.2f%%\n", percentage);
    } 
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
  }



  #include<stdio.h>
int main(){
    int month;

    printf("ENTER THE MONTH NUMBER:");
    scanf("%d",&month);

    switch (month ){
        
        case 1:
        printf("MONTH IS: JANUARY \n DAYS ARE: 31\n");
        break;

        case 2:
        printf("MONTH IS: FEBRUARY\n DAYS ARE: 28 OR 29 \n");
        break;

        case 3:
        printf("MONTH IS: MARCH\n DAYS ARE: 31\n");
        break;

        case 4:
        printf("MONTH IS: APRIL\n DAYS ARE: 30\n");
        break;

        case 5:
        printf("MONTH IS: MAY\n DAYS ARE: 31\n");
        break;

        case 6:
        printf("MONTH IS: JUNE\n DAYS ARE: 30\n");
        break;

        case 7:
        printf("MONTH IS: JULY\n DAYS ARE: 31\n");
        break;

        case 8:
        printf("MONTH IS: AUGUST\n DAYS ARE:31\n");
        break;

        case 9:
        printf("MONTH IS: SEPTEMBER\n DAYS ARE:30\n");
        break;

        case 10:
        printf("MONTH IS: OCTOBER\n DAYS ARE: 31\n");
        break;

        case 11:
        printf("MONTH IS: NOVEMBER\n DAYS ARE: 30\n");
        break;

        case 12:
        printf("MONTH IS: DECEMBER\n DAYS ARE: 31\n");
        break;

    default:
    printf("INVALID INPUT , PLEASE ENTER NUMBER BETWEEN 1 -12.\n");

    }
    return 0;
}