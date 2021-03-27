#include<stdio.h>
void main(){
int flag=0;
char sen[100];
printf("enter the sentence:\t\n");
//gets(sen);
scanf("%[^\n]s",sen);
int i=0;
while(sen[i]!='\0')
{
    if((sen[i]=='t'||sen[i]=='T')&&(sen[i+1]=='h'||sen[i+1]=='H')&&(sen[i+2]=='e'||sen[i+2]=='E'))
    {
        flag++;
    }
    i++;
}
printf("the frequency of word \' the \' is :%d",flag);

}
