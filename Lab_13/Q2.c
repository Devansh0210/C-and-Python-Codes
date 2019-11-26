include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * f1(int size) {
        char *str1;
        str1 = malloc(size);
        scanf("%s",str1);
        return str1;
}

char * f2(int size) {
        char str2[size];
        scanf("%s",str2);
        return str2;

}

int main() {
        int num, i;
        char *p, *q;
        printf("Word length? ");
        scanf("%d",&num);

        p=f1(num);
        puts(p);

        q=f2(num);
        puts(q);
        putchar('\n');
}
