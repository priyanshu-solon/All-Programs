#include<stdio.h>
    int add(int i,int j)
    {
        return i+j;
    }
    int sub(int i,int j)
    {
        return i-j;
    }
    int mul(int i,int j)
    {
        return i*j;
    }
    int div(int i,int j)
    {
        return i/j;
    }
    main()
    {
        int a,b;
     printf("Enter Two Numbers");
     scanf("%d%d",&a,&b);
     printf("\nADD:%d\n",add(a,b));
     printf("\nSUB:%d\n",sub(a,b));
     printf("\nMUL:%d\n",mul(a,b));
     printf("\nDIV:%d\n",div(a,b));
     getch();
    }
