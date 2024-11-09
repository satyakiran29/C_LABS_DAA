//find max element in array

#include <stdio.h>

int main()
{
    int max;
    int a[5] = {1, 89, 34, 29, 69}; 
    max = a[0];
    for(int i = 1; i < 5; i++)       
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    printf("Maximum number: %d\n", max);  
    return 0;
}
