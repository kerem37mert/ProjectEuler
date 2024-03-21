#include <stdio.h>
#include <math.h>


int isPrime(int number);

int main() {

    int number = 600851475143,
    largePrimeNumber = 0;

    for(int i=2; i<= sqrt(number); i++) {
        if(number % i == 0 && isPrime(i)) {
            largePrimeNumber = i;
        }
    }

    printf("%d", largePrimeNumber);

    return 0;
}

int isPrime(int number) {

    for(int i=2; i<=sqrt(number); i++) {
        if(number % i == 0) {
            return 0;
        }
    }

    return 1;
}