#include <stdio.h>
int main(){
    int a, b, c, d;
    printf("Enter the value of 1st number: ");
    scanf("%d", &a);
    printf("Enter the value of 2nd number: ");
    scanf("%d", &b);
    printf("Enter the value of 3rd number: ");
    scanf("%d", &c);
    printf("Enter the value of 4th number: ");
    scanf("%d", &d);
    int larg = a;
    if (b > a){
        larg = b;
    }
    if (c > b){
        larg = c;
    } 
    if (d > c){
        larg = d;
    }
    printf("The largest number is %d", larg);
return 0;
}