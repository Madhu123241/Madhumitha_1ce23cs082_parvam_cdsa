#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int *dynamic=(int*)malloc(n*size(int));
    for(int i=n;i<(n+extra);i++){
        scanf("%d",&dynamic[i]);
    }
    printf("after reallocation :");
    for(int i=0;i<(n+extra);i++){
        printf("%d",dynamic[i]);
    }
}
