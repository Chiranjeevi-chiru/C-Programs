#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--) {
        int a,b;
        scanf("%d %d",&a,&b);
        int r=a%b;
        if (r==0) {
            printf("0\n");
        } else{
            int m=b-r;
            printf("%d\n",m);
        }
    }
    return 0;
}
