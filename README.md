# Question 1

# Explanation of development environment
I have used Visual Studio Code to write the code for Question 2 because VS Code is a good choice for development or debugging.

In the first line, the header file #include<stdio.h> contains the valid C sources statements that can be compiled as part of a program. The system will find the file named "stdio.h" and read its entire contents in, replacing this statement.

After that we define a structure of node which contains two parameters, TypeTag type (which stores type of a node) and data of a node. 
We defined the type of node (ADD, MUL, SUB, FIB) for the kind of operation to be done on the node in the “typedef enum TypeTag”. 
The makeFunc method is for creating a new node with the type and data supplied. In this, we pass a parameter of type of node and finally return newNode to the main function.

The primary function begins by creating a new node for the addition operation with the data fields set to 10 and 6. Similar process is then repeated for the multiplication operation, with the data fields set to 5 and 4. Next, it generates a new node for the subtraction operation, populating its data fields with the results of the addition and multiplication operations. It then generates a new node for the fibonacci operation with the result of the subtraction operation as the data field.

calc function calculates the outcomes of operations defined by type tags. In the calc function, we pass the node as parameter. Then we check the type of node which includes ADD, MUL, SUB and FIBO using “else if” condition and perform operation according to the type of node supplied. For addition and multiplication, it just calculates and saves the result in the data field of the node. It calculates the result of the subtraction operation and saves it in the node's data field. Using the results of the addition and multiplication operations, the nth fibonacci number is calculated for the fibonacci operation and stored in the data field of the node.

The main function displays the results of the actions after all nodes have been constructed and the calc function has been run on each of them. For addition, multiplication, and subtraction, the result stored in the node's data field is printed. The fibonacci operation outputs the nth fibonacci number contained in the data field of the node.

# Summary 
This application calculates the Fibonacci numbers using dynamic programming. The makeFunc method creates a new node for each operation, while the calc function calculates the outcomes of the operations and puts them in the data field of the newly created node. The outcomes of operations are then printed by the main function.

# Running and compiling the code
First open the Terminal and run the command ‘gcc -v’ to check if you have a compiler installed. If not, you need to download a gcc compiler and install it.

Then we compile the program. To do this we need to use the command gcc followed by the name of the program we are going to execute. In our case, we will use gcc Question1.c

After this, an executable file will be created in the directory where our c file exists in. Eg: Question1.exe

After that we run the program. This is done by simply giving the name of the executable file without any extension. In our case we write Question1 and we will get the output of the code.
