#include<stdio.h>
int main()
{int score;
printf("Enter your test score\n");
scanf("%d",&score);
if(score>=90)
{printf("A grade");
}
else if(score>=80)
{printf("B grade");
}
else if(score>=70)
{printf("C grade");
}
else if(score>=60)
{printf("D grade");
}
else
printf("F grade");
}
