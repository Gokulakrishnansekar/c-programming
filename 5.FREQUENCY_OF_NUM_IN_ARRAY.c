#include<stdio.h>
void main(){
int inp[100];
int out[100];
int i,j,n;
int flag=0;
printf("enter the total numbers in array\n");
scanf("%d",&n);
printf("enter the values\n");
for(i=0;i<n;i++){
    scanf("%d",&inp[i]);
}
for(i=0;i<n;i++){
         flag=1;
        for(j=i-1;j>=0;j--){
            if(inp[i]==inp[j])
                flag++;
        }

}
printf("%d",flag);
//i=0;
//while(i!=n-1){
 //   if()
}
