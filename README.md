# printf()
This printf project is a collaboration between Uchechukwu Ottah and Nwobodo Odinaka, students of the ALX - Software Engineering programme.
The "_printf" function  imitates the actual "printf" command located in the stdio.h library. It contains some of the basic features and functions found in the manual 3 of "printf".

_printf() is a function that performs formatted output conversion and print data. It has the following prototype:

	int _printf(const char *format, ...)

Where **format** contains the string that is printed. As _printf() is variadic function, it can receives n arguments that replace by n tags written inside the string.

The format tags prototype is the following:

	%[flags][length]specifier
If the program runs successfully, the **return value** is the amount of chars printed.

------------

## Function Files

### _printf.c
Custom Printf Function Which Performs Formatted Output Conversion And Print Data.

---------

### main.h
Header File Were All Prototypes Are Saved.

### get_flags.c
Computes Flags To Set Based On Format Strings

### get_modifier.c
Computes And Sets Modifier Length Based On Characters Found

### converter.c
Converts A Number From Base Decimal(Base 10) To Other Number Bases

### get_func.c
Computes Function To Be Used Based On Character Input

### print_letters.c
Handles Printing Characters And Strings To Stdout

### print_numbers.c
Handles Printing Integers And Decimals To Stdout

### print_base.c
Handles Printing Binary, Hexadecimal, Octal And Unsigned Integers

### print_custom.c
Handles Custom Functions To Print The Reverse Of A String, rot13 Encoding And Other Specifer Characters For Hex And **"%"** Characters

### write_funcs.c
Handles Functions For Printing To Stdout

------------

### Authors
**Uchechukwu Ottah & Nwobodo Odinaka © ALX - Software Engineering Programme (2022)**
