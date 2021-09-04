#include<stdio.h>

int main()
{
    
    int arr[5]={5,3,2,5,2};
    for(int i=1;i<5;i++)
    {
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }

    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
}