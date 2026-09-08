#include<stdio.h>
int main(){
    int a , b ,sum = 0;
    printf("ENTER THE NUMBER :");
    scanf("%d",&a);








    printf("THE FIRST %d NATURAL NUMBERS ARE :",a);
    for(b=1; b<=a ; b++ ){
    printf("%d",b);
    sum += b;
    }

    printf("\n THE SUM OF FIRST %d NATURAL NUMBER IS = %d\n",a,sum);







return 0;
}

#include<stdio.h>
int main(){
    int a , b ;
    printf("A:");
    scanf("%d",&a);
    
    printf("B:");
    scanf("%d",&b);

    printf("\n BEFORE SWAPPING \n");
    printf("THE FIRST NUMBER IS:%d\n",a);
    printf("THE SECOND NUMBER IS:%d\n",b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("\n AFTER SWAPPING \n");
    printf("THE FIST NUMBER IS:%d\n",a);
    printf("THE SECOND NUMBER IS:%d\n",b);

return 0;
}