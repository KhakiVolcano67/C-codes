#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("enter the 1st no: ");
    scanf("%d",&a);
    printf("enter the 2nd no: ");
    scanf("%d",&b);
    printf("enter the 3rd no: ");
    scanf("%d",&c);
    printf("enter the 4th no: ");
    scanf("%d",&d);
    printf("enter the 5th no: ");
    scanf("%d",&e);
    printf("the avg of the 5 no is: %.2f",(a+b+c+d+e)/5.0);
    return 0; 
}