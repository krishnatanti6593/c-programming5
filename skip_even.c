#include<stdio.h>
int main(){
    int i,sum=0;
    printf("enter");
    scanf("%d",&i);
    printf("odd number from 1 to %d:\n",i);
        for(int j=1;j<=i;j++){
            if(j%2!=0){
        printf("%d\n",j);}
        }
    return 0;
}