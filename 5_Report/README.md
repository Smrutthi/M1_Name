# NUMBER SYSTEM CONVERSION
![intro](https://i.ytimg.com/vi/E-Sg2YsvZds/maxresdefault.jpg)
## Introduction
The number system is a form of expressing numbers. Different number systems are used in electronics and digital system. Number system represents the value of a number with respect to its given base. There are four types of the number systems namely decimal, binary, octal and hexadecimal number system. This project reduces the time for calculating the number system conversion without doing manually. This project converts one type of number system to another type of number system.
## Features
In computer system architecture, number systems are a technique for representing numbers. This project works with the conversion of decimal number system to any other number system and binary number system to any other number system for any positive value input.
## Defining our System
![Number System drawio](https://user-images.githubusercontent.com/89585989/160885184-d99b9c35-180d-4bf4-96da-623e19855a3d.png)
## Research
Number System  | Description
-------------- |------------
Decimal Number System | The decimal number system is the one we use on a daily basis, and it uses digits ranging from 0 to 9, i.e. 0, 1, 2, 3, 4, 5, 6, 7, 8, and 9. Because the entire number allowed in this number system is 10, the decimal number system's base number is 10. Any number that is represented without a base has a base of 10.
Binary Number System  | The binary number system is made up of two numerals: one and zero. The base of this number system is 2 because it only contains two numbers. Electronic and computer-based devices, networking, and digital signal processing all employ this number system.
Octal Number System | The octal number system is a number system with an eight-digit base with digits ranging from 0 to 7. The term octal is used to describe numbers with an eight-digit base. Octal numbers have a wide range of applications and significance, including use in computers and digital numbering systems.
Hexadecimal Number System | The word hexadecimal can be divided into 'Hexa' and 'deci', where 'Hexa' means 6 and 'deci' means 10. The hexadecimal number system is a 16-digit representation of numerals 0 through 9 and digits A through F. To put it another way, the first nine numbers or digits are represented as integers, while the next six digits are represented as symbols ranging from A to F. After nine digits, the tenth digit is represented by a symbol: A, B, C, D, E, and F. Because each digit has a weight of power 16, the hexadecimal number system is also known as a positional number system.

![numbersystem](https://static.javatpoint.com/tutorial/digital-electronics/images/number-system2.png)
## Example
![Example](https://www.electronicshub.org/wp-content/uploads/2015/05/Untitled1dd.jpg)
## SWOT Analysis

![swot](https://cdn.searchenginejournal.com/wp-content/uploads/2021/02/swot-analysis-seo-602cb5beef729-760x400.png)
## Strength
* This project can easily convert the given decimal or binary number to any other number system quickly
* Less computational errors
* Easily operating with large numbers
## Weakness
* This project can't convert negative data values
* This project doesn't convert the octal and hexadecimal to any other number system
## Opportunity
* Optimization of current system
## Threat
* Emphasis on limited schemes
## 4W's and 1 H
## What
This project converts the given decimal or binary number system to other bases in a short time
## Why
This project is useful to avoid and hacking of datas which are represented in the form of numbers
## When
This project can be used at the time of designing the digital circuit
## Who
This project can be useful for digital circuit developers as well as for students for performing quick calculation
## How
This project helps to perform the conversion calculation in order to reduce the users time
## Requirement
## High Level Requirements
| ID  | Description | Status |
| --- | --- | --- |
| HLR-1 | Able to convert decimal to any other number system and binary to any other number system | Implemented |
| HLR-2 | Convert any positive data values | Implemented |
| HLR-3 | Able to convert any negative values | Future |
## Low Level Requirements
| ID  | Description | Status |
| --- | --- | --- |
| LLR-1 | User able to read output data | Implemented |
| LLR-2 | Displays output data without any errors | Implemented |
## Architecture
* Structural Diagram
* Behavioral Diagram
## 1. Structural Diagram
Structural diagrams are a type of visual design that depicts the stages required to solve a problem. The structural diagram depicts the hierarchy or structure of the system's many components or modules, as well as how they connect and interact with one another.
## Low level structural diagram
![Structural Diagram](https://user-images.githubusercontent.com/89585989/160991786-b9fc63ef-0521-4c2f-9563-63316e07159b.png)
## High level structural diagram
![hhstructural](https://user-images.githubusercontent.com/89585989/161389242-c44bea10-9191-43ab-9a22-f68dafa3597e.png)
## 2. Behavioral Diagram
Behavior diagrams depict the items in a system's dynamic behavior which can be represnted as a series of changes over time. A behavior diagram is intended to provide clarity.
## Low level behavioral diagram
![llbehaviordiagram drawio](https://user-images.githubusercontent.com/89585989/161307485-da1ac670-bce9-43f8-8141-087a3b3d6c23.png)
## High level behavioral diagram
![hhbehavior drawio](https://user-images.githubusercontent.com/89585989/161389230-caa62e8c-6519-4db1-a2ba-0315ece88d64.png)
## Test Plan
## Table no 1: High level test plan
Test ID | Description | Exp I/P | Exp O/P | Actual Output | Type of test  
--------|-------------|---------|---------|---------------|---------------
H_01  | Conversion of decimal number 45 to binary | 45 | 101101 | 101101  | Requirement based
H_02  | Conversion of decimal number 27 to octal | 27 | 33 | 33 | Requirement based
H_03  | Conversion of decimal number 59 to hexadecimal | 59 | 3B  | 3B  | Requirement based
H_04  | Conversion of binary number 110011 to decimal | 110011  | 51  | 51  | Requirement based
H_05  | Conversion of binary number 1101001 to octal | 1101001  | 151  | 151  | Requirement based
H_06  | Conversion of binary number 1011010 to hexadecimal | 1011010  | 5A  | 5A  | Requirement based
## Table no 2: Low level test plan
Test ID | Description | Exp I/P | Exp O/P | Actual Output | Type of test  
--------|-------------|---------|---------|---------------|---------------
L_01  | User entering the choice option 1 | 1 | Conversion of decimal number to binary | Conversion of decimal number to binary  | Requirement based
L_02  | User entering the choice option 2 | 2 | Conversion of decimal number to octal | Conversion of decimal number to octal | Requirement based
L_03  | User entering the choice option 3 | 3 | Conversion of decimal number to hexadecimal  | Conversion of decimal number to hexadecimal  | Requirement based
L_04  | User entering the choice option 4 | 4 | Conversion of binary number to decimal  | Conversion of binary number to decimal | Requirement based
L_05  | User entering the choice option 5 | 5 | Conversion of binary number to octal  | Conversion of binary number to octal  | Requirement based
L_06  | User entering the choice option 6 | 6 | Conversion of binary number to hexadecimal  | Conversion of binary number to hexadecimal  | Requirement based
## Output
![Decimal to binary](https://user-images.githubusercontent.com/89585989/161389305-99feabcb-3931-438b-9eeb-babd7a2fd2eb.png)
![Decimal to octal](https://user-images.githubusercontent.com/89585989/161389350-bb28312d-c2b5-4134-bc62-7a7636744203.png)
![Decimal to hexadecimal](https://user-images.githubusercontent.com/89585989/161389361-bbfa8d14-050c-444f-82cf-89020408057c.png)
![Binary to decimal](https://user-images.githubusercontent.com/89585989/161389373-3d875b92-d1d0-4552-9212-1986bf9c9fd9.png)
![Binary to octal](https://user-images.githubusercontent.com/89585989/161389381-9cd2f79b-2690-4ce4-9ddb-df95ac4b981b.png)
![Binary to hexadecimal](https://user-images.githubusercontent.com/89585989/161389406-34ccd5f7-d020-4e3f-b8f3-d6fd1f353dad.png)
