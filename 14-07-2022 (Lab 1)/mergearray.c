#include<stdio.h>
int main()
{
    int a[50],b[50],i,j,k,n1,n2,c[100];
    printf("Enter the lenght of both array\n");
    scanf("%d%d",&n1,&n2);
    printf("Enter first sorted array\n");
    for(i=0;i<n1;i++)
     scanf("%d",&a[i]);
    printf("Enter second sorted array\n");
     for(i=0;i<n2;i++)
     scanf("%d",&b[i]);
     
    
    i=j=k=0;
    while(i<n1 && j<n2)
    {
        if(a[i]>b[j])
        {
            c[k]=b[j];
            j++;
        }
        else
        {
            if(a[i]==b[j])
            {
                c[k]=b[j];
                j++;
                i++;
            }
            else
            {
                c[k]=a[i];
                i++;
            }
        }
        k++;
    }
    
    while(i<n1)
    {
        c[k]=a[i];
        k++;
        i++;
    }
    
    while(j<n2)
    {
        c[k]=b[j];
        j++;
        k++;
    }
    
    printf("The Array after merging is:  ");
    for(i=0;i<k;i++)
      printf("%d ",c[i]);
    return 0;
}