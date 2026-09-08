#include<stdio.h>
int main(){
    int a;
    printf("A:");
    scanf("%d",&a);
    printf("THE LENGTH IS:%d\n",a);
    int b;
    printf("B:");
    scanf("%d",&b);
    printf("THE BREADTH IS:%d\n",b);
    printf("THE AREA OF RECTANGLE IS:%d\n",a*b);
    printf("THE PERIMETER OF RECTANGLE IS:%d\n",2*(a+b));
    return 0;

}

#include<stdio.h>
int main(){
    int r;
    printf("R:");
    scanf("%d",&r);
    printf("THE RADIUS IS:%d\n",r);
    printf("THE AREA OF CIRCLE IS:%.2f\n",3.14*r*r);
    printf("THE CIRCUMFERENCE OF CIRCLE IS:%.2f\n",2*3.14*r);
    



    return 0;

}

