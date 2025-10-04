#include<stdio.h>
int main(){
    int a, b, c;
    
    printf("Enter sides of triangle a, b, c : ");
    scanf("%d %d %d", &a, &b, &c);

    if (a>b+c){
        printf("No triangle is formed");
    }
    else if (a*a==b*b + c*c){
        printf("Right-angled triangle is formed");
    }
    else if (a*a>b*b + c*c){
        printf("Obtuse-angled triangle is formed");
    }
    else if (a*a<b*b + c*c){
        printf("Acute-angled triangle is formed");
    }

    return 0;
} 