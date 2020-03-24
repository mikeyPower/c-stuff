# c-stuff
A repo of C code


In order to compile and execute a C program, you need to have the essential packages installed on your system. Enter the following command as root in your Linux Terminal:

    $ sudo apt-get install build-essential
    
In your Terminal, enter the following command in order to make an executable version of the program you have written:

    $ gcc [programName].c -o programName
    
    
The final step is to run the compiled C program. Use the following syntax to do so:

    $ ./programName
    
## Data types

Integer Types

| Type           | Storage Size  | Value Range                                          | Format Specifier |
| -------------- |:-------------:|:----------------------------------------------------:| ----------------:|
| char           | 1 byte        | -128 to 127 or 0 to 255                              | %c               |
| unsigned char  | 1 byte        | 0 to 255                                             | %c               |
| signed char    | 1 byte        | -128 to 127                                          | %c               |
| int            | 2 or 4 bytes  | -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647 | %d               |
| unsigned int   | 2 or 4 bytes  | 0 to 65,535 or 0 to 4,294,967,295                    | %u               |
| short          | 2 bytes       | -32,768 to 32,767                                    | %hd              |
| unsigned short | 2 bytes       | 0 to 65,535                                          | %hu              |
| long           | 8 bytes       | -9223372036854775808 to 9223372036854775807          | %li              |
| unsigned long  | 8 bytes       | 0 to 18446744073709551615                            | %lu              |


Floating-Point Types

| Type        | Storage Size  | Value Range            | Precision         | Format Specifier |
| ------------|:-------------:|:----------------------:|------------------:| ----------------:|
| float       | 4 byte        | 1.2E-38 to 3.4E+38     | 6 decimal places  | %f               |
| double      | 8 byte        | 2.3E-308 to 1.7E+308   | 15 decimal places | %lf              |
| long double | 10 byte       | 3.4E-4932 to 1.1E+4932 | 19 decimal places | %Lf              |


## Type-Casting


## Multi-line Strings


## Comments


## C Operators



## Pointers

    
    
## Reference

https://vitux.com/
