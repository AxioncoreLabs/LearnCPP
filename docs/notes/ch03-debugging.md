# Ch 3 — 调试

- 状态：[Done] 已完成
- 官网：https://www.learncpp.com/cpp-tutorial/chapter-3-summary-and-quiz/

## 要点

### 3.1 Syntax and semantic errors

#### Syntax errors

A syntax error occurs when you write a statement that is not valid according to the grammar of the C++ language.

```
#include <iostream>

int main( // missing closing brace
{
    int 1x; // variable name can't start with number
    std::cout << "Hi there"; << x +++ << '\n'; // extraneous semicolon, operator+++ does not exist
    return 0 // missing semicolon at end of statement
}
```

#### Semantic errors (Logic errors)

A semantic error is an error in meaning. These occur when a statement is syntactically valid, but either violates other rules of the language, or does not do what the programmer intended.

Some kind of semantic errors can be caught by the compiler. Common examples include using an undeclared variable, type mismatches (when we use an object with the wrong type somewhere).

```
int main()
{
    5 = x; // x not declared, cannot assign a value to 5
    return "hello"; // "hello" cannot be converted to an int
}
```

### 3.2 The debugging process

All bugs stem from a simple premise: Something that you thought was correct, isn't.

#### A general approach to debugging

Once a problem has been identified, debugging the problem generally consists of six steps:

1. Find the root cause of the problem (usually the line of code that's not working).
2. Ensure you understand why the issue is occurring.
3. Determine how you'll fix the issue.
4. Repair the issue causing the problem.
5. Retest to ensure the problem has been fixed.
6. Retest to ensure no new problems have emerged.

```
#include <iostream>

int add(int x, int y) // this function is supposed to perform addition
{
    return x - y; // but it doesn't due to the wrong operator being used
}

int main()
{
    std::cout << "5 + 3 = " << add(5, 3) << '\n'; // should produce 8, but produces 2

    return 0;
}
```

### 3.3 A strategy for debugging

When debugging a program, in most cases the vast majority of your time will be spent trying to find where the error actually is.

#### Finding problems via code inspection

#### Finding problems by running the program

1. Figure out how to reproduce the problem
2. Run the program and gather information to narrow down where the problem is
3. Repeat the prior step until you find the problem

#### Reproducing the problem

The first and most important step in finding a problem is to be able to reproduce the problem. Reproducing the problem means making the problem appear in a consistent manner. The reason is simple: it's extremely hard to find an issue unless you can observe it occurring.

Reproduction steps are a list of clear and precise steps that can be followed to cause an issue to recur with a high level of predictability. The goal is to be able to cause the issue to reoccur as much as possible, so we can run our program over and over and look for clues to determine what’s causing the problem.

### 3.4 Basic debugging tactics

#### Debugging tactic #1: Commenting out your code

#### Debugging tactic #2: Validating your code flow

#### Debugging tactic #3: Printing values

### 3.5 More debugging tactics

#### Conditionalizing your debugging code

```
#include <iostream>

int getUserInput()
{
std::cerr << "getUserInput() called\n";
	std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;
	return x;
}

int main()
{
std::cerr << "main() called\n";
    int x{ getUserInput() };
    std::cout << "You entered: " << x << '\n';

    return 0;
}
```

One way to make it easier to disable and enable debugging throughout your program is to make your debugging statements conditional using preprocessor directives:

```
#include <iostream>

#define ENABLE_DEBUG // comment out to disable debugging

int getUserInput()
{
#ifdef ENABLE_DEBUG
std::cerr << "getUserInput() called\n";
#endif
	std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;
	return x;
}

int main()
{
#ifdef ENABLE_DEBUG
std::cerr << "main() called\n";
#endif
    int x{ getUserInput() };
    std::cout << "You entered: " << x << '\n';

    return 0;
}
```

#### Using a logger

A log is a sequential record of events that have happened, usually time-stamped. The process of generating a log is called logging.

`std::clog` `std::cerr` `plog`

```
#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>
#include <iostream>

int getUserInupt()
{
    PLOGD << "getUserInupt() called";

    std::cout << "Enter a number: ";
    int x {};
    std::cin >> x;
    return x;
}

int main()
{
    plog::init(plog::debug, "logs/logfile.txt");
    PLOGD << "main() called";

    int x { getUserInupt() };
    std::cout << "You entered " << x << '\n';
    return 0;
}
```

### 3.6 Using an integrated debugger: Stepping

#### The debugger

A debugger is a computer program that allows the programmer to control how another program executes and examine the program state while that program is running.

#### Stepping

Stepping is the name for a set of related debugger features that let us execute (step through) our code statement by statement.

##### Step into

The step into command executes the next statement in the normal execution path of the program, and then pauses execution of the program so we can examine the program’s state using the debugger.

##### Step over

Like step into, The step over command executes the next statement in the normal execution path of the program.

The step over command provides a convenient way to skip functions when you are sure they already work or are not interested in debugging them right now.

##### Step out

Unlike the other two stepping commands, Step out does not just execute the next line of code. Instead, it executes all remaining code in the function currently being executed, and then returns control to you when the function has returned.

##### Step back

The goal of a step back is to rewind the last step, so you can return the program to a prior state.

## 代码

## 习题

## 疑问
