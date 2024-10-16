# c-programming-language
C Programming Language

## Expressions
### five basic data types
* there are five atomic data types in the C subset
	1. character				**`char`**
	2. integer					**`int`**
	3. floating-point			**`float`**
	4. double floating-point	**`double`**
	5. valueless				**`void`**

* The list of modifiers is shown here:
	* signed
	* unsigned
	* long
	* short
---
| **Type**               | **Typical size (bits)** | **Minimal Range**                            |
|------------------------|-------------------------|----------------------------------------------|
| `char`                 | 8                       | 0−127 to 127                                 |
| `unsigned char`        | 8                       | 0 to 255                                     |
| `signed char`          | 8                       | −127 to 127                                  |
| `int`                  | 16 or 32                | −32,767 to 32,767                            |
| `unsigned int`         | 16 or 32                | 0 to 65,535                                  |
| `signed int`           | 16 or 32                | same as int                                  |
| `short int`            | 16                      | −32,767 to 32,767                            |
| `unsigned short int`   | 16                      | 0 to 65,535                                  |
| `signed short int`     | 16                      | same as short int                            |
| `long int`             | 32                      | −2,147,483,647 to 2,147,483,647              |
| `signed long int`      | 32                      | same as long int                             |
| `unsigned long int`    | 32                      | 0 to 4,294,967,295                           |
| `float`                | 32                      | Six digits of precision                      |
| `double`               | 64                      | Ten digits of precision                      |
| `long double`          | 80                      | Ten digits of precision                      |
---
### Identifier Names

In C/C++, `the names of variables, functions, labels, and various other user-defined objects are called identifiers.` These identifiers can vary from one to several characters.
  
The first character must be a letter or an underscore, and subsequent characters must be either letters, digits, or underscores. Here are some correct and incorrect identifier names:
| **Correct**          | **Incorrect**    |
|----------------------|------------------|
| `Count`              |  `1count`        |
| `test23`             | `hi!there`       |
| `high_balance`       | `high...balance` |

In C, identifiers may be of any length. However, not all characters will necessarily be significant. If the identifier will be involved in an external link process, then at least the first six characters will be significant. These identifiers, called external names, include function names and global variables that are shared between files. If the identifier is not used in an external link process, then at least the first 31 characters will be significant. This type of identifier is called an internal name and includes the names of local variables, for example. In C++, there is no limit to the length of an identifier, and at least the first 1,024 characters are significant. This difference may be important if you are converting a program from C to C++.

In an identifier, upper- and lowercase are treated as distinct. Hence, count, Count, and COUNT are three separate identifiers.

An identifier cannot be the same as a C or C++ keyword, and should not have the same name as functions that are in the C or C++ library.

### Variables
As you probably know, `a variable is a named location in memory that is used to hold a value that may be modified by the program.` All variables must be declared before they can be used. The general form of a declaration is

	type variable_list;

Here, type must be a valid data type plus any modifiers, and variable_list may consist of
one or more identifier names separated by commas. Here are some declarations:
	
	int i,j,l;
	short int si;
	unsigned int ui;
	double balance, profit, loss;

**<span style="color: red;">Remember</span>: in C/C++ the name of a variable has nothing to do with its type.**

<h3><span style="color: #FF5736;">Where Variables Are Declared</span></h3>

Variables will be declared in three basic places: inside functions, in the definition of function parameters, and outside of all functions. These are local variables, formal parameters, and global variables.


<h3><span style="color: #FF5736;">Local Variables</span></h3>
Variables that are declared inside a function are called local variables. In some C/C++ literature, these variables are referred to as automatic variables. This book uses the more common term, local variable. Local variables may be referenced only by statements that are inside the block in which the variables are declared. In other words, local variables are not known outside their own code block. Remember, a block of code begins with an opening curly brace and terminates with a closing curly brace.
Local variables exist only while the block of code in which they are declared is executing. That is, a local variable is created upon entry into its block and destroyed upon exit.
The most common code block in which local variables are declared is the function. For example, consider the following two functions:

