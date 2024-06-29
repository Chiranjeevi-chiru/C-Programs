#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int k,i=1,count=0;
        scanf("%d",&k);
        while(1){
        if(i%3!=0 && i%10!=3){
            count++;
            if(count==k){
                printf("%d \n",i);
                break;
                }
            }
        i++;
        }
    }
return 0;
}
