# Welcome to practical-sheet-1

Areas covered : Memory concepts, Data Input & output ,primitive data types

1.	Display your name and school in two separate lines.

        #include<stdio.h> 
       
        int main( )
        {
          printf("My name is Lihini Nisansala\nMy School is Devi Balika Vidyalaya-Colombo 08\n");
          return 0;
        }
     Output:<br/>
        My name is Lihini Nisansala<br/>
        My School is Devi Balika Vidyalaya-Colombo 08
        
2.	Display the following output using printf() statements<br/>
        * <br/>
        ** <br/>
        *** <br/>
        **** <br/>
        ***** <br/>
                
        #include<stdio.h>
        
        int main()
        {
                printf("*\n**\n***\n****\n*****\n");
                return 0;
        }
         
3.	Input values for int,float,double and char data types and display the value of each of the variable.

        #include<stdio.h>
        
        int main()
        {
        
        int x;
        printf("Enter a Integer here:");
        scanf("%d",&x);
        
        float y;
        printf("Enter a Float value here:");
        scanf("%f",&y);
        
        double z;
        printf("Enter a Double value here:");
        scanf("%f",&z);

        char m;
        printf("Enter a Character here:");
        scanf("%c",&m);
        
        return 0;
        
        }

4.	Input two integers and display the total.
        
        #include<stdio.h>
        
        int main(){
        
        int n1,n2,total;
        
        printf("Input First Number:");
        scanf("%d",&n1);
        printf("Input Second Number:");
        scanf("%d",&n2);

        total=n1+n2;
        printf("Total is %d",total);
        
        return 0;
        
        }
        
5.	Input two numbers with decimals and display the average with decimals.
        
        #include<stdio.h>
        
        int main(){
        
        float num1,num2,average;
        
        printf("Enter First Number with decimal points:");
        scanf("%f",&num1);
        printf("Enter Second Number with decimal points:");
        scanf("%f",&num2);
        
        average=(num1+num2)/2;
        printf("Average is %f",average);
        
        return 0;
        
        }

6.	Input a student name, birth year and display student name with age.

        #include<stdio.h>
        
        int main()
        {
        char name[30];
        int birthyear,age;
        
        printf("Input Your Name:");
        scanf("%s",&name);
        getchar();
        
        printf("Input Your Birth Year: ");
        scanf("%d",&birthyear);
        getchar();
        
        age=2019-birthyear;
        printf("%s Your age is %d",name,age);
        
        }
        
7.	Input two numbers, swap the values and display the output. ( Before swap and after swap)
        
        #include<stdio.h>
        
        int main()
        {
            int n1,n2,temp;
            
            printf("Input The first number to swap:");
            scanf("%d",&n1);
            
            printf("Input The second number to swap:");
            scanf("%d",&n2);

            printf("Before Swapped First Number=%d\n Second Number=%d",n1,n2);
            
            temp=n1;
            n1=n2;
            n2=temp;
            
            printf("After Swapped First Number=%d\n Second Number=%d\n",n1,n2);
        }
        
8.	Execute the following code and analyze the output.
        
        printf("The color: %s\n", "blue");   
     Output: <br/>
     The color: blue
     
        printf("First number: %d\n", 12345);
      Output: <br/>
      First number: 12345
      
        printf("Second number: %04d\n", 25);
        
