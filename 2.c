//WAP to add two distances (in km-meter) using structures.
#include<stdio.h>
int main(){
    struct distance
    {
        int km;
        int m;
    };

    struct distance d1, d2;
    printf("Enter the data for first distance : \n");
    printf("Enter km: ");
    scanf("%d",&d1.km);
    printf("Enter meter: ");
    scanf("%d",&d1.m);
    printf("Enter the data for second distance : \n");
    printf("Enter km: ");
    scanf("%d",&d2.km);
    printf("Enter meter: ");
    scanf("%d",&d2.m);

    int sumkm = d1.km + d2.km;
    int summ = d1.m + d2.m;
    if (summ >= 1000){
        sumkm = sumkm + summ/1000;
        summ = summ - 1000*(summ/1000);
    }
    printf("Sum of distances = %dkm %dm\n",sumkm,summ);

    return 0;
}