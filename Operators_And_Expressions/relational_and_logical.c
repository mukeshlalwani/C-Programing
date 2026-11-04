#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 5;

    printf("%d\n", a > b); // 1
    printf("%d\n", a < b); // 0
    printf("%d\n", a == b); // 0
    printf("%d\n", a >= b); // 1
    printf("%d\n", a <= b); // 0
    printf("%d\n", a != b); // 1

    // Logical Operators
    printf("The value of this operation is %d\n", (a > b && a != b));
    printf("The value of this operation is %d\n", (a <= b || a >= b));
    printf("The value of this operation is %d\n", !(a == b));

    return 0;
}
