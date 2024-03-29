#include <stdlib.h>

int **alloc_grid(int width, int height) {
    // Check if width or height is 0 or negative
    if (width <= 0 || height <= 0) {
        return NULL;
    }

    // Allocate memory for the array of pointers to rows
    int **grid = (int **)malloc(height * sizeof(int *));
    if (grid == NULL) {
        return NULL;  // Memory allocation failed
    }

    // Allocate memory for each row and initialize elements to 0
    for (int i = 0; i < height; i++) {
        grid[i] = (int *)malloc(width * sizeof(int));
        if (grid[i] == NULL) {
            // Memory allocation failed, free previously allocated memory
            for (int j = 0; j < i; j++) {
                free(grid[j]);
            }
            free(grid);
            return NULL;
        }

        // Initialize elements to 0
        for (int j = 0; j < width; j++) {
            grid[i][j] = 0;
        }
    }

    return grid;
}
