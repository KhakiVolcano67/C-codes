#include<stdio.h>
int distanceTraveled(int mainTank, int additionalTank) {
    int distance = 0;

    while (mainTank >= 5) {
        distance += 50;
        mainTank -= 5;

        if (additionalTank > 0) {
            mainTank++;
            additionalTank--;
        }
    }

    distance += mainTank * 10;

    return distance;
}
    // int distance=1;
    // if(mainTank>1){
    //  int i=(mainTank+additionalTank);
    //     distance=i*10;
    
    // return distance;
    // }
    // else{
    //     int i=(mainTank);
        
    // }
int main(){
    int mainTank,additionalTank;
    printf("enter maintank: ");
    scanf("%d",&mainTank);
    printf("enter additional tank: ");
    scanf("%d",&additionalTank);
    int distance= distanceTraveled(mainTank,additionalTank);
    printf("%d",distance);
}
