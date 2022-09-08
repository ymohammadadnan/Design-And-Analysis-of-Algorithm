#include<stdio.h>
#include <string.h>
#include <math.h>
int count1 = 0;
int count2 = 0;
int count3 = 0;
void resetCounter(){
    count1 = 0;
    count2 = 0;
    count3 = 0;
}
int euclid(int a, int b){
    count1++;
    if (a == 0)
    return b;
    return euclid(b%a, a);
}
int cid(int a,int b,int t){
    count2++;
    if( a%t == 0 && b%t == 0)
    return t;
    else 
    return cid(a,b,t-1);
}
int main(){
    int arr[12];
    for(int i=0;i<12;i++)
    scanf("%d",&arr[i]);
    char result[12];
    printf("S.No\t Input\tEuclid\tCIC\tGCD\tFastest\n");
    printf("-----------------------------------------------------------------\n") ;
    for(int i=0,j=0;i<12;i+=2){
        int gcd1 = euclid(arr[i],arr[i+1]);
        int gcd2 = cid(arr[i],arr[i+1], arr[i]>arr[i+1] ? arr[i+1] : arr[i]);
        if (count1 < count2)
        strcpy(result,"Euclid");
        else
        strcpy(result,"Cic");
        printf("%d\t(%d,\t%d)\t%d\t%d\t%d\t%s\n",++j,arr[i],arr[i+1],count1,count2,gcd1,result);
        resetCounter();
        
    } 
    return 0;
}