#The C programming task
#0. The Preprocessor
Edited and added the preprocessor file using "gcc -E $CFILE -o c"

#1.Write a script that compiles a C file but does not link.
#The C file name will be saved in the variable $CFILE
#The output file should be named the same as the C file, but with the extension .o instead of .c.
#Example: if the C file is main.c, the output file should be main.o 
gcc -c $CFILE

#2. Write a script that generates the assembly code of a C code and save it in an output file. The C file name will be saved in the variable $CFILE The output file should be named the same as the C file, but with the extension .s instead of .c. Example: if the C file is main.c, the output file should be main.s
gcc -S $CFILE

#3. Write a script that compiles a C file and creates an executable named cisfun. The C file name will be saved in the variable $CFILE
using gcc $CFILE -o cisfun

#4. Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line. Use the function puts You are not allowed to use printf Your program should end with the value 0


