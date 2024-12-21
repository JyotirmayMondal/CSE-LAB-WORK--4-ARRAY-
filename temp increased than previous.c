/*Write a C program which can input the last seven days temperature and display in how many
days the temperature is increased than that of immediate previous day.*/


#include <stdio.h>

int main()
{
    int x[100],i,k,c=0;


    for(i=0; i<7; i++)
    {
        printf("Temp: ");
        scanf("%d",&x[i]);
    }

    for(k=0; k<6; k++)
    {
        if(x[k]< x[k+1] )
        {
            c++;
        }
    }
    printf("The number of days temp increased is %d",c);

    return 0;
}

