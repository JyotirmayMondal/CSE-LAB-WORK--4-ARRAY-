/*Write a C program which can input some students’ marks and display average, variance and
standard deviation.*/

#include <stdio.h>
#include<math.h>
int main()
{

    int i,j,l;
    float x[100],m,n,s,c,avg,sd,b=0,d=0,g=0;

    printf("Enter numbers of std: ");
    scanf("%d",&l);
    s=0;
    for(i=0; i<l; i++)
    {
        scanf("%f",&x[i]);
        s+=x[i];
    }
    avg=s/(float)l;
    for(j=0; j<l; j++)
    {
        b=x[j]-avg;
        m=b*b;
        d=d+m;

    }
    g=d/(float)l;
    sd=sqrt(g);
    printf("Variance are: %.2f\n",g); 
    printf("Average: %.2f\n",avg);
    printf("SD: %.2f\n",sd);    
    return 0;
}
