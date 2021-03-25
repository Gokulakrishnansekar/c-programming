#include<stdio.h>

void main(){
    int a,b;
    void lcm();
printf("enter the two numbers for finding lcm\n");
scanf("%d %d",&a,&b);
if(a>b)
lcm(a,b);
else
lcm(b,a);
//a is grater


}
void lcm(int a,int b){


int max=a;

while(1){
    if(max%a==0 && max%b==0){
        printf("the lcm of two number is %d",max);
        break;
    }
    max++;
}

}
