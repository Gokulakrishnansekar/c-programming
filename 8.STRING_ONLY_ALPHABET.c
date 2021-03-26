#include<stdio.h>
void main(){
  int i,len=0;
  char str[30],res[30];
  printf("enter the string\t");
  scanf("%s",str);
  printf("your name is \t%s\n", str);
  i=0;
  while(str[i]!='\0')
  {
    if((str[i]>='a' && str[i]<='z') ||  (str[i]>='A' && str[i]<='Z'))
    {
       // printf("this is the condition statement");
        res[len]=str[i];
        len++;
    }
    i++;
  }
  res[len]='\0';
 // printf("----%d",len);
printf("%s",res);
}
