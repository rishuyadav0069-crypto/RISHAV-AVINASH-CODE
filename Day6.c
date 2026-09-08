#include<stdio.h>
int main(){
    int a;
    printf("A:");
    scanf("%d",&a);

    if(a>0){
        printf("POSITIVE");
    }
    else if(a<0){
        printf("NEGATIVE");
    }
    else
    {
        printf("ZERO");
    }

}
#include<stdio.h>
int main(){
    int a;
    printf("A:");
    scanf("%d",&a);

if(a%2==0){
    printf(" %d IS EVEN .\n",a);
}
else{
    printf(" %d IS ODD.\n",a);
}

}