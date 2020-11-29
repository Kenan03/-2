#include <stdio.h>

    int main() {
    int a[100];
    int b[100];
    int c[200];
    int n, m;
    int i,j,k;
    scanf("%d", & n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", & a[i]);
    }

    scanf("%d", & m);
    for (i = 0; i < m; i++) 
    {
        scanf("%d", & b[i]);
    }

    i = 0;
    j = 0;
    for (k = 0; k<m+n; k++) 
    {
        if (i > n) 
        {
            c[k] = b[j];
            j++;
        } 
        else if (j > m) 
        {
            c[k] = a[i];
            i++;
        } 
        else if (a[i] >= b[j]) 
        {
            c[k] = a[i];
            i++;
        } 
        else 
        {
            c[k] = b[j];
            j++;
        }
    }

    for (i = 0; i < m+n; i++) 
    {
        printf("%d ", c[i]);
    }
return 0;
}
