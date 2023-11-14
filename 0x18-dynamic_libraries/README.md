0x18. C - Dynamic libraries

When a C program is compiled, the compiler generates object code. After generating the object code, the compiler also invokes linker. One of the main tasks for linker is to make code of library functions (eg printf(), scanf(), sqrt(), ..etc) available to your program.

A linker can accomplish this task in two ways, by copying the code of library function to your object code, or by making some arrangements so that the complete code of library functions is not copied, but made available at run-time.

Static Linking and Static Libraries

is the result of the linker making copy of all used library functions to the executable file. Static Linking creates larger binary files, and need more space on disk and main memory. Examples of static libraries (libraries which are statically linked) are,

.a

files in Linux and

.lib

files in Windows.

Steps to create a static library

Let us create and use a Static Library in UNIX or UNIX like OS.

1.

Create a C file that contains functions in your library.


/* Filename: lib_mylib.c */
#include <stdio.h>
void fun(void)
{
  printf("fun() called from a static library");
}
We have created only one file for simplicity. We can also create multiple files in a library.

2.

Create a header file for the library


/* Filename: lib_mylib.h */
void fun(void);
3.

Compile library files.

 gcc -c lib_mylib.c -o lib_mylib.o 
4.

Create static library. This step is to bundle multiple object files in one static library (see

ar

for details). The output of this step is static library.

 ar rcs lib_mylib.a lib_mylib.o 
5.

Now our static library is ready to use. At this point we could just copy lib_mylib.a somewhere else to use it. For demo purposes, let us keep the library in the current directory.

Let us create a driver program that uses above created static library

.

1.

Create a C file with main function


/* filename: driver.c  */
#include "lib_mylib.h"
void main() 
{
  fun();
}
2.

Compile the driver program.

gcc -c driver.c -o driver.o
3.

Link the compiled driver program to the static library. Note that -L

.

is used to tell that the static library is in current folder (See

this

for details of -L and -l options).

gcc -o driver driver.o -L. lib_mylib.a
