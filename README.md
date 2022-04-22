# simple_shell

# Description: Simple shell

The present project consists of the creation of a program similar to a Linux shell, using the C programming language. To do it, it is necessary understand the following definitions:

1. A shell is a command interpreter that allows fluid interaction between an operating system and its users.

2. The interaction that a shell allows is carried out through a command line that, as its name indicates, facilitates the entry of text strings that are analyzed and interpreted by the operating system so that certain processes and tasks can be executed.

3. The commands that are typed in a chain of commands can have options or arguments that make more specific the processes that the users require.

#Objective: to create an interface similar to the linux shell by writing programs that allow you to print a "prompt" on the screen followed by a command line in which you can type text strings that can be interpreted by the operating system as valid commands and/or arguments that can be executed or return error messages.

To achieve the goal, some Linux functions are used, as well as system calls that are incorporated into the written programs.

#How to install it: Lo primero que se debe hacer es clonar el presente repositorio y así se tendrá un directorio con todos los archivos del programa.

Luego se debe compilar el programa mediante las siguiente línea de commandos: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

# How to useit: To use the program, simply open a Linux terminal, navigate to the directory containing the program files, run the "hsh" file with the command "./hsh"

#Authors:
  Felipe Ríos <aanand.prasad@gmail.com>
  Raúl Quintero <4638@holbertonschool.com>
