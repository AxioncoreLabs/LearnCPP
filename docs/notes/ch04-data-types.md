# Ch 4 — 基本数据类型

- 状态：[~] 进行中
- 官网：https://www.learncpp.com/cpp-tutorial/chapter-4-summary-and-quiz/

## 要点

### 4.1 Introduction to fundamental data types

#### Bits, bytes, and memory addressing

The smallest unit of memory is a binary digit (also called a bit), which can hold a value of 0 or 1. You can think of a bit as being like a traditional light switch -- either the light is off (0), or it is on (1). There is no in-between.

Memory is organized into sequential units called memory addresses (or addresses for short).

Each memory address holds 1 byte of data. A byte is a group of bits that are operated on as a unit. The modern standard is that a byte is comprised of 8 sequential bits.

#### Fundamental data types

1. Floating Point: a number with a fractional part

- float `4 bytes`
- double `8 bytes`
- long double `8 bytes` | `8, 12, or 16 bytes`

2. Integral Boolean: true or false

- bool `1 byte`

3. Integral Character: a single character of text

- char `1 byte`
- wchar_t `Minimum Size 1 byte` `Typical Size 2 or 4 bytes`
- char8_t (C++20) `1 byte`
- char16_t (C++11) `2 bytes`
- char32_t (C++11) `4 bytes`

4. Integral Integer: positive and negative whole numbers, including 0

- short int `2 bytes`
- int `Minimum Size 2 bytes` `Typical Size 4 bytes`
- long int `Minimum Size 4 bytes` `Typical Size 4 or 8 bytes`
- long long int (C++11) `8 bytes`

5. Null Pointer: a null pointer `nullptr`

- std::nullptr_t (C++11) `4 bytes` | `4 or 8 bytes`

6. Void: no type

- void

#### Integer vs integral types

In mathematics, an **integer** is a number with no decimal or fractional part, including negative and positive numbers and zero. The term **integral** has several different meanings, but in the context of C++ is used to mean **like an integer**.

The C++ standard defines the following terms:

- The **standard integer types** are `short`, `int`, `long`, `long long` (including their signed and unsigned variants).
- The **integral types** are `bool`, the various `char types`, and the `standard integer types`.

All integral types are stored in memory as integer values, but only the standard integer types will display as an integer value when output.

Also note that the term **integral types** only includes fundamental types. This means non-fundamental types (such as `enum` and `enum class`) are not integral types, even when they are stored as an integer (and in the case of enum, displayed as one too).

#### Other sets of types

C++ contains three sets of types. The first two are built-in to the language itself (and do not require the inclusion of a header to use):

- The **fundamental data types** provide the most the basic and essential data types.
- The **compound data types** provide more complex data types and allow for the creation of custom (user-defined) types.

### 4.2 Void

Void is our first example of an incomplete type. An incomplete type is a type that has been declared but not yet defined.

Incomplete types can not be instantiated:

```
void value; // won't work, variables can't be defined with incomplete type void
```

### 4.3 Object sizes and the sizeof operator

#### Object sizes

A byte is 8 bits
bool:           1 bytes
char:           1 bytes
short:          2 bytes
int:            4 bytes
long:           8 bytes
long long:      8 bytes
float:          4 bytes
double:         8 bytes
long double:    16 bytes

#### The sizeof operator

In order to determine the size of data types on a particular machine, C++ provides an operator named `sizeof`. The **sizeof operator** is a unary operator that takes either a type or a variable, and returns the size of an object of that type (in bytes). You can compile and run the following program to find out how large some of your data types are:

### 4.4 Signed integers

An integer is an integral type that can represent positive and negative whole numbers, including 0 (e.g. -2, -1, 0, 1, 2). C++ has 4 primary fundamental integer types available for use:

- **short int** `2 bytes`

- **int** `2 bytes`

- **long int** `4 bytes`

- **long long int** `8 bytes`

The key difference between the various integer types is that they have varying sizes -- the larger integers can hold bigger numbers.

By default, integers in C++ are signed, which means the number's sign is stored as part of the value. Therefore, a signed integer can hold both positive and negative numbers (and 0).

### 4.5 Unsigned integers, and why to avoid them

#### Unsigned integers

C++ also supports unsigned integers. Unsigned integers are integers that can only hold non-negative whole numbers.

##### Defining unsigned integers

To define an unsigned integer, we use the `unsigned` keyword. By convention, this is placed before the type:

```
unsigned short us;
unsigned int ui;
unsigned long ul;
unsigned long long ull;
```



## 代码

## 习题

## 疑问
