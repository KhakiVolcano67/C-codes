//Left rotate an array
//https://www.hackerearth.com/problem/algorithm/array-rotation-c21f93eb/
#include <stdio.h>

int main() {
    int n, d;
    scanf("%d %d", &n, &d);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    d = d % n;

    for (int i = 0; i < n; i++) {
        printf("%d", arr[(i + d) % n]);

        if (i != n - 1) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
