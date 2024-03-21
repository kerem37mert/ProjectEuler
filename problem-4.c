#include <stdio.h>

int isPalindrome(int number);

int main() {

    int largestPalindrome = 0;

    for(int i=999; i>=100; i--) {
        for(int j=999; j>=100; j--) {
            if(isPalindrome(i*j) && i*j > largestPalindrome) {
                largestPalindrome = i*j;
            }
        }
    }

    printf("%d", largestPalindrome);

    return 0;
}


int isPalindrome(int number) {
    int temp = number;
    int reverse = 0;

    while(number != 0) {
        reverse = reverse * 10 + number % 10;
        number /= 10;
    }

    if(reverse == temp)
        return 1;
    else
        return 0;
}
