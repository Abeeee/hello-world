#include <stdio.h>

int main()
{
    int i=0,num1,num2,min=0,count=0;
    printf("Input the numbers bro!!\n");
    scanf("%d %d",&num1,&num2);
    if(num1 >= num2)
    {
        min = num2;
    }
    else
    {
        min = num1;
    }
    for(i=1;i<=min;i++)
    {
        if((num1%i == 0) && (num2%i == 0))
        {
            count = count+1;
        }
    }
    printf("%d\n",count);
}
