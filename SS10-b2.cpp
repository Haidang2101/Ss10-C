#include <stdio.h>

int main() {
    int a[6]={4,7,12,8,3,345};

    for(int i =0;i<6;i++){
        for(int j=0;j<6-1;j++){
            int temp;
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    for(int i=0;i<6;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}

