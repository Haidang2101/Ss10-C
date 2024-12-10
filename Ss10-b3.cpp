#include <stdio.h>

int main() {
    int a[]={ 7, 6, 3, 5, 9, 11, 15, 48, 66, 22, 65};
    int length = sizeof(a)/sizeof(int);
    for(int i=1;i<length;i++){
        int key = a[i];
        int j = i-1;
        while(j>=0 &&a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    for(int i =0;i<length;i++){
        printf("%d",a[i]);
    }
    return 0;
}
