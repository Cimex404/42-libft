#	libft 42

<div style="display: flex; align-items: center;">
  <div style="flex: 1; text-align: right;">
    <img src="https://github.com/Cimex404/42-libft/blob/master/libft_icon.png" align="right" alt="libft Logo" width="150">
  </div>
  <div style="flex: 2;">
    <p>
      This is a 42 project that provides a library of useful functions for C programming.
      These functions are useful for string manipulation, memory management, and other common tasks.
    </p>
    <p>
      Running the "make" command will compile the library and create a static library file called "libft.a".
      To use this library, include the header file "libft.h" in your source code and compile the "libft.a" file with your project.
    </p>
  </div>
</div>

#	Functions included in this library

##	Booleans
-	ft_isalnum
-	ft_isalpha
-	ft_isascii
-	ft_isdigit
-	ft_isprint

##	Conversions
-	ft_atoi
-	ft_itoa

##	Memory Management
-	ft_bzero
-	ft_calloc
-	ft_memchr
-	ft_memcmp
-	ft_memcpy
-	ft_memmove
-	ft_memset

##	Strings manipulation
-	ft_strdup
-	ft_substr
-	ft_strjoin
-	ft_strtrim
-	ft_split
-	ft_strmapi
-	ft_striteri
-	ft_strchr
-	ft_strrchr
-	ft_strncmp
-	ft_strnstr
-	ft_strlcat
-	ft_strlcpy
-	ft_strlen
-	ft_str_repl_chr

##	Math
-	ft_min
-	ft_arrmin
-	ft_max
-	ft_arrmax
-	ft_abs
-	ft_sign
-	ft_sqrt
-	ft_pow

##	Lists
-	ft_lstnew
-	ft_lstadd_front
-	ft_lstsize
-	ft_lstlast
-	ft_lstadd_back
-	ft_lstdelone
-	ft_lstclear
-	ft_lstiter
-	ft_lstmap

##	Other
-	ft_putchar_fd
-	ft_putstr_fd
-	ft_putendl_fd
-	ft_putnbr_fd
-	ft_tolower
-	ft_toupper
- ft_strlower
- ft_strupper







#   ft_printf 42

<div style="display: flex; align-items: center;">
  <div style="flex: 1; text-align: right;">
    <img src="https://github.com/Cimex404/42-libft/blob/master/printf_icon.png" align="right" alt="libft Logo" width="140">
  </div>
  <div style="flex: 2; text-align: left">
    <p>
    	ft_printf is a 42 project that teaches about variable-length function calls.
	This project is a great asset for the later projects as it is much simpler and more versatile than the write function.
	ft_printf is a simplified replica of the original printf function, it can handle the most essential data type conversions and prints them to the standart output.
    </p>
  </div>
</div>


#	Conversions
```bash
%s	==>	String
%c	==>	Character
%d	==>	Decimal
%i	==>	Integer
%u	==>	Unsigned Decimal
%p	==>	Pointer Address
%x	==>	Hex value (lowercase)
%X	==>	Hex value (uppercase)
```

#	How to use it
You can simply run `make` and the project will compile to a static library called <strong>ft_printf.a</strong> as well as an executable called <strong>ft_printf</strong>.
The executable will simply run a demonstration of all conversions. 
<p>
  To use ft_printf in your own project compile the <strong>ft_printf.a</strong> together with your source files and add the <strong>ft_printf.h</strong> header to your headers.
</p>








#	get_next_line 42

This is a 42 project that teaches about static variable and provides a useful function for the upcoming projects.

By using the "make" command, you can compile the program. The Makefile will also create a TestFile.txt file with the content of the lines to test the program.
The program takes two arguments "filename" "number of lines"
Run the program as follows:

```bash
./get_next_line TestFile.txt 10
```

## How it works

The program will use the "read" function to read the file.
I will then put the content of the bytes that were read into a buffer.
The buffer will then be passed to the "append" function.
The "append" function will then append the content of the buffer to the line.
When the append function reaches a newline character, it will return the line.
The main function will then print the line.

## What are static variables?

Static variables are variables that are declared at the beginning of a function, but when the function is called again, the variable has retained its value from the previous call.