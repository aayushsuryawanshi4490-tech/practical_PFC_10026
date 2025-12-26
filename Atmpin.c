#include <stdio.h>
int main() {
    //Name-AAYUSH ERPID-10026
    int pin, correctPin = 1234;

    printf("Enter ATM PIN: ");
    scanf("%d", &pin);

    if(pin == correctPin)
        printf("Access Granted");
    else
        printf("Wrong PIN");

    return 0;
}
//OUTPUT
//Enter ATM PIN:4
//Wrong PIN