#include<stdio.h>
void main()
{

    int arr[10][10];
    int i,j,k,n,total=0;
    printf("enter the num of row and column\n");
    scanf("%d",&n);
    printf("enter the values\n");
    for(i=1;i<=n;i++){
         for(j=1;j<=n;j++){
            scanf("%d",&arr[i][j]);
         }
    }
   /*for(j=1;j<=n;j++){
    total+=arr[1][j]+arr[n][j];
   }*/
       for(i=1;i<=n;i++){
            int k=i;
         for(j=n;j>=1;j--){
                if(i==1 || i==n){
                      total+=arr[i][j];
                }
                if(i>1 && i<n){
                       j-=k-1;
                   total+=arr[i][j];
                    break;
                    }

         }
       }
   printf("total is %d",total);
}
