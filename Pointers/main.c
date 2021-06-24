#include <stdio.h>
#include <stdlib.h>

void update(int a,int b, int *sum, int *sub) {

    *sum = a + b;
    *sub = abs(a - b);
}

int main() {
    int a, b, c, d;

    scanf("%d %d", &a, &b);
    update(a, b, &c, &d);
    printf("%d\n%d", c, d);

    return 0;
}
