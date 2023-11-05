//First non-repeating element
#include <stdio.h>
int main() 
{
    int n,i,j;
    printf("Enter n: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements: ", n);
    for (int i = 0; i < n; i++) 
        scanf("%d", &a[i]);
	int b=-1;
    for (i=0;i<n;i++) 
	{
        int count = 0;
        for (j=0;j<n;j++) 
            if (a[i] == a[j])
                count++;
        if (count==1 && (b==-1 || i<b))
            b=i;
	}
	if (b!=-1) 
        printf("The first non-repeating element is: %d", a[b]);
    else 
        printf("No non-repeating element found.");
	return 0;
}
