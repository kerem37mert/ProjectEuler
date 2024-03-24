#include <stdio.h>

int isPrime(int number);

int main() {

    int number = 2,
    i = 0;

    while(1) {
        if(isPrime(number))
            i++;

        if(i == 10001)
            break;

        number++;
    }

    printf("%d", number);

    return 0;
}

int isPrime(int number) {
    for(int i=2; i<=number/2; i++) {
        if(number % i == 0) {
            return 0;
        }
    }

    return 1;
}