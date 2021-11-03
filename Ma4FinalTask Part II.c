#include <stdio.h>
int main(){
    int input;
    printf("Input Any Positive Integers: ");
    scanf("%d", &input);
    while(input!=1){
        if(input%2!=0){
            input = (input * 3) + 1;
        } else {
            input /= 2;
        }
        printf("Current Given Value is %d\n", input);
    }
    return 0;
}
