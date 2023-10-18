# Project 0x16 - C Simple Shell
**Created by Spencer Cheng, with contributions from Julien Barbier**
This project should be completed in teams of two people (your team: Godswill Kalu and Vatalis Ibeh).

# Learning Objectives
Upon completing this project, you should be able to explain the following concepts without relying on external resources:

## General
1. Identify the designer and implementer of the original Unix operating system.
2. Recognize the first developer of the UNIX shell.
3. Understand the origin of the B programming language, a precursor to the C programming language.
4. Define who Ken Thompson is.
5. Explain how a shell operates.
6. Describe the concepts of PID (Process ID) and PPID (Parent Process ID).
7. Know how to manipulate the environment of the current process.
8. Differentiate between a function and a system call.
9. Learn how to create processes.
10. Identify the three prototypes of the `main` function.
11. Understand how a shell uses the PATH variable to locate programs.
12. Know how to execute another program using the `execve` system call.
13. Learn how to suspend the execution of a process until one of its child processes terminates.
14. Define EOF (End of File).

# Requirements
## General
- You may use vi, vim, or emacs as your text editors.
- All code files will be compiled on Ubuntu 20.04 LTS using gcc with the following options: -Wall -Werror -Wextra -pedantic -std=gnu89.
- Ensure that all your code files end with a newline.
- Include a mandatory README.md file at the project's root folder.
- Adhere to the Betty style for your code, which will be verified using betty-style.pl and betty-doc.pl.
- Ensure that your shell has no memory leaks.
- Limit each file to a maximum of 5 functions.
- Use include guards for all header files.
- Use system calls only when necessary, and provide a justification.

## GitHub
- Each group should have one project repository. If you and your partner have repositories with the same name in both your accounts, you risk a 0% score. Add your partner as a collaborator.

## More Info
- Your program should produce the exact same output and error messages as the `/bin/sh` shell.
- The only difference should be that when you print an error, the program name should match your `argv[0]`.

# List of Allowed Functions and System Calls
- access (man 2 access)
- chdir (man 2 chdir)
- close (man 2 close)
- closedir (man 3 closedir)
- execve (man 2 execve)
- exit (man 3 exit)
- _exit (man 2 _exit)
- fflush (man 3 fflush)
- fork (man 2 fork)
- free (man 3 free)
- getcwd (man 3 getcwd)
- getline (man 3 getline)
- getpid (man 2 getpid)
- isatty (man 3 isatty)
- kill (man 2 kill)
- malloc (man 3 malloc)
- open (man 2 open)
- opendir (man 3 opendir)
- perror (man 3 perror)
- read (man 2 read)
- readdir (man 3 readdir)
- signal (man 2 signal)
- stat (__xstat) (man 2 stat)
- lstat (__lxstat) (man 2 lstat)
- fstat (__fxstat) (man 2 fstat)
- strtok (man 3 strtok)
- wait (man 2 wait)
- waitpid (man 2 waitpid)
- wait3 (man 2 wait3)
- wait4 (man 2 wait4)
- write (man 2 write)

# Compilation
## Your shell will be compiled using the following command:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

vbnet
Copy code

# Files
- README.md: Provides a description of the project repository.
- man_1_simple_shell: The manual page for the shell you will be developing.
- AUTHORS: A file at the root of your repository listing all individuals who contributed content to the repository.
- main.h: The header file containing standard headers and prototypes for functions used in the program.
- main.c: Initializes the program with an infinite loop by calling the `prompt` function.
- prompt.c: Uses the `getline` system call to read input from the user and maintains an infinite loop with fork to keep the prompt active.
- special_character.c: Identifies special inputs, such as when the first input is a slash, when the user types 'exit,' or 'env.'
- string.c: Handles various string operations, including string length, writing strings, finding strings in directories, and concatenating strings.
- cmd.c: Finds the command entered by the user.
- execute.c: Executes the specified command.
