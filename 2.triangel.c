#include<stdio.h>
void main(){
    int n,i,k,p,q,u,l,j;

    printf("enter the number");
    scanf("%d",&n);
    printf("%d",n);
      k=p=n-1;
        printf("\n");
for(i=0;i<2*n-1;i++){
    u=i;

    l=1;
    for(j=0;j<2*n-1;j++){



    if(k<=j && p>=j){
          if(j<n-1){

        printf("%d \t",l);
    l++;

    }

    else if(j>=n-1){

         printf("%d \t",l);
    l--;

    }

    }
    else
    printf("\t");

}

    printf("\n");
    if(i>=n-1){
        k++;
        p--;

    }
    else{
     k--;
    p++;
    }
}

}
