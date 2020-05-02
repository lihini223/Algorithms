# Hey Coders ! Looking for Some practices ?
## Here you go ! :smiley: 
This Repository is created to upload tricky coding practices 

### Let's take a look at how to pass an array as a parameter into a function in C language

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
    
