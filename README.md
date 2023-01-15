# Question 1

## Explanation of development environment
I have used Visual Studio Code to write the code for Question 1 because VS Code is a good choice for development or debugging.

In the first line, the header file #include<stdio.h> contains the valid C sources statements that can be compiled as part of a program. The system will find the file named "stdio.h" and read its entire contents in, replacing this statement.

Initially, an enumerator named TypeTag has been defined that carries the operations as per the main function call. We defined the type of node (ADD, MUL, SUB, FIB) for the kind of operation to be done on the node in the typedef enum. 

Then we define a Node data structure to store the type of the operation and the value of the result. The Node contains two elements: TypeTag type and int data. Here, type stores the type of operation to be carried out and the data contains the results of the operation.

Now we define Node *makeFunc for creating a new node with the type and data supplied. In this, we pass a parameter of type of node and finally return newNode to the main function.

Then function is defined as int fibonacci which takes the parameter a and returns the a’th fibonacci number. Iterative dynamic programming has been used to calculate fibonacci number in which the values are stored in a fib array by iterative calculation of fib[i] = fib[i-1] + fib[i-2]. Finally, we return fib[n]-1.

calc function takes 3 input parameters, one TypeTag that defines the type of operation and other two are the integers ‘a’ and ‘b’ on which the operation will be performed. calc function calculates the outcomes of operations defined by type tags. We check the type of node which includes ADD, MUL, SUB and FIBO using “else if” condition and perform operation according to the type of node supplied. 

Note: I have made some changes in the main() function which was originally given in the question because it was giving some error in passing the variables.  

## Summary 
This application calculates the Fibonacci numbers using dynamic programming. The makeFunc method creates a new node for each operation, while the calc function calculates the outcomes of the operations and puts them in the data field of the newly created node. 

## Running and compiling the code
First open the Terminal and run the command ‘gcc -v’ to check if you have a compiler installed. If not, you need to download a gcc compiler and install it
Then we compile the program. To do this we need to use the command gcc followed by the name of the program we are going to execute. In our case, we will use gcc Question1.c
After this, an executable file will be created in the directory where our c file exists in. Eg: Question1.exe
After that we run the program. This is done by simply giving the name of the executable file without any extension. In our case we write Question1 and we will get the output of the code.
