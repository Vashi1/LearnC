#include <stdio.h>
int main(){
    int y;
    printf("Enter the year: ");
    scanf("%d", &y);
    if (y == 2000){
        printf("2000 is not a leap year");
    }
    else if (y % 2 == 0){
        printf("The year %d is a leap year", y);
    }
    else{
        printf("The year %d is a leap year", y);
    }
    return 0;
}