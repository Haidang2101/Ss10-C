#include <stdio.h>

int main() {
    int a[6]={1,5,8,3,4,7};
    int minIndex;
    for(int i = 0;i<6-1;i++){
        minIndex=i;
        for(int j=i+1;j<6;j++){
            if(a[minIndex]>a[j]){
                minIndex=j;
            }
        }
        int temp = a[minIndex];
        a[minIndex]=a[i];
        a[i]=temp;
    }
    for(int i =0 ;i<6;i++){
        printf("%d",a[i]);
    }
    return 0;
}