```C
	void func1(void) {
		int x;
		x = 10; 
	}
		
	void func2(void) {
		int x;
		x = -199; 
	}
```
The integer variable **`x`** is declared twice, once in **`func1()`** and once in **`func2()`**. The **`x`** in **`func1()`** has no bearing on or relationship to the **`x`** in **`func2()`**. This is because each x is known only to the code within the block in which it is declared.

The C language contains the keyword `auto`, which you can use to declare local variables. However, since all nonglobal variables are, by default, assumed to be `auto`, this keyword is virtually never used. (It has been said that `auto` was included in C to provide for source-level compatibility with its predecessor B. Further, `auto` is supported in C++ to provide compatibility with C.)

There is an important difference between C (as defined by C89) and C++ as to where you can declare local variables. In C, you must declare all local variables at the start of a block, prior to any "action" statements. For example, in C89 the following function is in error.

```C
/* 
For C89, this function is in error,
but it is perfectly acceptable for C++.
*/
void f(void) {
    int i;
    i = 10;

    int j;
	j = 20; 
}  /* this line will cause an error */
```

However, in C++, this function is perfectly valid because you can declare local variables at any point within a block, prior to their first use. (The topic of C++ variable declaration is discussed in depth in Part Two.) As a point of interest, C99 allows you to define variables at any point within a block.

Because local variables are created and destroyed with each entry and exit from the block in which they are declared, their content is lost once the block is left. This is especially important to remember when calling a function. When a function is called, its local variables are created, and upon its return they are destroyed. This means that local variables cannot retain their values between calls. (However, you can direct the compiler to retain their values by using the static modifier.)

Unless otherwise specified, local variables are stored on the stack. The fact that the stack is a dynamic and changing region of memory explains why local variables cannot, in general, hold their values between function calls.

You can initialize a local variable to some known value. This value will be assigned to the variable each time the block of code in which it is declared is entered. For example, the following program prints the number 10 ten times:

```C

#include <stdio.h>
void f(void);
   
int main(void) {
	int i;
    
	for(i=0; i<10; i++)  f();
	
	return 0; 
}

void f(void) {
	int j = 10;
     
	printf("%d ", j);
     
	j++;  /* this line has no lasting effect */
}
```
<h3><span style="color: #FF5736;">Formal Parameters</span></h3>
If a function is to use arguments, it must declare variables that will accept the values of the arguments. These variables are called the formal parameters of the function. They behave like any other local variables inside the function. As shown in the following program fragment, their declarations occur after the function name and inside parentheses:

```C       
/* Return 1 if c is part of string s; 0 otherwise */
int is_in(char *s, char c) {
    while(*s){
    	if(*s==c) {	
			return 1;
		}

        else s++;
	}

	return 0; 
}
```

<h4><span style="color: #FF5736;">Global Variables</span></h3>

Unlike local variables, global variables are known throughout the program and may be used by any piece of code. Also, they will hold their value throughout the program's execution. You create global variables by declaring them outside of any function. Any expression may access them, regardless of what block of code that expression is in.

In the following program, the variable count has been declared outside of all functions. Although its declaration occurs before the main( ) function, you could have placed it anywhere before its first use as long as it was not in a function. However, it is usually best to declare global variables at the top of the program.

```C

#include <stdio.h>

int count;  /* count is global */

void func1(void);
void func2(void);

int main(void) {
  	count = 100;
  	func1();
	return 0; 
}

void func1(void) {
	int temp;
    temp = count;
    func2();
    printf("count is %d", count); /* will print 100 */
}

void func2(void)
{
	int count;
	for(count=1; count<10; count++) {
		putchar('.');
	}
}
```
Look closely at this program. Notice that although neither main( ) nor func1( ) has declared the variable count, both may use it. func2( ), however, has declared a local variable called count. When func2( ) refers to count, it refers to only its local variable, not the global one. If a global variable and a local variable have the same name, all references to that variable name inside the code block in which the local variable is declared will refer to that local variable and have no effect on the global variable. This can be convenient, but forgetting it can cause your program to act strangely, even though it looks correct.

