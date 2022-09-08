#include <stdio.h>

int search(int array[], int size, int target) { /* target = k*/
    for (int i = 0; i<size; i++) {
        if(array[i] == target)
         return i + 1;
     
    }
    return -1;
}

int main (){
    int array[10] = {10,20,30,40,50,60,70,80,100};
    int target = 90;
    int size = sizeof(array)/sizeof(array[0]);
    /*printf("Enter the elemnts-");
    for (int i = 0; i< size; i++) {
        scanf("%d",&array[i]);
    }
    printf("Enter the target element-");
    scanf("%d",&target);

    for (int i = 0; i< size; i++) {
        printf("%d",&array[i]);
    }
    printf("the target element is %d\n",target);*/
    int result = search(array, size, target);
    if (result == -1)
        printf("Element not found. ");
    
    else 
        printf("Element found at index - %d", result);

    return 0;
}