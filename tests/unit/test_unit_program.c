#include <unity.h>
#include "logic.h"

void test_logic_add(void)
{
    TEST_ASSERT_EQUAL(5, add(2,3));
    TEST_ASSERT_NOT_EQUAL(5, add(2,2));
}   

void test_logic_substract(void)
{
    TEST_ASSERT_EQUAL(5, substract(10,5));
    TEST_ASSERT_NOT_EQUAL(4, substract(10,5));
}   

void test_logic_multiply(void)
{
    TEST_ASSERT_EQUAL(10, multiply(2,5));
    TEST_ASSERT_NOT_EQUAL(4, multiply(10,5));
} 

void test_logic_devide(void)
{
    TEST_ASSERT_EQUAL(5.0, devide(10,2));
    TEST_ASSERT_EQUAL(-1.0, devide(10,0));
    TEST_ASSERT_NOT_EQUAL(2.0, devide(9,3));
}   

/**
 * @brief setUp function contain anything you would like to run before each test.
 * 
 */
void setUp(void)
{

}

/**
 * @brief The tearDown function can contain anything you would like to run after each test.
 * 
 */
void tearDown(void)
{

}

int main (void )
{
    UNITY_BEGIN();
    RUN_TEST(test_logic_add);
    RUN_TEST(test_logic_substract);
    RUN_TEST(test_logic_multiply);
    RUN_TEST(test_logic_devide);
    return  UNITY_END();
}
