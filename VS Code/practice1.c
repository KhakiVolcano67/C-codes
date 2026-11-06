#include<stdio.h>
int main(){
    int n;
    int arr[n];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    if((arr[i]+1)%5==0){
        arr[i]=arr[i]+1;
    }
    if((arr[i]+2)%5==0){
        arr[i]=arr[i]+2;
    }
printf("%d \n",arr[i]);    
}
}