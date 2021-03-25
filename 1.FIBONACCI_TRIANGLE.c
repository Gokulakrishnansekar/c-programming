#include<stdio.h>
void main(){

int n1,n2,n3,i,j,n;

printf("enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
n1=1;
n2=1;
    for(j=0;j<=i;j++){
        printf("%d\t",n1);

        n3=n1+n2;
         n1=n2;
         n2=n3;



    }
    printf("\n");
}


}
