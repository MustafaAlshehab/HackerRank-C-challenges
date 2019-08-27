#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int input;
    scanf("%d", &input);
    int grid = (2 * input) - 1;

    for(int rows = 0; rows < grid; rows++) {
        int result = input;
        for (int cols = 0; cols < grid; cols++) {
            printf("%d ", result);
            if ( rows > cols) {
                result = result - 1;
            }
            if (rows + cols >= grid - 1) {
                result = result + 1;
            }
        }
        printf("\n");
    }   
    return 0;
}