Storage for global variables is in a fixed region of memory set aside for this purpose by the compiler. Global variables are helpful when many functions in your program use the same data. You should avoid using unnecessary global variables, however. They take up memory the entire time your program is executing, not just when they are needed. In addition, using a global where a local variable would do makes a function less general because it relies on something that must be defined outside itself. Finally, using a large number of global variables can lead to program errors because of unknown and unwanted side effects. A major problem in developing large programs is the accidental changing of a variable's value because it was used elsewhere in the program. This can happen in C/C++ if you use too many global variables in your programs.

### The const and volatile Qualifiers

There are two qualifiers that control how variables may be accessed or modified: const and volatile. They must precede the type modifiers and the type names that they qualify. These qualifiers are formally referred to as the cv-qualifiers.

<h4><span style="color: #FF5736;">Const</span></h3>

Variables of type const may not be changed by your program. (A const variable can be given an initial value, however.) The compiler is free to place variables of this type into read-only memory (ROM). For example:

```C   
	const int a=10;
```
creates an integer variable called a with an initial value of 10 that your program may not modify. However, you can use the variable a in other types of expressions. A const variable will receive its value either from an explicit initialization or by some hardware-dependent means.

The const qualifier can be used to protect the objects pointed to by the arguments to a function from being modified by that function. That is, when a pointer is passed to a function, that function can modify the actual variable pointed to by the pointer. However, if the pointer is specified as const in the parameter declaration, the function code won't be able to modify what it points to. For example, the sp_to_dash( ) function in the following program prints a dash for each space in its string argument. That is, the string "this is a test" will be printed as "this-is-a-test". The use of const in the parameter declaration ensures that the code inside the function cannot modify the object pointed to by the parameter.

```C
#include <stdio.h>

void sp_to_dash(const char *str);

int main(void) {
	
	sp_to_dash("this is a test");

	return 0; 
}

void sp_to_dash(const char *str) {
    while(*str) {
		if(*str== ' ') printf("%c", '-');
		else printf("%c", *str);
		str++;
	} 
}
```
If you had written sp_to_dash( ) in such a way that the string would be modified, it would not compile. For example, if you had coded sp_to_dash( ) as follows, you would receive a compile-time error:

```C
/* This is wrong. */
void sp_to_dash(const char *str) {
	while(*str) {
		if(*str==' ' ) {
			*str = '-'; /* can't do this; str is const */
		}

		printf("%c", *str);
		str++;
	} 
}
```
Many functions in the standard library use const in their parameter declarations. For example, the strlen( ) function has this prototype:
```C
	size_t strlen(const char *str);
```
Specifying str as const ensures that strlen( ) will not modify the string pointed to by str. In general, when a standard library function has no need to modify an object pointed to by a calling argument, it is declared as const.

You can also use const to verify that your program does not modify a variable. Remember, a variable of type const can be modified by something outside your program. For example, a hardware device may set its value. However, by declaring a variable as const, you can prove that any changes to that variable occur because of external events.

<h4><span style="color: #FF5736;">volatile</span></h3>

The modifier volatile tells the compiler that a variable's value may be changed in ways not explicitly specified by the program. For example, a global variable's address may be passed to the operating system's clock routine and used to hold the real time of the system. In this situation, the contents of the variable are altered without any explicit assignment statements in the program. This is important because most C/C++ compilers automatically optimize certain expressions by assuming that a variable's content is unchanging if it does not occur on the left side of an assignment statement; thus, it might not be reexamined each time it is referenced. Also, some compilers change the order of evaluation of an expression during the compilation process. The volatile modifier prevents these changes. 

You can use const and volatile together. For example, if 0x30 is assumed to be the value of a port that is changed by external conditions only, the following declaration would prevent any possibility of accidental side effects:
```C
    const volatile char *port = (const volatile char *) 0x30;
```

