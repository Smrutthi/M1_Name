/**
 * @file numberconversion.h
 * @author Smrutthi C ()
 * @brief conversion of decimal to other number system and binary to other number system
 * @version 0.1
 * @date 2022-03-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __NUMBERCONVERSION_H__
#define __NUMBERCONVERSION_H__

#include <stdio.h>
#include <stdlib.h>

/**
*  converts decimal number to binary number
* @param[in] n 
* @param[in] r 
* @return Result of r
*/
int decimaltobinary(long int n);

/**
* converts decimal number to octal number
* @param[in] num
* @param[in] r 
* @return Result of r
*/
int decimaltooctal(long int num);

/**
* converts decimal number to hexadecimal number
* @param[in] num 
* @param[in] rem
* @return Result of rem
*/
int decimaltohexadecimal(long int num);

/**
* converts binary number to decimal number 
* @param[in] num 
* @param[in] decimal
* @return Result of decimal
*/
int binarytodecimal(long int num);

/**
* converts binary number to octal number
* @param[in] n
* @param[in] octal 
* @return Result of octal
*/
int binarytooctal(long int n);

/**
* converts binary number to hexadecimal number 
* @param[in] bin 
* @param[in] hexa
* @return Result of hexa
*/
int binarytohexa(long int bin);

#endif  /* #define __NUMBERCONVERSION_H__ */
