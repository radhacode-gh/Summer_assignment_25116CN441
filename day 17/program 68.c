#include <stdio.h>

int main() {
    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[] = {30, 40, 50, 60, 70};

    int n1 = 5, n2 = 5;
    int i, j;

    printf("Common Elements: ");

    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }

    return 0;
}