#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    int x;
    scanf("%d",&x);
    if(x<3){
        printf("0");
    }
    else{
        int result=floor(x/2);
        printf("%d",result);
        }
    }
}o
