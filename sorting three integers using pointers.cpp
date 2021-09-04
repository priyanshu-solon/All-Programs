#include<iostream>
#include<conio.h>

using namespace std;
int *sortAsc (int *p, int size);
   int main()
    {
     int arr[]={1,3,2};
     int *p=sortAsc(arr,3);
     //output the sorted array
     int i;
     for(i=0;i<3;i++)
       cout<<*(p+i)<<endl;

     getch();
     return 0;

    }int *sortAsc(int *p, int n){
    int i,j;
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(*(p+j)<*(p+i))
              {
                int temp=*(p+j);
                *(p+j)=*(p+i);
                *(p+i)=temp;
                }
   return p;
}
