#include<stdio.h>
void main(){
char sen[30];
printf("enter the string:\t");
scanf("%[^\n]s",sen);
printf("String or words after split by space are:\n");
int i=0;
while(sen[i]!='\0'){
    if(sen[i]==' ')
        printf("\n");
        else
            printf("%c",sen[i]);
    i++;
}




}
