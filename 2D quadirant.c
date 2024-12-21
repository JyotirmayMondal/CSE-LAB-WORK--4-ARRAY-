/*Write a C program which can some 2D points into an array (The x values in one array and y
values in another array). Display how many points are in each quadrant.*/


#include <stdio.h>

int main()
{
    int x[100],y[100],n,i,j,a=0,b=0,c=0,d=0;
    printf("Enter numbers of quaderants : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter X: ");
        scanf("%d",&x[i]);
        printf("Enter Y: ");
        scanf("%d",&y[i]);
    }
    for(j=0; j<n; j++)
    {
        if(x[j]>=1 && y[j]>=1)
        {
            a++; //1st
        }
        if(x[j]>=1 && y[j]<1)
        {
            b++;//4th
        }
        if(x[j]<1 && y[j]<1)
        {
            c++; //3rd
        }
        if(x[j]<1 && y[j]>=1)
        {
            d++; //2nd
        }
    }
    printf("%d ",a);
    printf("%d ",d);
    printf("%d ",c);
    printf("%d ",b);
    return 0;
}

