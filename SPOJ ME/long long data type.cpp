#include <stdio.h>;

int main()
{
    int  num1 = 1000000000;
    long num2 = 1000000000;
    long long num3;
    //num3 = 100000000000;
    long long num4 = ~0;

    printf("%u %u %u", sizeof(num1), sizeof(num2), sizeof(num3));
    printf(" %d %ld %lld %llu", num1, num2, num3, num4);
    return 0;
}
