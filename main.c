#include <stdio.h>
#include <stdlib.h>
float array_calculations(float*arr, int elements){
    float sum = 0;
    for(int x=0; x<elements; x++){
        sum=sum+arr[x];
    }

    float average = sum/elements;

    printf("Sum of the elements is %.2f \n",sum);
    printf("Average of the elements is %.2f",average);

}

int main() {

    int elements,i;
    float *array; /* Array declaration */
    printf("Number of elements for the array:");
    scanf("%d",&elements);
    array = (float *) malloc(sizeof(int) * elements); /* Dynamically allocate memory according to the size */

    for(i=0;i<elements;i++){
        printf("Insert value %d :",i+1);
        scanf("%f",&array[i]);
    }

    array_calculations(array,elements);
    return 0;
}
