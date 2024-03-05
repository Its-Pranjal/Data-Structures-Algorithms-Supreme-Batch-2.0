# Number Systems and Conversions

## 1. What is a Number System?

A number system is a mathematical notation for representing numbers using digits or other symbols in a consistent manner. It provides a systematic way to express quantities and perform mathematical operations. The most common number system is the decimal system, also known as the base-10 system.

## 2. Types of Number Systems

### 2.1 Decimal System (Base-10)

The decimal system is the standard number system, utilizing 10 digits (0 to 9). Each digit's value is based on its position, representing powers of 10.

### 2.2 Binary System (Base-2)

The binary system uses only two digits, 0 and 1. It is fundamental in computer science, where each digit represents a binary digit, or bit.

### 2.3 Octal System (Base-8)

The octal system employs eight digits (0 to 7). It's less common but has applications in computing.

### 2.4 Hexadecimal System (Base-16)

The hexadecimal system uses 16 digits (0 to 9 and A to F). It is widely used in computing for concise representation.

## 3. Decimal to Binary Conversion

### 3.1 Method 1: Repeated Division

To convert a decimal number to binary using repeated division, follow these steps:

- Divide the decimal number by 2.
- Record the remainder (0 or 1).
- Repeat the process with the quotient until it becomes 0.
- The binary equivalent is the remainders read in reverse order.

### 3.2 Example

Convert 13 to binary:

13 ÷ 2 = 6 remainder 1
6 ÷ 2 = 3 remainder 0
3 ÷ 2 = 1 remainder 1
1 ÷ 2 = 0 remainder 1



The binary equivalent is 1101.

## 4. Binary to Decimal Conversion

To convert a binary number to decimal, use the positional notation:

- Assign powers of 2 to each binary digit from right to left.
- Multiply each digit by 2 raised to its corresponding power.
- Sum the results.

### 4.1 Example

Convert 1101 to decimal:

1 * 2^3 + 1 * 2^2 + 0 * 2^1 + 1 * 2^0 = 8 + 4 + 0 + 1 = 13


The decimal equivalent is 13.

