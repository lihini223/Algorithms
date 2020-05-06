# Welcome to Practical-Sheet-2 
Areas covered :	Data Input & output , Operators

## **Question 1** <br/>
Have the computer print

   **HI, HOW OLD ARE YOU?**

on one line. The user then enters his or her age immediately after the question mark. The computer then skips two lines and prints on two consecutive lines.

**WELCOME (age)<br/>
LET’S BE FRIENDS!**

Write a complete C program to do the above.
        
        #include<stdio.h>
        
        int main()
        {
        int age;
        printf("HI,HOW OLD ARE YOU?");
        scanf("%d",&age);
        printf("\n\nWELCOME %d \nLET'S BE FRIENDS\n\n",age);
        }
        
## Question 2
Write a program which uses the format commands with modifiers to print the following output:

        2	4	8
        3	9	27
        4	16	64
Remark:
Observe how format commands are used in the following program.


