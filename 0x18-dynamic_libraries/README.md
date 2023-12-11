# Project 0x18-dynamic_libraries

## Overview
This project explores the use of dynamic libraries in C programming. Dynamic libraries are shared, reusable pieces of code that can be loaded into a program at runtime. The tasks in this project involve creating, compiling, and using dynamic libraries in C.

## Tasks

- `0`: A library is not a luxury but one of the necessities of life
**File:** libdynamic.so
**Description:** Create a dynamic library called libdynamic.so from a list of C files.

- `1`: Without libraries what have we? We have no past and no future.
**File:** liball.so
**Description:** Create a script that creates a dynamic library called liball.so

```bash
$ gcc -shared -o libdynamic.so *.o
