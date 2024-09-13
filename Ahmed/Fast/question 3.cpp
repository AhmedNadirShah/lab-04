#include<iostream>
int main()
{int amount,amount_saved,discounted_amount;
printf("Enter total cost of the items\n");
scanf("%d",&amount);
if(amount<1500)
{amount_saved=amount*0.07;
discounted_amount=amount*0.93;
}
else if(amount>1500)
{if(amount<3000)
amount_saved=amount*0.12;
discounted_amount=amount*0.88;
}
else if(amount>3000)
{if(amount<5000)
amount_saved=amount*0.22;
discounted_amount=amount*0.78;
}
else
{amount_saved=amount*0.30;
discounted_amount=amount*0.70;
}
printf("you saved %d\n",amount_saved);
printf("your new amount is %d\n",discounted_amount);
return 0;
}
