#include <stdio.h>
int main() {
    char a[] = "Hello, world";
    int i = 0;
    while(a[i] != '\0') {
        printf("%c\n", a[i]);
        i++;
    }
    while(i >= 0) {
        printf("%c\n", a[i]);
        i--;
    }

    return 0;
}