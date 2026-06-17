#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 5, 6, 7, 8};

    int n1 = 5, n2 = 5;
    int unionArr[20];
    int size = 0, i, j, found;

    for(i = 0; i < n1; i++) {
        unionArr[size++] = arr1[i];
    }

    for(i = 0; i < n2; i++) {
        found = 0;

        for(j = 0; j < size; j++) {
            if(arr2[i] == unionArr[j]) {
                found = 1;
                break;
            }
        }

        if(!found) {
            unionArr[size++] = arr2[i];
        }
    }

    printf("Union of Arrays: ");
    for(i = 0; i < size; i++) {
        printf("%d ", unionArr[i]);
    }

    return 0;
}