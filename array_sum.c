#include <stdio.h>
#include <stdlib.h>

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

int main() {

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
}
