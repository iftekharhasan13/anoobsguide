#include<stdio.h>
int main(){
    int n;
    printf("Enter your String size: ");
    scanf("%d",&n);
    char a[n];
    for (int i=0; i<=n; i++){
        scanf("%c",&a[i]);
    }
    printf("%s",a);
}
