#include<stdio.h>
int main(){
    int a=20, b=10, temp;
    
    printf("Before Swap a = %d, b = %d \n", a ,b);
    
    temp = a;
    a = b ;
    b = temp;

    printf("After Swap a = %d, b = %d", a , b);

    return 0; }