
# _Printf

Printf is the preferred function for printing a format string input in C. As a variadic function, printf takes an undefined number of arguments and a constant string named “format”. In this, as our first team project for cohort 20 of Holberton School students were asked to recreate the printf function from scratch.


## Prototype
Prototype: int _printf(const char, format,…);
## How it works
After receiving format as an input, the function will roam character by character through the string and execute a different function depending on what it finds. For normal characters, the function will print them, but there is a special character named “format indicator (%)”.

The format indicator is able to trigger a different secondary function whether it finds a “format specifier” or not after it. Format specifiers are:

| Format Types | Descripction                                 |
|--------------|----------------------------------------------|
| %c           | Prints the corresponding character           |
| %s           | Prints a string                              |
| %d and %i    | Prints the decimal convection of a character |
| %%           | Prints a percent                             |

## Examples

### Character

Input: ` _printf("This is a character: %c\n", ‘H’);`

Output: `This is a character: H`

### String

Input: `_printf("%s\n", 'This is a String');`

Output: `This is a String`

### Integer

Input: `_printf("We are the Cohort %d\n", 20);`

Output: `We are the Cohort 20`

### Others

If the next character after the format indicator is not a format specifier, the format indicator (%) will be taken as a normal character and it will be printed, followed by the next character after it.

Input: `_printf("This is not a format specifier: %k.\n");`

Output: `This is not a format specifier: %k.`

Multiple format indicators can be used in a single call of the printf function. In this case, the function will include the values in the same order they appear:

Input: `_printf("This is a character: %c. This is a digit: %d.\n", ‘H’, 4);`

Output: `This is a character: H. This is a digit: 4.`

## Requirments

- All your files will be compiled on Ubuntu 20.04 LTS using:
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89` 
- Code should use the Betty style.
- Global variables are not allowed.





## File Descriptions

- ***_printf.c***: contains the function _printf, which uses the prototype *int _printf(const char format, ...);. _printf will return the number of characters printed (excluding the null byte used to end output to strings) and will write output to stdout, the standard output stream. *See man 3 printf for more detail.*
Also contains **get_f**: selects the correct functiont o execute.

- ***main.h***: contains all function prototypes used for **_printf**.

- ***auxiliar_functions.c***: contains the function **_putchar**, which writes a character to stdout.

- ***functions.c***: contains the functions: **print_c**, **print_s**, **print_p** and **print_id**, which convert specifiers for ***c, s, %, d*** and ***i*** respectivily. 

- ***man_3_printf***: manual page for **_printf**.



## Flowchart


## Authors

- Micaela Picco: [@micaelapicco](https://www.github.com/micaelapicco)
- Gonzalo Pedernera: [@gonzalopedernera](https://www.github.com/gonzalopedernera)


