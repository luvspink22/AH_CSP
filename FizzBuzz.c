//AH period 6 FizzBuzz - C

#include <stdio.h>

int main() {
    // Loop from 1 to 50
    for (int i = 1; i <= 50; i++) {
        if (i % 15 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
    return 0;
}
