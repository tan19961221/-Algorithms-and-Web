#include<stdio.h>
void quicksort(int a[],int left,int right)
{
    int i,j,temp;
    i=left;
    j=right;
    temp=a[left];
    if(left>right)
        return;
    while(i!=j)
    {
        while(a[j]>=temp&&j>i)
            j--;
        if(j>i)
            a[i++]=a[j];
        while(a[i]<=temp&&j>i)
            i++;
        if(j>i)
            a[j--]=a[i];
         
    }
    a[i]=temp;
    quicksort(a,left,i-1);
    quicksort(a,i+1,right);
}
int main()
{
    int a[]={53,12,98,63,18,72,80,46,32,21};
    int i;
    quicksort(a,0,9);
    for(i=0;i<10;i++)
        printf("%4d",a[i]);
}
