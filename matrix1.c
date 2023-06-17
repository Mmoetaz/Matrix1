/*Building a matrix with 0 under the diagonal and 1 above the diagonal*/

#include<stdio.h>

int main(){
    char m[10][10];
    int i,j,n=4;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            m[i][j]='0';
            if(i<j){
                m[i][j]='1';
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%c|",m[i][j]);
        }
        printf("\n");
    }


    return 0;
}
