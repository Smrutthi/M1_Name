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
  TEST_ASSERT_EQUAL(NULL, decimaltobinary(-10));
}

void test_decimaltooctal(void) {
  TEST_ASSERT_EQUAL(33, decimaltooctal(27));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(NULL, decimaltooctal(-937));
}

void test_decimaltohexadecimal(void) {
  TEST_ASSERT_EQUAL(3B, decimaltohexadecimal(59));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(NULL, decimaltohexadecimal(-23));
}

void test_binarytodecimal(void) {
  TEST_ASSERT_EQUAL(51, binarytodecimal(110011));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(0, binarytodecimal(-1001));
}

void test_binarytooctal(void) {
  TEST_ASSERT_EQUAL(151, binarytooctal(1101001));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(0, binarytooctal(-11001001));
}

void test_binarytohexa(void) {
  TEST_ASSERT_EQUAL(5A, binarytohexa(1011010));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(FFFFFFFFFFFFFFEB, binarytohexa(-10101));
}
