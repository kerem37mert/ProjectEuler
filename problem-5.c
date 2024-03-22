#include <stdio.h>

int main() {

    int i = 20;

    while(1) {
        int j = 2;

        while(1) {
            if(j == 21) {
                printf("%d", i);
                return 0;
            }

            if(i % j == 0)
                j++;
            else {
                i++;
                break;
            }
        }
    }
}