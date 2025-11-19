/******************
Name: Tawfek watted
ID: 211438973
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE. not even "==, &&, ||, !="

int main()
{
    //1
    printf("Ascii:\nPlease enter a character\n");
    char ch;
    scanf("%c", &ch);
    printf("Its numerical value is: %d\n",ch);
    int num,tem;
    num =ch;
    tem = num%2;
    printf("0 for even, 1 for odd: %d\n\n\n\n\n\n" ,tem);

    //2
    printf("2's complement to other representations: \nPlease enter a negative integer\n");
    int x,com;
    scanf("%d",&com);
    x = -com-1;
    unsigned int uns= (unsigned int)com;
    printf("1's complement: -%d\nunsigned: %u\n\n\n\n\n\n",x,uns);


    //3
    printf("Shifting right and left: \nPlease enter 3 integers\n");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    a = a >> b;
    a = a << c;
    printf("After shifting right and left: %d\n\n\n\n\n\n",a);


    //4
    printf("Even - Odd:\nPlease enter 3 integers\n");
    int d,e,f,sum;
    scanf("%d%d%d", &d,&e,&f);
    d = d%2;
    e = e%2;
    f = f%2;
    sum = d+e+f;
    sum= sum/2;
    printf("0 - most of them are even, 1 - most of them are odd: %d\n\n\n\n\n\n",sum);
    //5
    printf("Different Bases:\nPlease enter two numbers in octal and hexadecimal bases\n");
int oc,hx,lsbs,msbs;
scanf("%o%x",&oc,&hx);
lsbs = oc%2;
printf("LSBs: %d ",lsbs);
lsbs = hx%2;
printf("%d \n",lsbs);
msbs = (oc>>31)&1;
printf("MSBs: %d ",msbs);
msbs = (hx>>31)&1;
printf("%d\nBye!",msbs);

    return 0;
}
