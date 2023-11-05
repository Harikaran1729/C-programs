//Number of distinct absolute values in an array
#include<stdio.h>
#include<math.h>
int main() 
{
    int n,i;
    printf("Enter n: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the sorted array of integers: ");
    for(i=0;i<n;i++) 
        scanf("%d",&a[i]);
    int count=0;
    int p=a[0]+1;
    for(i=0;i<n;i++) 
	{
        if(abs(a[i])!= p) 
            count++;
        p=abs(a[i]);
    }
    printf("Number of distinct absolute values in the array: %d", count);
    return 0;
}
