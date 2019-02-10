#include<stdio.h>

int main()
{
    int size;

    printf("Enter the size of the array:\n");
    scanf("%d",&size);

    while(size<0 || size>100)
    {
        printf("Invalid size!\n");
        scanf("%d",&size);
    }

    int array[size];

    for(int i=0;i<size;i++)
    {
        printf("Please enter the %d. element of the array:\n",i+1);
        scanf("%d",&array[i]);
        if(array[i]<0 || array[i]>1000)
        {
            printf("Invalid element! Please enter a valid one:\n");
            scanf("%d",array[i]);
        }
    }

    for(int j=0;j<size;j++)
    {
        if(array[j]!=0)
        {
            if(array[j]%6==0)
            {
                if(array[j]%10==array[j]) {
                    printf("*\t");
                } else if(array[j]%100==array[j]) {
                    printf("**\t");
                } else {
                    printf("***\t");
                }
            } else {
                printf("%d\t",array[j]);
            }
        } else {
            printf("%d\t",array[j]);
        }
    }
}
