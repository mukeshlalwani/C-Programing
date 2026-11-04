#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a = 5;
    printf("the value of a is %d\n", a);
    // a = a + 1; // same as a++
     a++; // 6 // post increment operator - the value is used first and then the variable is increased
    //  --a;
     printf("the value of a is %d\n", a);

     ++a; // pre increment operator - the value is increased first and then its used
    //  a--;
    //  --a;
     printf("the value of a is %d\n", a);

     --a;
     printf("the value of a is %d\n", a);


    return 0;
}
