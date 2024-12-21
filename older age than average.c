/*Write a C program which can input some persons’ age into an array and display how many of
them are older than the average age of those people. */


#include <stdio.h>

int main(){
int x[100],n,i,j,s,k,c=0;
float avg;

printf("Input the numbers of age: ");
scanf("%d",&n);

for(i=0;i<n;i++){
    printf("Age: ");
    scanf("%d",&x[i]);
}
s=0;
for(j=0;j<n;j++){
    s+=x[j];
}
avg=s/(float)n;
for(k=0;k<n;k++){
    if(x[k]>avg){
        c++;
    }
}
printf("The average age is %0.2f \n",avg);
printf("The number of people older than average age is %d",c);

return 0;
}
