//Isomorphism
#include<stdio.h>
#include<string.h>
int main() 
{
    char a[100], b[100];
    printf("Enter string1: ");
    gets(a);
    printf("Enter string2: ");
    gets(b);
    int n = strlen(a), flag = 1, i, j;

    if (strlen(a) == strlen(b)) {
        for (i = 0; i < n; i++) {
            if (a[i] == b[i]) {
                for (j = i + 1; j < n; j++) {
                    if ((a[j] == a[i] && b[j] == b[i]) || (a[j] != a[i] && b[j] != b[i]))
                        flag = 1;
                    else {
                        flag = 0;
                        break;
                    }}} 
			else 
			{
                flag = 0;
                break;
            }}} 
	else
        flag = 0;

    if (flag == 1)
        printf("Given string is not an isomorph");
    else
        printf("Given string is an isomorph");
    
    return 0;
}

