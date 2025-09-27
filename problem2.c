#include<stdio.h>
int main(){
    int T;
    float P, R, SI;

    printf("Enter values of P, R, T by space \n");
    scanf("%f %f %d", &P, &R, &T);

    SI = (P*R*T)/100;
    printf("SI of entered values is = %f", SI);

    return 0;
}