#include <stdio.h>
#include <string.h>



int main(){
    int a=4;
    char b='a';
    int *ap=&a;
    char *bp=&b;
    printf("%d\n",a);
    printf("%d\n",&a);
    printf("%d\n",ap);
    printf("%d\n",&ap);
    printf("%d\n",*ap);
    printf("%d\n",*bp);
    return 0;
}