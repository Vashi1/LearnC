#include <stdio.h>
int main(){
    float pay;
    printf("Enter your income: ");
    scanf("%f", &pay);
    // printf("%f", pay);
    if (pay >= 2.5 && pay <= 5.0){
        printf("Your tax slab is 5\% \n");
    } 
    else if (pay > 5.0 && pay <= 10.0){
        printf("Your tax slab is 20\% \n");
    }
    else if (pay > 10.0){
        printf("Your tax slab is 30\% \n");
    }
    else{
        printf("Tax not deducted");
    }
    return 0;
}