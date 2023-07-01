# printf

A lightweight implementation of the printf function in C.

## Supported conversion specifiers

%c: This specifier is used to print a single character.
%s: It is used to print a null-terminated string.
%d, %i, %u, %o, %x, %X: These specifiers are used to print signed or unsigned integers in decimal, octal, or hexadecimal format.
%p: This specifier is used to print a pointer address.
%S: It is used to print a string where non-printable characters are represented in the format \xXX, where XX is the ASCII code value in hexadecimal (always two characters in uppercase).

## Usage

```c
#include "printf.h"

int main() {
    printf("Hello, world!\n");
        return 0;
	}
