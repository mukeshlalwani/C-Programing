#include<stdio.h>

int main(int argc, char const *argv[])
{
    int result = 10 + 5 * 2; // this is evaluated as 10 +  (5 *2)
    int result2 = 10 + 5 * 2 - 6 / 3;
    printf("the value of is %d\n", result2);
    printf("the value of is %d\n", result);
    return 0;
}
