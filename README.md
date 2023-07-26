# Repository Name

This repository contains a custom implementation of the `printf` function with support for various conversion specifiers. Below is a list of tasks and features included in this project.


## Tasks

0. **Custom printf function for basic conversions**

   - Create a function `int _printf(const char *format, ...)` that mimics the behavior of the standard `printf` function.
   - The function should support the following conversion specifiers:
      - `%c`: Print a character.
      - `%s`: Print a string.
      - `%%`: Print a percent sign.
   - The function should return the number of characters printed (excluding the null byte).

Repo: [printf](https://github.com/your-username/printf)

1. **Support for 'd' and 'i' conversions**

   - Extend the `_printf` function to handle the 'd' and 'i' conversion specifiers.

   Repo: [printf](https://github.com/your-username/printf)

2. **Handle custom conversion specifier 'b'**

   - Implement a custom conversion specifier '%b' to print an unsigned integer in binary format.
   - Example:

   `_printf("%b\n", 98);`

   `output >> 1100010`

   Repo: [printf](https://github.com/your-username/printf)

3. **Support for 'u', 'o', 'x', and 'X' conversions**

   - Extend the `_printf` function to handle the 'u', 'o', 'x', and 'X' conversion specifiers.

   Repo: [printf](https://github.com/your-username/printf)

4. **Optimize with a local buffer**

   - Use a local buffer of 1024 characters to minimize the number of calls to the `write` function.

   Repo: [printf](https://github.com/your-username/printf)

5. **Handle custom conversion specifier 'S'**

   - Implement a custom conversion specifier '%S' to print strings with non-printable characters represented as '\x' followed by their ASCII code in hexadecimal.
   - Example:

   `_printf("%S\n", "Best\nSchool");` 

   `output >> Best\x0ASchool`

   Repo: [printf](https://github.com/your-username/printf)

6. **Handle conversion specifier 'p'**

   - Extend the `_printf` function to handle the 'p' conversion specifier.

   Repo: [printf](https://github.com/your-username/printf)

7. **Handle flag characters '+', 'space', and '#'**

   - Implement support for the flag characters '+', 'space', and '#' for non-custom conversion specifiers.

   Repo: [printf](https://github.com/your-username/printf)

8. **Handle length modifiers 'l' and 'h'**

   - Implement support for the length modifiers 'l' and 'h' for non-custom conversion specifiers 'd', 'i', 'u', 'o', 'x', and 'X'.

   Repo: [printf](https://github.com/your-username/printf)

9. **Handle field width**

   - Implement support for the field width for non-custom conversion specifiers.

   Repo: [printf](https://github.com/your-username/printf)

10. **Handle precision**

   - Implement support for the precision for non-custom conversion specifiers.

   Repo: [printf](https://github.com/your-username/printf)

11. **Handle flag character '0'**

   - Implement support for the flag character '0' for non-custom conversion specifiers.

   Repo: [printf](https://github.com/your-username/printf)

12. **Handle flag character '-'**

   - Implement support for the flag character '-' for non-custom conversion specifiers.

   Repo: [printf](https://github.com/your-username/printf)

13. **Handle custom conversion specifier 'r'**

   - Implement a custom conversion specifier '%r' to print the reversed string.

   Repo: [printf](https://github.com/your-username/printf)

14. **Handle custom conversion specifier 'R'**

   - Implement a custom conversion specifier '%R' to print the rot13'ed string.

   Repo: [printf](https://github.com/your-username/printf)

15. **Integration of all options**

   - Ensure that all the above options work well together.

   Repo: [printf](https://github.com/your-username/printf)
