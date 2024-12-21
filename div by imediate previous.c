/*Write a C program which can input some numbers and display how many of them are
divisible by immediate previous element of the array.*/

#include <stdio.h>

int main(){
int x[100],n,i,j,c=0;
 printf("Enter the range: ");
    scanf("%d",&n);
for(i=0;i<n;i++){
    printf("Numbers: ");
    scanf("%d",&x[i]);
}
for(j=1;j<n;j++){
    if(x[j]%x[j-1]==0){
        c++;
    }

}
printf("%d numbers are divisible by the immediate previous",c);


return 0;
}
