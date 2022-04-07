#include <stdio.h>
int main(){
    int sub1, sub2, sub3;
    printf("Enter the marks in subject 1: \n");
    scanf("%d", &sub1);
    printf("Enter the marks in subject 2: \n");
    scanf("%d", &sub2);
    printf("Enter the marks in subject 3: \n");
    scanf("%d", &sub3);
    int total = sub1 + sub2 + sub3;
    float perc = (total / 300) * 100;
    printf("The percentage is %f", perc);
    if (perc < 33){
        printf("You have not passed!");
    }
    else{
        if ((sub1  < 40) || (sub2 < 40) || (sub3 < 40)){
            printf("You have failed!");
        }
        else{
            printf("You have passed");
        }
    }
    return 0;
}