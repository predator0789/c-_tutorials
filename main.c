#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the rows(m):\n");
    scanf("%d",&m);
    printf("Enter the column(n):\n");
    scanf("%d",&n);
    int arr[m][n];
    printf("Input your array:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int arrT[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arrT[i][j]=arr[j][i];
        }
    }
    printf("It's Transpose is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf(" %d ",arrT[i][j]);
        }
        printf("\n");
    }
    return 0;
}
