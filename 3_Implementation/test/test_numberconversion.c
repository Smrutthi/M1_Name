#include "unity.h"
#include <numberconversion.h>

/* Modify these two lines according to the project */
#include <numberconversion.h>
#define PROJECT_NAME    "Number_Conversion"

/* Prototypes for all the test functions */
void test_decimaltobinary(void);
void test_decimaltooctal(void);
void test_decimaltohexadecimal(void);
void test_binarytodecimal(void);
void test_binarytooctal(void);
void test_binarytohexa(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_decimaltobinary);
  RUN_TEST(test_decimaltooctal);
  RUN_TEST(test_decimaltohexadecimal);
  RUN_TEST(test_binarytodecimal);
  RUN_TEST(test_binarytooctal);
  RUN_TEST(test_binarytohexa);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_decimaltobinary(void) {
  TEST_ASSERT_EQUAL(101101, decimaltobinary(45));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(15000, add(7500, 7500));
}

void test_decimaltooctal(void) {
  TEST_ASSERT_EQUAL(33, subtract(27));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(100, subtract(1000, 900));
}

void test_decimaltohexadecimal(void) {
  TEST_ASSERT_EQUAL(3B, multiply(59));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10, multiply(2, 5));
}

void test_binarytodecimal(void) {
  TEST_ASSERT_EQUAL(51, divide(110011));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, divide(2, 2));
}

void test_binarytooctal(void) {
  TEST_ASSERT_EQUAL(0, divide(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, divide(2, 2));
}

void test_binarytohexa(void) {
  TEST_ASSERT_EQUAL(0, divide(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, divide(2, 2));
}
