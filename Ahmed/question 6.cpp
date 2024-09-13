#include<stdio.h>
int main()
{
int a,b, significance;
printf("Enter any two numbers\n");
scanf("%d %d", &a, &b);
if(a>b)
{significance= a-b;
if(significance>100)
{printf("First number is significantly larger");
}
else
printf("The first number is large");
}
else if(b>a)
{if(a<0)
{printf("First number is negative and lesser");
}
else
printf("First number is less");
}
else if(a=b)
{printf("Both numbers are equal");
}
else
{printf("Invalid input");
}
return 0;
}
