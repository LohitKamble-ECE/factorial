A Simple GNU makefile Demonstration
===================================
In this repo, I have used a C program to demonstrate the makefile that can be use or able to compile the small C or C++ (some extension changes may require) program very efficiently.
Following tree show the file structure of this repo:
. project               (the project root directory)
|__Makefile
|
|__src
|   |__main.c
|   |__factorial.c
|
|__bin
|   |__factorial.out
|
|__include
|   |__factorial.h
|
|__obj
    |__main.o
    |__factorial.o
    |__main.d
    |__factorial.d

Use
===
Use ```make``` to compile project form scratch.
Use ```make run``` to run the final executable file.
Use ```make clean``` to clean up the object files.
Use ```make_dep```to clean up the dependency file (this file are generate to make ```make``` generic and automate the process).
