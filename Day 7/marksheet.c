#include <stdio.h>
int main() {
    int r_no[5], marks[5][3], total[5], i, j;
    for(i = 0; i < 5; i++) {
        printf("Enter roll number: ");
        scanf("%d", &r_no[i]);
        total[i] = 0;  
        printf("Enter marks for 3 subjects: ");
        for(j = 0; j < 3; j++) {
            scanf("%d", &marks[i][j]);
            total[i] += marks[i][j];
        }
    }
    printf("\nRoll Number | Marks 1 | Marks 2 | Marks 3 | Total\n");
    for(i = 0; i < 5; i++) {
        printf("%d\t\t", r_no[i]);
        for(j = 0; j < 3; j++) {
            printf("%d\t", marks[i][j]);
        }
        printf("%d\n", total[i]); 
    }

    return 0;
}