#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a = 9, b = 2;

    printf("the value of a / b is  %f\n", (float)a / b);


    //implicit typecasting or automatic  typecasting or implicit conversation
    int x = 5;
    float y = 2.9;
    float z = x + y;
    printf("the value of z is %f\n", z);

    // explicit typecasting
    printf("the value of y as integer is %d\n", (int)y);


    return 0;
}
