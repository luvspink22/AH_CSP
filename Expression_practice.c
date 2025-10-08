#AH period 6 Expression Practice-C

# include <stdio.h>
# include <math.h>

int main() {
    // Equation 1
    int a = 7, b = 24, c = 8, d = 4, e = 6;
    int res1 = a - b / c * d + e;
    printf("Equation 1: %d\n", res1);

    // Equation 2
    a = 18; b = 3; c = 7; d = 2; e = 5;
    int res2 = a / b - c + d * e;
    printf("Equation 2: %d\n", res2);

    // Equation 3
    a = 6; b = 4; c = 12; int f = 72, g = 8, h = 9;
    int res3 = a * b / c + f / g - h;
    printf("Equation 3: %d\n", res3);

    // Equation 4
    a = 17; b = 6; c = 2; d = 4; e = 3;
    int res4 = (a - b / c) + d * e;
    printf("Equation 4: %d\n", res4);

    // Equation 5
    a = -2; b = 1; c = 4; d = 2; e = 6; f = 3;
    int res5 = a * (b * c - d / d) + (e + d - f);
    printf("Equation 5: %d\n", res5);

    // Equation 6
    int res6 = -1 * ((3 - 4 * 1) + 5) - 2 * 1 + 0;
    printf("Equation 6: %d\n", res6);

    // Equation 7
    double res7 = (3 * pow(2, 2) + 15) - (5 - pow(2, 2));
    printf("Equation 7: %d\n", (int)res7);

    // Equation 8
    double res8 = (pow(1,4) * pow(2,2) + pow(3,3)) - pow(2,5) + 17;
    printf("Equation 8: %d\n", (int)res8);

    // Equation 9
    int t1 = 22 / 2 - 2 * 5;
    int t2 = 4 - 6 / 6;
    int res9 = t1 * t1 + t2 * t2;
    printf("Equation 9: %d\n", res9);

    return 0;
}
