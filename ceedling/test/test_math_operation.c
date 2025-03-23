// test/test_math_operations.c
#include "unity.h"
#include "math_operation.h"

void setUp(void) {
    // Set up code if needed
}

void tearDown(void) {
    // Tear down code if needed
}

void test_add(void) {
    TEST_ASSERT_EQUAL(5, add(2, 3));
    TEST_ASSERT_EQUAL(-1, add(2, -3));
    TEST_ASSERT_EQUAL(1, add(3, -3));
}

void test_subtract(void) {
    TEST_ASSERT_EQUAL(-1, subtract(2, 3));
    TEST_ASSERT_EQUAL(5, subtract(2, -3));
}
