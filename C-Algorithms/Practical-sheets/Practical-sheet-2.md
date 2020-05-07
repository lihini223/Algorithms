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
        
Program to print above pattern:
            
            #include<stdio.h>
            
            int main()
            {
            
            printf("%5d%5d%5d\n",2,4,8);	//Right Align
            printf("%5d%5d%5d\n",3,9,27);	//Right Align
            printf("%5d%5d%5d\n\n",4,16,64);	//Left Align
            
            }
            
Remark:
Observe how format commands are used in the following program.
        
      #include <stdio.h>
      
      int main()
      {
      
        printf("%5d%5d\n", 1, 2);	//Right Align
        printf("%5d%5d\n", 10, 20);	//Right Align
        printf("\n\n\n");
        printf("%-5d%-5d\n", 1, 2);	//Left Align
        printf("%-5d%-5d\n", 10, 20);	//Left Align
        
        return 0;
        
      }
      
## Question 3
Write a simple program to evaluate the average speed of a car traveled in meters per second (ms-1).<br/>
**Average Speed= Distance Travelled / Time Taken**<br/>
Try using integer variables. What would be the problem? Why?  How to fix the problem?
      
      #include<stdio.h>
      int main()
      {
      
      int distance,time,avg_speed;
      printf("Input travelled distance in meters:");
      scanf("%d",&distance);
      printf("Input time taken in minutes:");
      scanf("%d",&time);
      
      avg_speed=distance/(time*60);
      printf("Average Speed is %d",avg_speed);
      
      return0;
      
      }

