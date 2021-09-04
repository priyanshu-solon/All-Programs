#include<stdio.h>
int main()
{
int i,x;
char str[100];

printf("\nplease choose the string:\t");
get(str);

printf("\nplease choose the following option:\n");
printf("1=Encrypt.\n");
printf("2=Decrypt.\n");
scanf(x);

{



case 1;
for(i=0;(i<100 &&str[i]!='\0');i++)
str[i]=str[i]+3;
printf("\nEncrypted String:%s\n",str);
break;

case 2;
for(i=0;(i<100 &&str[i]!='\0');i++)
str[i]=str[i]-3;
printf("\nDecrypted String:%s\n",str);
break;

default:
printf("\nERROR\n");
}
return 0;
 getch();

}
