# Hey Coders ! Looking for Some practices ?
## Here you go ! :smiley: 


# What is the difference between gets() and scanf() functions

Both scanf() and gets() functions are used to take user inputs. scanf() is capable of getting inputs untill it encounters a space. But gets() can take a complete sentence with spaces.

    #include<stdio.h>

    int main()
    {
    char str[50];   // char array of size 50
    printf("Enter your complete name:\n\n\n");

    gets(str); // gets a complete sentence with spaces ex:- Lihini Nisansala
    printf("\n\nWelcome to my GitHub Account %s\n\n\n", str);
    return 0;
    }

# Functions in C Language
#### Let's take a look at how to pass an array as a parameter into a function 
array_sum is a function to take arrays as parameters and prints out a new array containing the sum of parralel parameters.

    int array_sum(int*arr_1,int*arr_2,int size) {
    for(int y=0;y<size;y++){
        printf("%d ",arr_1[y]);
    }
    printf("\n");
    for(int y=0;y<size;y++){
        printf("%d ",arr_2[y]);
    }
    printf("\n");
    int*element_sum;
    element_sum = (int *) malloc(sizeof(int) * size);
    int x;
    for(x=0; x<size; x++){
        element_sum [x] = arr_1[x]+ arr_2[x];
        printf("%d ", element_sum[x]);
    }

    return 0;
    }

We have used the **malloc** function to dynamically allocate memory for the array as the user input. **malloc** is one of the memory management function C language. There are many more to go. You can take a look at them here. --> [Dynamic Memory Allocation In C- GeeksForGeeks.com](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)
    
    int size,i;
    printf("Input the size of arrays:");
    scanf_s("%d",&size);
    

    int * array_1;
    array_1 = (int *) malloc(sizeof(int) * size); 

    int * array_2;
    array_2 = (int *) malloc(sizeof(int) * size);

    for(i=0;i<size;i++){

        printf("Insert value %d for array_1:",i+1);
        scanf_s("%d",&array_1[i]);

    }
    printf("\n");
    for(i=0;i<size;i++){
        printf("Insert value %d for array_2:",i+1);
        scanf_s("%d",&array_2[i]);
    }

    array_sum(array_1,array_2,size);

    return 0;


    
