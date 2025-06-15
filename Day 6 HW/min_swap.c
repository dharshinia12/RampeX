#include <stdio.h>

int main() {
    int arr[100], n, i, j, visited[100] = {0}, swaps = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int temp[100][2];
    for(i = 0; i < n; i++) {
        temp[i][0] = arr[i]; 
        temp[i][1] = i;      
    }
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(temp[i][0] > temp[j][0]) {
                int t1 = temp[i][0];
                int t2 = temp[i][1];
                temp[i][0] = temp[j][0];
                temp[i][1] = temp[j][1];
                temp[j][0] = t1;
                temp[j][1] = t2;
            }
        }
    }
    for(i = 0; i < n; i++) {
        if(visited[i] || temp[i][1] == i)
            continue;
        int cycle_size = 0;
        int j = i;
        while(!visited[j]) {
            visited[j] = 1;
            j = temp[j][1];
            cycle_size++;
        }
        if(cycle_size > 1)
            swaps += (cycle_size - 1);
    }
    printf("Minimum swaps = %d\n", swaps);
    return 0;
}