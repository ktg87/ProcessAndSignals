/************************************************************
 * To Compile: gcc printArgments.c -o printArguments        *
 *                                                          *
 * To Run (example): ./printArguments Here are my arguments *
 *                                                          *
 * NOTE: You should be in the same directory of the         *
 *       source code/compiled binary when running these     *
 *       commands.                                          *
 ************************************************************/


#include <stdio.h> //System library that contains input and output functions (i.e printf)

// The main function is used to tell the compiler where
// the program's "starting point" is located.
int main(int argc, char * argv[])
{
    // The argc argument in the main function is of type int
    // because it is used to store the number of command-line
    // values that were passed by the user of the program.
    printf("Number of Arguments Passed: %d\n", argc);

    // The argv[] argument is an array of character arrays (Strings)
    // that is used to store all of the command-line values that 
    // were passed by the user of the program.
    // We can use argc and argv in a for loop and print out all of
    // arguments that were passed into the program.
    for(int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    return 0; //We return 0 from our main function to indicate the status of Success

}
