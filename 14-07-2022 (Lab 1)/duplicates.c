#include<stdio.h>
int main()
{
    int size,i, j,count=0,maxCount=0,maxElement,occurrence;            //Array Size Declaration
    printf("Enter the number of elements :  \n");
    scanf("%d", &size);
    int arr[size];
    for(i = 0; i < size; i++)
    {
        printf("Enter elements %d : ",i);
        scanf("%d",&arr[i]);
    }
    for(i = 0; i< size; i++)
    {
        count = 1;
        for(j = i+1; j < size; j++)
        {
            if(arr[j] == arr[i])
            {
                count++;
                if(count > maxCount)
                {
                    maxElement = arr[j];
                    maxCount = count;
                }
            }
        }
    }
    printf("Duplicates are : %d\n",maxElement); 
    printf("Maximum Frequency Element : %d, Occurrence= %d times",maxElement,maxCount);
    return 0;
}
