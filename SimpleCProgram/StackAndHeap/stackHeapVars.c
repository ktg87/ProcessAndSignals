/********************************************************************
 * To Compile: gcc -g -o0 stackHeapVars.c -o stackHeapVars          *
 *             * The -g flag adds debugging symbols                 *
 *               to make it easier to look at our variables         *
 *             * The -o0 flag tells gcc to turn off optimization    *
 *               (We don't want x to be optomized out)              *
 * To Run w/gdb: gdb ./stackHeapVars                                *
 *                                                                  *
 * NOTE: You should be in the same directory of the                 *
 *       source code/compiled binary when running these             *
 *       commands.                                                  *
 *                                                                  *
 * Source: This is from a blog/tutorial that can be found at:       *
 *  https://jvns.ca/blog/2021/05/17/how-to-look-at-the-stack-in-gdb *
 ********************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char stack_string[10] = "stack";
    int x = 10;
    char *heap_string;

    heap_string = malloc(50);

    printf("Enter a string for the stack: ");
    gets(stack_string);
    printf("Enter a string for the heap: ");
    gets(heap_string);
    printf("Stack string is: %s\n", stack_string);
    printf("Heap string is: %s\n", heap_string);
    printf("x is: %d\n", x);
}
