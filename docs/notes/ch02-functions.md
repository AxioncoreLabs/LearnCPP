# Ch 2 — 函数与文件

- 状态：[Done] 已完成
- 官网：https://www.learncpp.com/cpp-tutorial/introduction-to-functions/

## 要点

### 2.1 Introduction to functions

A function is a reusable sequence of statements designed to do a particular job.

Functions provide a way for us to split our programs into small, modular chunks that are easier to organize, test, and use. Most programs use many functions. 

```
returnType functionName(parameters...) {}
```

Nested functions are not supported

### 2.6 Why functions are useful, and how to use them effectively

functions provide a number of benefits that make them extremely useful in programs of non-trivial length or complexity

- Organization
- Reusability
- Testing
- Extensibility
- Abstraction

#### Effectively using functions

- Groups of statements that appear more than once in a program should generally be made into a function.
- Code that has a well-defined set of inputs and outputs is a good candidate for a function, (particularly if it is complicated).
- A function should generally perform one (and only one) task.
- When a function becomes too long, too complicated, or hard to understand, it can be split into multiple sub-functions. This is called refactoring.

Typically, when learning C++, you will write a lot of programs that involve 3 subtasks:

1. Reading inputs from the user
2. Calculating a value from the inputs
3. Printing the calculated value

### 2.7 Forward declarations and definitions

A forward declaration allows us to tell the compiler about the existence of an identifier before actually defining the identifier.

```
#include <iostream>

int add(int x, int y);

int main()
{
    std::cout << add(4, 5) << '\n';

    return 0;
}

int add(int x, int y) {
    return x + y;
}
```

## 代码

```
#include <iostream>

void doB() {
    std::cout << "In doB()" << std::endl;
}

void doA() {
    std::cout << "Starting doA()" << std::endl;
    doB();
    std::cout << "Ending doA()" << std::endl;
}

void doPrint() {
    std::cout << "In doPirnt()" << std::endl;
}

int main() {
    std::cout << "Starting main()" << std::endl;
    doA();
    std::cout << "Ending main()" << std::endl;
    return 0;
}
```

## 习题

## 疑问
