#include <stdio.h>

char * test(size_t  m, size_t n, char in[m][n], char * result) {
    int mt = m + 1;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i * mt + j] = in[i][j];
        }
    }
}

int main() {
    char input[2][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'}
    };

    int row = sizeof(input) / sizeof(input[0]);
    int column = sizeof(input[0]) / sizeof(input[0][0]);

    char result[row * column];

    test(sizeof(input) / sizeof(input[0]), sizeof(input[0]) / sizeof(input[0][0]), input, result);

    for (int i = 0 ; i < row * column; i++) {
        printf("%d\n", result[i]);
    }

    return 0;
}
