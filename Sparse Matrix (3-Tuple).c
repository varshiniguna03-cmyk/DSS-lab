#include <stdio.h>

int main() {
    int a[10][10], sparse[100][3];
    int i, j, m, n, k = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter matrix:\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d", &a[i][j]);

    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            if(a[i][j] != 0)
                k++;

    sparse[0][0] = m;
    sparse[0][1] = n;
    sparse[0][2] = k;

    int index = 1;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            if(a[i][j] != 0) {
                sparse[index][0] = i;
                sparse[index][1] = j;
                sparse[index][2] = a[i][j];
                index++;
            }

    printf("Sparse Matrix:\n");
    for(i=0;i<=k;i++)
        printf("%d %d %d\n", sparse[i][0], sparse[i][1], sparse[i][2]);

    return 0;
}
