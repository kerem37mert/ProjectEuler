#include <stdio.h>

int main() {

    int sum = 0;

    int num1 = 2,
    num2 = 1;
    while(num1 < 4000000) {

        if (num1 % 2 == 0)
            sum += num1;

        int temp = num1;
        num1 += num2;
        num2 = temp;

    }

    printf("%d", sum);

    return 0;
}