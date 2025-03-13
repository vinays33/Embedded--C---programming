// 6. sum of an array elements
#include<stdio.h>
int main()
{
int arr[6]={10,20,30,40,50,60};
int sum=0;
for(int i=0;i<6;i++)
{
    sum=sum+arr[i];
}
printf(" Sum of array elements: %d\t",sum);
return 0;
}