#include<stdio.h>

int main() {
    int n, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements are: ");

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                int flag = 0;

                for(int k = 0; k < i; k++) {
                    if(arr[k] == arr[i]) {
                        flag = 1;
                        break;
                    }
                }

                if(flag == 0) {
                    printf("%d ", arr[i]);
                    found = 1;
                }
            }
        }
    }

    if(found == 0) {
        printf("No duplicates found");
    }

    return 0;
}