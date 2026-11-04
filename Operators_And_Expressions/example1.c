#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a = 5, b = 2;
   float result1 = a / b;
   float result2 = (float) a / b;

   printf("without typecasting: %f\n", result1);
   printf("with typecasting : %f\n", result2);
    return 0;
}
