# Holberton School - Printf Project
  
![img](https://developers.redhat.com/sites/default/files/styles/share/public/ST-c_1x%20%282%29.png?itok=wFoDINrX)

## Description
This repository is a project during the first year of **```Holberton School```**. This is our first group project. It consists in recoding the famous printf function. The function _printf is a variadic function which prints a string according to a format standard.

## Resources
### Read or Watch:
- [Secrets Of Printf](https://intranet.hbtn.io/rltoken/Jr19IHYnhfJl1V-TWorIOg)
- [Approaching a Project](https://intranet.hbtn.io/concepts/881)
- [Group Projects](https://intranet.hbtn.io/concepts/893)
- [Pair Programming - How To](https://intranet.hbtn.io/concepts/894)
- [Flowcharts](https://intranet.hbtn.io/concepts/895)

## Requirements
> All files were created and compiled on `Ubuntu 20.04 LTS`using `GCC`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`

## Prototype
```c
int _printf(const char *format, ...)
```
## Files Usage
| File Name | Description |
|:----------:|:----------:|
|[`_printf.c`](https://github.com/ali-jin/holbertonschool-printf/blob/main/_printf.c) | Contains main body of our code that uses loops and if statements in order to execute the functions |
| [`get_function.c`](https://github.com/ali-jin/holbertonschool-printf/blob/main/get_function.c) | The get_function file is used to handle the array     containing all the format specifiers used.|
| [`main.h`](https://github.com/ali-jin/holbertonschool-printf/blob/main/main.h) | The main.h contain all our the prototypes used as well as containing our struct and the standard libraries used. |
| [`functions.c`](https://github.com/ali-jin/holbertonschool-printf/blob/main/functions.c) | It is in this file that we have placed all our functions (maximum 5 functions per file)|
| [`man_3_printf`]() | Man page for _printf function |

## Compilation
Your code will be compiled this way:

    $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

Your code will be executable this way:

     ./a.out
------------------

## Format Specifier And Examples
Here is a table whith the list of conversion specifiers, their meaning and an example of implementation.

| Function Name | Description | Format | Example | Output |
|:-------------:|:-----------:|:------:|:--------:|:------:|
| [`print_char`](https://github.com/ali-jin/holbertonschool-printf/blob/main/functions.c)| Prints a single character | `%c` | _printf("%c", M) | `M` |
| [`print_string`](https://github.com/ali-jin/holbertonschool-printf/blob/main/functions.c)| Prints a string of characters | `%s`| _printf("%s", HolbertonSchool) | `HolbertonSchool` |
| [`print_pct`](https://github.com/ali-jin/holbertonschool-printf/blob/main/functions.c)| Prints a % | `%%` | _printf("%%") | `%` |
| [`print_int`](https://github.com/ali-jin/holbertonschool-printf/blob/main/functions.c)| Prints decimal integer | `%d or %i`| _printf("%d", 21)| `21`|
  
## Testing Program
To test the program, you can create a `main.c` file and add the code below.
```c
    alex@ubuntu:~/c/printf$ cat main.c 
    #include <limits.h>
    #include <stdio.h>
    #include "main.h"

    /**
    * main - Entry point
    *
    * Return: Always 0
    */
    int main(void)
    {
        int len;
        int len2;
        unsigned int ui;
        void *addr;

        len = _printf("Let's try to printf a simple sentence.\n");
        len2 = printf("Let's try to printf a simple sentence.\n");
        ui = (unsigned int)INT_MAX + 1024;
        addr = (void *)0x7ffe637541f0;
        _printf("Length:[%d, %i]\n", len, len);
        printf("Length:[%d, %i]\n", len2, len2);
        _printf("Negative:[%d]\n", -762534);
        printf("Negative:[%d]\n", -762534);
        _printf("Unsigned:[%u]\n", ui);
        printf("Unsigned:[%u]\n", ui);
        _printf("Unsigned octal:[%o]\n", ui);
        printf("Unsigned octal:[%o]\n", ui);
        _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
        printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
        _printf("Character:[%c]\n", 'H');
        printf("Character:[%c]\n", 'H');
        _printf("String:[%s]\n", "I am a string !");
        printf("String:[%s]\n", "I am a string !");
        _printf("Address:[%p]\n", addr);
        printf("Address:[%p]\n", addr);
        len = _printf("Percent:[%%]\n");
        len2 = printf("Percent:[%%]\n");
        _printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);
        _printf("Unknown:[%r]\n");
        printf("Unknown:[%r]\n");
        return (0);
    }
 ```
 
## Output The Program

At the exit, the program must display this.
```c
    alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
    alex@ubuntu:~/c/printf$ ./printf
    Let's try to printf a simple sentence.
    Let's try to printf a simple sentence.
    Length:[39, 39]
    Length:[39, 39]
    Negative:[-762534]
    Negative:[-762534]
    Unsigned:[2147484671]
    Unsigned:[2147484671]
    Unsigned octal:[20000001777]
    Unsigned octal:[20000001777]
    Unsigned hexadecimal:[800003ff, 800003FF]
    Unsigned hexadecimal:[800003ff, 800003FF]
    Character:[H]
    Character:[H]
    String:[I am a string !]
    String:[I am a string !]
    Address:[0x7ffe637541f0]
    Address:[0x7ffe637541f0]
    Percent:[%]
    Percent:[%]
    Len:[12]
    Len:[12]
    Unknown:[%r]
    Unknown:[%r]
    alex@ubuntu:~/c/printf$
```
------------------------
## Task To Realize The Project 

### [0. I'm Not Going Anywhere. You Can Print That Wherever You Want To. I'm Here And I'm a Spur For Life](https://github.com/ali-jin/holbertonschool-printf)
Write a function that produces output according to a format.

- Prototype: int _printf(const char *format, ...);
- Returns: the number of characters printed (excluding the null byte used to end output to strings)
- write output to stdout, the standard output stream
- `format` is a character string. The format string is composed of zero or more directives. See man `3 printf` for more detail. You need to handle the following conversion specifiers:
  - `c`
  - `s`
  - `%`
- You don’t have to reproduce the buffer handling of the C library printf function
- You don’t have to handle the flag characters
- You don’t have to handle field width
- You don’t have to handle precision
- You don’t have to handle the length modifiers

-----------------------------
### [1. Education Is When You Read The Fine Print. Experience Is What You Get If You Don't](https://github.com/ali-jin/holbertonschool-printf/blob/main/functions.c)
Handle the following conversion specifiers:

- `d`
- `i`
- You don’t have to handle the flag characters
- You don’t have to handle field width
- You don’t have to handle precision
- You don’t have to handle the length modifiers

----------------------------
### [2. Just because it's in print doesn't mean it's the gospel]()
- Create a man page for your function.

----------------------------
### [3. With a face like mine, I do better in print](url)
Handle the following custom conversion specifiers:

- `b` : the unsigned int argument is converted to binary

----------------------------

# Authors

- `Mathieu Morel` - [MathieuMorel62](https://github.com/MathieuMorel62).

- `Alina Jin` - [ali-jin](https://github.com/ali-jin).
