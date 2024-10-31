#include<iostream>
int main()
{int price,units;
printf("Enter your electricity units\n");
scanf("%d",&units);
if(price<=30)
{price=0.60*units;
}
if(price<=80)
{price=0.85*units;
}
if(price<=100)
{price=1.30*units;
}
if(price<=210)
{price=1.60*units;
}
price=price+(price*0.15);
printf("you bill is %d\n",price);
return 0;
}
