#include <stdio.h>
    void info(int *array1, int *array2, int *array3, int lenght1arr, int lenght2arr)
    {
        int pointer2 = 0, pointer1 = 0;
        for (int pointer3 = 0; pointer3 < lenght2arr + lenght1arr; pointer3++)
        {
            if (pointer1 > lenght1arr - 1)
            {
                array3[pointer3] = array2[pointer2];
                pointer2++;
            }
            else if (pointer2 > lenght2arr - 1)
            {
                array3[pointer3] = array1[pointer1];
                pointer1++;
            }
            else if (array1[pointer1] >= array2[pointer2])
            {
                array3[pointer3] = array1[pointer1];
                pointer1++;
            }
            else
            {
                array3[pointer3] = array2[pointer2];
                pointer2++;
            }
        }
    }
    int main()
    {
        int array1[100];
        int array2[100];
        int array3[200];
        int lenght1arr, lenght2arr;
        int i;
        printf("lenght 1 array: ");
        scanf("%d", &lenght1arr);
        printf("1 array: ");
        for (i = 0; i < lenght1arr; i++)
        {
            scanf("%d", &array1[i]);
        }
        printf("lenght 2 array: ");
        scanf("%d", &lenght2arr);
        printf("2 array: ");
        for (i = 0; i < lenght2arr; i++)
        {
            scanf("%d", &array2[i]);
        }
         if(lenght1arr < 0)
        {
            lenght1arr = 0;
        }
        if(lenght2arr < 0)
        {
            lenght2arr = 0;
        }
        info(array1, array2, array3, lenght1arr, lenght2arr);
        printf("3 array: ");
        for (int f = 0; f < lenght2arr + lenght1arr; f++)
        {
            printf("%d ", array3[f]);
        }
        return 0;
    }
