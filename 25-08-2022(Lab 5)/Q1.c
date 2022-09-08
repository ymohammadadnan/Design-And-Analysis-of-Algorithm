#include <stdio.h>
#include <time.h>
int DAC_Max(int a[], int index, int l);
int DAC_Min(int a[], int index, int l);
int DAC_Max(int a[], int index, int l)
{
	int max;
	if(l - 1 == 0)
	{
	return a[index];
	}
	if (index >= l - 2) {
		if (a[index] > a[index + 1])
			return a[index];
		else
			return a[index + 1];
	}
	max = DAC_Max(a, index + 1, l);

	if (a[index] > max)
		return a[index];
	else
		return max;
}
int DAC_Min(int a[], int index, int l)
{
	int min;
	if(l - 1 == 0)
	{
	return a[index];
	}
	if (index >= l - 2) {
		if (a[index] < a[index + 1])
			return a[index];
		else
			return a[index + 1];
	}
	min = DAC_Min(a, index + 1, l);

	if (a[index] < min)
		return a[index];
	else return min;
    
	}
int main()
{
	int min, max, N;
    double time=0.0;
    clock_t begin=clock();
	int a[7] = { 76, 40, 53, 56, 11, 9,  83 };
	max = DAC_Max(a, 0, 7);
	min = DAC_Min(a, 0, 7);
    clock_t end=clock();
    time +=(double)(end-begin)/CLOCKS_PER_SEC;
	printf("The minimum number in a given array is : %d\n", min);
	printf("The maximum number in a given array is : %d\n", max);
    printf("Time taken to sort the array is %f seconds", time);
	return 0;
}
