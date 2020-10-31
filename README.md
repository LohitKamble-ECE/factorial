A Simple GNU makefile Demonstration
===================================
In this repo, I have used a C program to demonstrate the makefile that can be use or able to compile the small C or C++ (some extension changes may require) program very efficiently.
Following tree show the file structure of this repo:
. project               (the project root directory)
|__ Makefile
|
|__ src
|   |__ main.c
|   |__ factorial.c
|
|__ bin
|   |__ factorial.out
|
|__ include
|   |__ factorial.h
|
|__ obj
    |__ main.o
    |__ factorial.o
    |__ main.d
    |__ factorial.d

Use
===
Use ```make``` to compile project form scratch.
Use ```make run``` to run the final executable file.
Use ```make clean``` to clean up the object file.
Use ```make_dep```to clean up the dependency file. (This file are generate to make ```make``` generic and automate the process.
