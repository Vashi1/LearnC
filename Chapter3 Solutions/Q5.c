#include <stdio.h>
int main(){
    char ch;
    printf("Enter the character: \n");
    scanf("%c", &ch);
    int x = ch;
    if ((x >= 97) && (x <= 122)){
        printf("Yes the character entered is in lowercase");
    }
    else{
        printf("No the charecter is not in lowercase");
}
return 0;
}