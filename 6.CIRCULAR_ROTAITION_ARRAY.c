#include<stdio.h>
void main(){

int arr[100];
int n,i,r;
printf("enter the total numbers in array\n");
scanf("%d",&n);
printf("enter the values\n");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

printf("enter the no  of rotation\n");

scanf("%d",&r);


for(int j=1;j<=r;j++){

     i=0;
    int temp=arr[n-1];
    for(i=n-1;i>=0;i--)
    arr[i]=arr[i-1];
arr[0]=temp;

printf("AFTER %d ROTATION\n",j);
for(i=0;i<n;i++){

    printf("%d",arr[i]);
}
printf("\n");
}
}
