# Hey Coders ! Looking for Some practices ?
## Here you go ! :smiley: 
This Repository is created to upload C Programming practices. I'll be delivering content through six subtopics.
1. Basic Programs
2. Loops
3. Number Crunching
4. Arrays
5. Pointers
6. Recursion

# Let's start with basic Programs

### Printing HELLO WORLD! 
    #include <stdio.h>
    int main()
    {
        printf("Hello world!");
        return 0;
    }
printf() is a system defined function under <stdio.h> header. It is used to printout data on the screen.

# Functions in C Language
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


    
