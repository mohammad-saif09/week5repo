#include<stdio.h>
int main(){
    int a=1, b=20, temp;
    
    printf("Before Swap a = %d, b = %d \n", a ,b);
    temp = a;
    a = b;
    b = temp;

    printf("After Swap a = %d, b = %d", a , b);

    return 0;
}