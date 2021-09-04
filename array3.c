#include<stdio.h>
int main()
{
    int array[]={1,1,2,2,3,4,4};
    int res=0;
    int i;
    for(i=0;i<7;i++)
    {
      res=res^array[i];
    }
    printf("%d",res);
}
