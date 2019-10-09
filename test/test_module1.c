#include "unity.h"
#include "module1.h"
#include "mock_module2_fake.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_addIntegers_producesCorrectSum(void)
{
    int summand1 = 3;
    int summand2 = 5;
    int result = 0;

    result = addIntegers(summand1, summand2);
    printf("%d", result);

    TEST_ASSERT_EQUAL_INT(result, summand1 + summand2);
}

void test_addThenMultiply_producesCorrectResult(void)
{
    int summand1 = 3;
    int summand2 = 5;
    int sum = summand1 + summand2;
    int multiplier = 8;
    int result = 0;

    multiplyIntegers_ExpectAndReturn(sum, multiplier, sum*multiplier);
    result = addThenMultiply(summand1, summand2, multiplier);
    TEST_ASSERT_EQUAL_INT(result, sum*multiplier);
}
