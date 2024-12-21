/*Write a C program which can input some students’ marks and display which grades are
achieved by most of the students (Grades are A (>=90), B (>=80), C (>=70), and D (>=60))*/

#include<stdio.h>
int main()
{
    int x[1000],n,i,j,k,a=0,b=0,c=0,d=0;
    printf("Enter students number: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter marks: ");
        scanf("%d",&x[i]);
    }
    for(j=0; j<n; j++)
    {
        if(x[j]>=90 && x[j]<=100)
        {
            a++;
        }
        if(x[j]>=80 && x[j]<=89)
        {
            b++;
        }
        if(x[j]>=70 && x[j]<=79)
        {
            c++;
        }
        if(x[j]>=60 && x[j]<=69)
        {
            d++;
        }
    }
    if(a>b && a>c && a>d)
    {
        printf("A grade is achieved by most of the students and it is %d students ",a);
    }
    else if(b>a && b>c && b>d)
    {
        printf("B grade is achieved by most of the students and it is %d students ",b);
    }
    else if(c>b && c>a && c>d)
    {
        printf("C grade is achieved by most of the students and it is %d students ",c);
    }
    else if(d>b && d>c && d>a)
    {
        printf("D grade is achieved by most of the students and it is %d students ",d);
    }



    return 0;
}
