//program to determine people eligible for a loan
/*
program to determine people eligible for a loan
Author:Mugendi Denzel
Reg no:CT101/G/24518/24
Date:2/10/2024
*/
//preprocessor directive printf() scanf()

#include <stdio.h>

int main() {
    int age ='a'//%d
    ;float income ='i'//%f

    ;printf("Please enter your age: ");
    scanf("%d", &age);

    printf("Please enter your annual income (in sh): ");
    scanf("%f", &income);

    if (age >= 21 & income >= 21000) {
        printf("Congratulations! You qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}
