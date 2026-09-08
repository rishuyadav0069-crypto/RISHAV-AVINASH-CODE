#include<stdio.h>
int main(){
    int seconds ;
    printf("SECONDS :");
    scanf("%d",&seconds);

    int hours , minutes , second ;


    hours = seconds/3600;
    minutes = (seconds % 3600)/60;
    seconds = seconds % 60 ;

    printf("%d:%d:%d\n",hours,minutes,seconds);
    return 0;

}

#include<stdio.h>
#include<math.h>
int main(){

    double principal , rate , time ;
    double simple_interest , compound_interest , total_amount ;

    printf("INTEREST CALCLATOR \n");

    printf("ENTER THE PRINCIPAL AMOUNT:");
    scanf("%lf",&principal);

    printf("ENTER THE ANNUAL RATE:");
    scanf("%lf",&rate);

    printf("ENTER THE TIME PERIOD:");
    scanf("%lf",&time);

    simple_interest = (principal*rate*time)/100;

    total_amount = principal * pow((1+rate/100),time);
    compound_interest = total_amount - principal ;

    printf("\n====== RESULT IS ======\n");
    printf("SIMPLE INTEREST:%.2lf\n",simple_interest);
    printf("COMPOUND INTEREST:%.2lf\n",compound_interest);


    return 0;

}