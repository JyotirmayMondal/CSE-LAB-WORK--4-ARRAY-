/* Write a C program which can input the last seven days temperature into an array and display
the average temperature. */

#include <stdio.h>

int main(){
int x[100],n,i,j,s;
float avg;

printf("Input the days number: ");
scanf("%d",&n);

for(i=0;i<n;i++){
    printf("Temperature: ");
    scanf("%d",&x[i]);
}
s=0;
for(j=0;j<n;j++){
    s+=x[j];
}
avg=s/n;
printf("The average temp is %f",avg);

return 0;
}
