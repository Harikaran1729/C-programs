//Insert an element into array
#include <stdio.h>
int main() 
{
    int n,i;
    printf("Enter n: ");
    scanf("%d",&n);
    int a[n+1];
    printf("Enter the elements of the sorted list: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int val;
    printf("Enter the value to be inserted: ");
    scanf("%d",&val);
    int p=n;
    for(i=0;i<n;i++) 
        if(val<a[i]) 
		{
            p=i;
            break;
        }
    for(i=n;i>p;i--)
        a[i]=a[i-1];
    a[p]=val;
    n++;
    printf("Array after inserting: ");
    for (i=0;i<n;i++) 
        printf("%d ",a[i]);
    return 0;
}
