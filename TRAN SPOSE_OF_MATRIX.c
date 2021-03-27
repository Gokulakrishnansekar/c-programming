#include<stdio.h>
void main()
{
    int i,j,n,m;
    int mat[100][100];
    printf("enter the row and column");
    scanf("%d",&n);
    scanf("%d",&m);
    printf("enter the element\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&mat[i][j]);
            // printf("\t");
        }
        printf("\n");
        }
     for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t",mat[i][j]);
        }
         printf("\n");
     }
     printf("after transpose\n");
     for(j=0;j<m;j++){
        for(i=0;i<n;i++){
            printf("%d\t",mat[i][j]);
        }
         printf("\n");
     }
}
