# Ch 1 — Statements and the structure of a program

- 状态：[Done] 已完成
- 官网：https://www.learncpp.com/cpp-tutorial/statements-and-the-structure-of-a-program/

## 要点

### 1.1 Statements

A statement is an instruction in a computer program that tells the computer to perform an action.

- Declaration statements
- Jump statements
- Expression statements
- Compound statements
- Selection statements (conditionals)
- Iteration statements (loops)
- Try blocks

#### Functions

A function is a collection of statements that executes sequentially.

When the program is run, the statements inside main() are executed in sequential order.

### 1.2 Comments

A comment is a programmer-readable note that is inserted directly into the source code of the program. Comments are ignored by the compiler and are for the programmer’s use only.

1. for a given library, program, or function, comments are best used to describe what the library, program, or function, does.
2. within a library, program, or function described above, comments can be used to describe how the code is going to accomplish its goal.
3. at the statement level, comments should be used to describe why the code is doing something.

#### Single-line comments

```
std::cout << "Hello world!"; // Everything from here to the end of the line is ignored
```

#### Multi-line comments

```
/* This is a multi-line comment.
   This line will be ignored.
   So will this one. */
```

#### Summary

- At the library, program, or function level, use comments to describe what. `库、程序、函数级别描述做什么`
- Inside the library, program, or function, use comments to describe how. `库、程序、函数内部描述怎么做`
- At the statement level, use comments to describe why. `语句级别描述为什么`

### 1.3 Objects and Variables

Data is any information that can be moved, processed, or stored by a computer.

A value is a letter (e.g. `a`), number (e.g. `5`), text (e.g. `Hello`), or instance of some other useful concept that can be represented as data.

An object is a region of storage (usually memory) that can store a value.

An object is used to store a value in memory. A variable is an object that has a name (identifier).

Naming our objects let us refer to those objects again later in the program.

### 1.4 Variable assignment and initialization

Initialization gives a variable an initial value at the point when it is created. Assignment gives a variable a value at some point after the variable is created.

#### 5 common forms of initialization

- Default-initialization

```
int a;
```

- Copy-initialization

```
int width = 5; // copy-initialization of value 5 into variable width
```

- Direct-initialization

```
int width ( 5 ); // direct initialization of value 5 into variable width
```

- List-initialization (uniform initialization or brace initialization)

```
int width { 5 };    // direct-list-initialization of initial value 5 into variable width (preferred)
int height = { 6 }; // copy-list-initialization of initial value 6 into variable height (rarely used)
```

- Value-initialization and zero-initialization

```
int width {}; // value-initialization / zero-initialization to value 0
```

#### Instantiation

The term instantiation is a fancy word that means a variable has been created (allocated) and initialized (this includes default initialization). An instantiated object is sometimes called an instance. Most often, this term is applied to class type objects, but it is occasionally applied to objects of other types as well.

### 1.5 iostream: cout, cin, and endl

#### The input/output library (io library)

```
#include <iostream>
```

##### std::cout

```
#include <iostream>

int main() {
    std::cout << "Hello World!";
    std:cout << 4;
    return 0;
}
```

##### std::endl

```
#include <iostream>

int main() {
    std::cout << "Hi!" << std::endl; // std::endl will cause the cursor to move to the next line
    std::cout << "My name is Alex." << std::endl;
    return 0;
}
```

##### std::cin

```
#include <iostream>

int main() {
    std::cout << "Enter a number:";

    int x {};
    std::cin >> x;

    std::cout << "You entered " << x << std::endl;
    return 0;
}
```

```
#include <iostream>

int main() {
    std::cout << "Enter two numbers separated by a space: ";

    int x {};
    int y {};
    std::cin >> x >> y;
    std::cout << "You entered: " <<x << " and " << y << std::endl;
    return 0;
}
```

### 1.6 Uninitialized variables and undefined behavior

#### Uninitialized variables

A variable that has not been given a known value (through initialization or assignment) is called an uninitialized variable.

### 1.7 Keywords and naming identifiers

#### Keywords

C++ reserves a set of `92` words (as of C++23) for its own use. These words are called keywords (or reserved words), and each of these keywords has a special meaning within the C++ language.

- alignas
- alignof
- and
- and_eq
- asm
- auto
- bitand
- bitor
- bool
- break
- case
- catch
- char
- char8_t (since C++20)
- char16_t
- char32_t
- class
- compl
- concept (since C++20)
- const
- consteval (since C++20)
- constexpr
- constinit (since C++20)
- const_cast
- continue
- co_await (since C++20)
- co_return (since C++20)
- co_yield (since C++20)
- decltype
- default
- delete
- do
- double
- dynamic_cast
- else
- enum
- explicit
- export
- extern
- false
- float
- for
- friend
- goto
- if
- inline
- int
- long
- mutable
- namespace
- new
- noexcept
- not
- not_eq
- nullptr
- operator
- or
- or_eq
- private
- protected
- public
- register
- reinterpret_cast
- requires (since C++20)
- return
- short
- signed
- sizeof
- static
- static_assert
- static_cast
- struct
- switch
- template
- this
- thread_local
- throw
- true
- try
- typedef
- typeid
- typename
- union
- unsigned
- using
- virtual
- void
- volatile
- wchar_t
- while
- xor
- xor_eq

### 1.8 Whitespace and basic formatting

Whitespace is a term that refers to characters that are used for formatting purposes. In C++, this refers primarily to spaces, tabs, and newlines. Whitespace in C++ is generally used for 3 things: separating certain language elements, inside text, and for formatting code.

#### Style guides

A style guide is a concise, opinionated document containing (sometimes arbitrary) programming conventions, formatting guidelines, and best practices. The goal of a style guide is to ensure that all developers on a project are programming in a consistent manner.

[C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)

### 1.9 Introduction to literals and operators

#### Literals

```
std::cout << "Hello world!";
int x { 5 };
```

What are `"Hello world!"` and `5`? They are literals. 

A literal (also known as a literal constant) is a fixed value that has been inserted directly into the source code.

Literals are values that are inserted directly into the source code. These values usually appear directly in the executable code (unless they are optimized out).

Objects and variables represent memory locations that hold values. These values can be fetched on demand.

#### Operators

The number of operands that an operator takes as input is called the operator's arity.

- Unary operators act on one operand. `-5`
- Binary operators act on two operands. `4 + 2`
- Ternary operators act on three operands.
- Nullary operators act on zero operands.

### [1.10 Introduction to expressions](https://www.learncpp.com/cpp-tutorial/introduction-to-expressions)

#### Expressions

In general programming, an expression is a non-empty sequence of literals, variables, operators, and function calls that calculates a value.

```
type identifier { expression };
```

## 代码

#include <iostream>

int main() {
    std::cout << "Enter two numbers separated by a space: ";

    int x {};
    int y {};
    std::cin >> x >> y;
    std::cout << "You entered: " <<x << " and " << y << std::endl;
    return 0;
}

## 习题

## 疑问
