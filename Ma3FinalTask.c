//Simple Cashier Program in C
#include <stdio.h>

int main(){
    int selection, price, payment, change;
    printf("Please select your order\n");
    printf("[1]Shampoo(P79)\n[2]Colgate(P119)\n[3]Pepsi(P95)\n");
    printf("Choice: ");
    scanf("%d",&selection);
    switch(selection){

        case 1:
        price = 79;
        printf("Input Payment: ");
        scanf("%d", &payment);
        if(payment>=price){
            printf("You have purchased Shampoo.\n");
            change = payment - price;
            printf("Change: %d", change);
        }
        else {
            printf("You don't have enough funds!");
        }
        break;

        case 2:
        price = 119;
        printf("Input Payment: ");
        scanf("%d", &payment);
        if(payment>=price){
            printf("You have purchased Colgate.\n");
            change = payment - price;
            printf("Change: %d", change);
        }
        else {
            printf("You don't have enough funds!");
        }
        break;

        case 3:
        price = 95;
        printf("Input Payment: ");
        scanf("%d", &payment);
        if(payment>=price){
            printf("You have purchased Pepsi.\n");
            change = payment - price;
            printf("Change: %d", change);
        }
        else {
            printf("You don't have enough funds!");
        }
        break;

        default:
        printf("Invalid Input!");
    }
    return 0;
}
