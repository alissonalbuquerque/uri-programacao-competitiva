
#include <stdio.h>

int main() {

    int n, x;
    int in = 0, out = 0;

    scanf("%d", &n);

    while(n--) {

        scanf("%d", &x);

        (x >= 10 && x <= 20)? in++ : out++;

    }

    printf("%d in\n%d out\n", in, out);

    return 0;
}

/*
    ----------------------------
    Entrada:
        4
        14
        123
        10
        -25
    Saida:
        2 in
        2 out
    ----------------------------
*/