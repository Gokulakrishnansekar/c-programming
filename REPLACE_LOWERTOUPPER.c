#include<stdio.h>
void main(){
char sen[100];
int i;
printf("enter the string\n");
gets(sen);

i=0;
while(sen[i]!='\0')
{
    if(sen[i]>=97&&sen[i]<=122){
      //  printf("this is a lower case\n");
        sen[i]-=32;
        printf("%c",sen[i]);}
    else if(sen[i]>=65 &&sen[i]<=90)
        {
       // printf("this is a upper case\n");
        sen[i]+=32;
        printf("%c",sen[i]);}
        else if(sen[i]==' ')
           printf(" ");
    i++;
}

}
