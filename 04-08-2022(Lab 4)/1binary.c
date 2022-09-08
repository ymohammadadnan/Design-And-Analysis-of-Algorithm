#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int count = 0;

int main()
{
	int arr[50],i,n,x,flag=0,first,last,mid,start,end;
    	printf("Enter size of array:");
    	scanf("%d",&n);
    	printf("\nEnter array element(ascending order)\n");
    	for(i=0;i<n;++i)
		scanf("%d",&arr[i]);
	printf("\nEnter the element to search:");
	scanf("%d",&x);
	start=clock();
	first=0;
	count++;
    	last=n-1;
		count++;
    while(first<=last){
    	count++;
		mid=(first+last)/2;
              count++;
        if(x==arr[mid]){
			count++;
            	flag=1;
         break;
  	    }
  	    else {
			count++;
			if(x>arr[mid])
                first=mid+1;
      	    else
                last=mid-1;
			count++;
		}
      	    
    }
    	if(flag==1)
        	printf("\nElement found at position %d",mid+1);
    	else
		printf("\nElement not found");
	end=clock();
	printf("\nTime taken is : %d",(end-start));
	printf("\nElement searched in : %d steps",count);
    	return 0;
}