#include<stdio.h>
void main(){
int  dec,j;
int val[200];
printf("enter the decimal no");
scanf("%d",&dec);
int i=0;
while(dec!=0){
        val[i]=dec%2;
        dec=dec/2;
   // printf("%d\n",val[i]);
        i++;


    }
printf("-------THE BINERY VALUE IS-----\n");
for(j=i-1;j>=0;j--)
{

    printf("%3d",val[j]);
}

}



