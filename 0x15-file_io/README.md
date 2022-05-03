# File I/O

---

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

---

## Quiz questions

# Question #0
What is the unistd symbolic constant for the standard input?


- STDIN_FILENO


STDOUT_FILENO


STDERR_FILENO

# Question #1
What is the unistd symbolic constant for the standard output?


STDIN_FILENO


- STDOUT_FILENO


STDERR_FILENO

# Question #2
What is the unistd symbolic constant for the Standard error?


STDIN_FILENO


STDOUT_FILENO


- STDERR_FILENO

# Question #3
What is the oflag used to open a file with the mode read only?


O_WRONLY


- O_RDONLY


O_RDWR

# Question #4
What is the oflag used to open a file in mode read + write?


O_WRONLY


O_RDONLY


- O_RDWR

# Question #5
What is the correct combination of oflags used to open a file with the mode write only, create it if it doesn’t exist and append new content at the end if it already exists?


O_WRONLY


O_WRONLY | O_CREAT | O_EXCL


- O_WRONLY | O_CREAT | O_APPEND


O_RDWR | O_CREAT | O_APPEND

# Question #6
is open a function or a system call? (select all valid answers)


- it’s a function


- it’s a system call


it’s a library call


- it’s a function provided by the kernel


it’s a kernel routine

# Question #7
What system call would you use to write to a file descriptor? (select all correct answers)


printf


fprintf


- write

# Question #8
Without context, on Ubuntu 14.04 LTS, write is a … (please select all correct answers):


- executable


- system call


library call


game


kernel routine

# Question #9
What is the return value of the system call open if it fails?


0


- -1


98

# Question #10
Most of the time, on a classic, modern Linux system, what will be the value of the first file descriptor you will get after opening a new file with open (if open succeeds of course):


0


1


2


- 3


4


5


6

# Question #11
why? #AlwaysAskWhy


Because this will be the first opened file descriptor and in CS we start counting starting from 0


Because this will be the first opened file descriptor and we start counting starting from 1


Because this will be the second opened file descriptor for my process


Because this will be the third opened file descriptor for my process


- Because most of the time, I will already have stdin (value 0), stdout (value 1) and stderr (value 2) opened when my program starts executing.


I don’t care I never ask why, just let me access the tasks!

# Question #12
Which of these answers are the equivalent of O_RDWR on Ubuntu 14.04 LTS? (select all correct answers):


O_RDONLY


1


- 2


3


- 1 << 1


- 3 & 2


3 | 2


O_WRONLY


(O_RDONLY + O_WRONLY)


(O_RDONLY | O_WRONLY)


(O_RDONLY & O_WRONLY)


(O_RDONLY && O_WRONLY)


(O_RDONLY << 1)


- (O_WRONLY << 1)


0



# Question #13
What happens if you try to write “Best” to the standard input on Ubuntu 14.04 LTS?


Nothing


Segmentation fault


The text will be printed on the terminal but I can’t pipe it


- The text will be printed on the terminal on the standard output


# Question #14

When I am using O_WRONLY | O_CREAT | O_APPEND -> the | are bitwise operators.


- True


False

---

## Tasks

0. Tread lightly, she is near
mandatory

Write a function that reads a text file and prints it to the POSIX standard output.

- Prototype: ssize_t read_textfile(const char *filename, size_t letters);
- where letters is the number of letters it should read and print
- returns the actual number of letters it could read and print
- if the file can not be opened or read, return 0
- if filename is NULL return 0
- if write fails or does not write the expected amount of bytes, return 0

1. Under the snow
mandatory

Create a function that creates a file.

- Prototype: int create_file(const char *filename, char *text_content);
- where filename is the name of the file to create and text_content is a NULL terminated string to write to the file
- Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…)
- The created file must have those permissions: rw-------. If the file already exists, do not change the permissions.
- if the file already exists, truncate it
- if filename is NULL return -1
- if text_content is NULL create an empty file

2. Speak gently, she can hear
mandatory

Write a function that appends text at the end of a file.

- Prototype: int append_text_to_file(const char *filename, char *text_content);
- where filename is the name of the file and text_content is the NULL terminated string to add at the end of the file
- Return: 1 on success and -1 on failure
- Do not create the file if it does not exist
- If filename is NULL return -1
- If text_content is NULL, do not add anything to the file. Return 1 if the file exists and -1 if the file does not exist or if you do not have the required permissions to write the file

3. cp
mandatory

Write a program that copies the content of a file to another file.

Usage: cp file_from file_to
- if the number of argument is not the correct one, exit with code 97 and print Usage: cp file_from file_to, followed by a new line, on the POSIX standard error
- if file_to already exists, truncate it
- if file_from does not exist, or if you can not read it, exit with code 98 and print Error: Can't read from file NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error
	- where NAME_OF_THE_FILE is the first argument passed to your program
- if you can not create or if write to file_to fails, exit with code 99 and print Error: Can't write to NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error
	- where NAME_OF_THE_FILE is the second argument passed to your program
- if you can not close a file descriptor , exit with code 100 and print Error: Can't close fd FD_VALUE, followed by a new line, on the POSIX standard error
	- where FD_VALUE is the value of the file descriptor
- Permissions of the created file: rw-rw-r--. If the file already exists, do not change the permissions
- You must read 1,024 bytes at a time from the file_from to make less system calls. Use a buffer
- You are allowed to use dprintf

---
Author: Kamila
