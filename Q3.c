#include <stdio.h>

int main(){
    int matrix[3][3];
    int row,col,pixel_val;
    for (row=0; row < 3; row++){
        for (col=0; col < 3; col++){
            printf("Enter the pixel value :");
            scanf("%d", (*(ptr + row) + col));
        }
    }
    int (*ptr)[3] = matrix;
    for (row=0; row < 3; row++){
        for (col=0; col < 3; col++){
            *(*(ptr + row) + col) = *(*(ptr + row) + col) * 2;
        }
    }
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            printf("%d ", *(*(ptr + row) + col));
        }
        printf("\n");
    }        
    return 0;
}
