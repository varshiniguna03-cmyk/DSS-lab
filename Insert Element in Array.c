#include <stdio.h>

int main() {
    int arr[50], n, pos, val, i;

    printf("Enter size: ");
    scanf("%d", &n);

    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);

    printf("Enter position and value: ");
    scanf("%d %d", &pos, &val);

    for(i=n;i>=pos;i--)
        arr[i] = arr[i-1];

    arr[pos-1] = val;
    n++;

    for(i=0;i<n;i++)
        printf("%d ", arr[i]);

    return 0;
}
