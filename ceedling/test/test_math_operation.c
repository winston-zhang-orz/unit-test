// test/test_math_operations.c
#include "unity.h"
#include "math_operation.h"

#include <limits.h>

void setUp(void) {
    // Set up code if needed
}

void tearDown(void) {
    // Tear down code if needed
}

void test_add(void) {
    TEST_ASSERT_EQUAL(5, add(2, 3));
    TEST_ASSERT_EQUAL(-1, add(2, -3));
    TEST_ASSERT_EQUAL(0, add(3, -3));
    
      // Additional boundary tests
    TEST_ASSERT_EQUAL(0, add(0, 0));
    TEST_ASSERT_EQUAL(INT_MAX, add(INT_MAX, 0));
    TEST_ASSERT_EQUAL(INT_MIN, add(INT_MIN, 0));
    TEST_ASSERT_EQUAL(-1, add(INT_MAX, INT_MIN)); // This may overflow, consider handling overflow in the add function
}

void test_subtract(void) {
    TEST_ASSERT_EQUAL(-1, subtract(2, 3));
    TEST_ASSERT_EQUAL(5, subtract(2, -3));
}
