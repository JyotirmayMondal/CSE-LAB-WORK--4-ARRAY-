/*Write a C program which can input some numbers into an array and display the highest value
among the odd values and of the even values separately.*/

#include <stdio.h>

int main()
{
    int x[100],y[100],z[100],n,i,j,k,c=0,f=0,m,m2;

    printf("Enter the range: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Input: ");
        scanf("%d",&x[i]);
    }
    m=x[0];
    m2=x[0];
    for(j=0; j<n; j++)
    {
        if(x[j]%2==0)
        {
            y[c]=x[j];      //even number

            if(y[c]>m)
            {
                m=y[c];
            }
            c++;
        }

        else if(x[j]%2!=0)
        {
            z[f]=x[j];     //odd number
            if(z[f]>m2)
            {
                m2=z[f];
            }
            f++;
        }
    }

    for(j=0; j<f; j++)
    {
        printf("ODD are: %d\n",z[j]);
    }
    for(j=0; j<c; j++)
    {
        printf("EVEN are: %d\n",y[j]);
    }

    printf("\n %d is highest odd\n",m2);
    printf(" %d is highest even",m);



    return 0;
}
