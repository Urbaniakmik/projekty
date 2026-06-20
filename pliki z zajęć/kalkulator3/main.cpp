#include <iostream>

int main() {
    printf("Simple calc\n");

    while (1) {
        printf("Enter first number: ");
        int number1 = 0;
        scanf("%d", &number1);
        if (number1 == 0)
            break;

        printf("Enter second number: ");
        int number2 = 0;
        scanf("%d", &number2);
        if (number2 == 0)
            break;

        printf("%d + %d = %d\n", number1, number2, number1 + number2);

        printf("%d - %d = %d\n", number1, number2, number1 - number2);

        printf("%d * %d = %d\n", number1, number2, number1 * number2);

        printf("%d / %d = %d\n", number1, number2, number1 / number2);
    }

    return 0;
}
