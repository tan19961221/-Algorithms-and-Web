# include <stdio.h>
int main(void)
{
    int i, j;
    int MinIndex;
    int buf;
    int a[] = {6, 8, 3, 4, 4, 2, 6, 4, 1, 8, 8, 5};
    int n = sizeof(a) / sizeof(a[0]);
    for (i=0; i<n-1; ++i)
    	    {
        MinIndex = i;
        for (j=i+1; j<n; ++j)
        {
            if (a[MinIndex] > a[j])
            {
                MinIndex = j;  
            }
        }
        if (MinIndex != i)  
        {
            buf = a[MinIndex];
            a[MinIndex] = a[i];
            a[i] = buf;
        }
    }
    printf("最终排序结果为:\n");
    for (i=0; i<12; ++i)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}