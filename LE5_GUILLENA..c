#include <stdio.h>

int main() {

    int num;
    int sum = 0;

    while (1) {
    printf("Enter a number: ");
    scanf("%d", &num);

        if (num <= 0) {
            break;
        }

        sum = sum+num;
    }

    printf("\nThe total sum of positive numbers is: %d", sum);

    return 0;
}


    
