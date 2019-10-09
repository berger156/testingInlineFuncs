#include "module1.h"
#include "module2.h"

extern inline int addIntegers(int a, int b);

int addThenMultiply(int a, int b, int c)
{
    int sum = addIntegers(a, b);
    int product = multiplyIntegers(sum, c);

    return product;
}
