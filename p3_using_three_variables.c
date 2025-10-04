#include<stdio.h>
int main(){
    int a=20, b=10;
    
    printf("Before Swap a = %d, b = %d \n", a ,b);
    
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After Swap a = %d, b = %d", a , b);

    return 0;
}