## Statements
This chapter discusses the statement. In the most general sense, a statement is a part of your program that can be executed. That is, a statement specifies an action. C and C++ categorize statements into these groups:

*statement - this, collection of commands*

■ Selection </br>
■ Iteration </br>
■ Jump </br>
■ Label </br>
■ Expression </br>
■ Block </br>

Included in the selection statements are `if` and `switch`. (The term conditional statement is often used in place of "selection statement.") The iteration statements are `while`, `for`, and `do-while`. These are also commonly called loop statements. The jump statements are `break`, `continue`, `goto`, and `return`. The label statements include the `case` and `default` statements (discussed along with the `switch` statement) and the label statement (discussed with `goto`). Expression statements are statements composed of a valid expression. Block statements are simply blocks of code. (Remember, a block begins with a { and ends with a }.) Block statements are also referred to as compound statements.

*`C++ adds two additional statement types: the try block (used by exception handling) and the declaration statement. These are discussed in Part Two`*

Since many statements rely upon the outcome of some conditional test, let's begin by reviewing the concepts of true and false.

### True and False in C and C++

Many C/C++ statements rely upon a conditional expression that determines what course of action is to be taken. A conditional expression evaluates to either a true or false value. In C, a true value is any nonzero value, including negative numbers. A false value is 0. This approach to true and false allows a wide range of routines to be coded extremely efficiently.

C++ fully supports the zero/nonzero definition of true and false just described. But C++ also defines a Boolean data type called bool, which can have only the values true and false. As explained in Chapter 2, in C++, a 0 value is automatically converted into false and a nonzero value is automatically converted into true. The reverse also applies: true converts to 1 and false converts to 0. In C++, the expression that controls a conditional statement is technically of type bool. But since any nonzero value converts to true and any zero value converts to false, there is no practical difference between C and C++ on this point.

### Selection Statements
C/C++ supports two types of selection statements: if and switch. In addition, the ? operator is an alternative to if in certain circumstances.

#### if

The general form of the if statement is

```C
	if (expression) {
		// statement
	} else {
		// statement
	}
```
where a statement may consist of a single statement, a block of statements, or nothing
(in the case of empty statements). The else clause is optional. 

If expression evaluates to true (anything other than 0), the statement or block that forms the target of if is executed; otherwise, the statement or block that is the targetof else will be executed, if it exists. Remember, only the code associated with if or the code associated with else executes, never both.

In C, the conditional statement controlling if must produce a scalar result. A scalar is either an integer, character, pointer, or floating-point type. In C++, it may also be of type bool. It is rare to use a floating-point number to control a conditional statement because this slows execution time considerably. (It takes several instructions to perform a floating-point operation. It takes relatively few instructions to perform an integer or character operation.)

The following program contains an example of if. The program plays a very simple version of the "guess the magic number" game. It prints the message ** Right ** when the player guesses the magic number. It generates the magic number using the standard random number generator rand( ), which returns an arbitrary number between 0 and RAND_MAX (which defines an integer value that is 32,767 or larger). rand( ) requires the header file stdlib.h. (A C++ program may also use the new-style header <cstdlib>.)

```C
/* Magic number program #1. */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int magic; /* magic number */
	int guess; /* user's guess */
	
	magic = rand(); /* generate the magic number */
	
	printf("Guess the magic number: ");
	scanf("%d", &guess);
	
	if(guess == magic) {
		printf("** Right **");
	}

	return 0;
}
```

Taking the magic number program further, the next version illustrates the use of the else statement to print a message in response to the wrong number.
```C
/* Magic number program #2. */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int magic; /* magic number */
	int guess; /* user's guess */
	
	magic = rand(); /* generate the magic number */
	
	printf("Guess the magic number: ");
	scanf("%d", &guess);
	
	if(guess == magic) {
		printf("** Right **");
	} else {
		printf("Wrong");
	}
	
	return 0;
}
```
#### Nested ifs