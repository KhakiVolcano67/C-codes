#include<stdio.h>
int main(){
    int a[5]={10,20,45,23,11};
    printf("%d\n",a[3]);
    for(int i=0;i<=4;i++){
        printf("%d\n",a[i]);
    }
    printf("\n");
    for(int i=4;i>=0;i--){
        printf("%d\n",a[i]);
    }
}