//1572. Matrix Diagonal Sum
//https://leetcode.com/problems/matrix-diagonal-sum/submissions/2199901851/
int diagonalSum(int** mat, int matSize, int* matColSize) {
    int sum = 0;

    for (int i = 0; i < matSize; i++) {
        sum += mat[i][i];                         // Primary diagonal
        sum += mat[i][matSize - 1 - i];           // Secondary diagonal
    }

    // Remove the middle element if matrix size is odd
    if (matSize % 2 == 1) {
        sum -= mat[matSize / 2][matSize / 2];
    }

    return sum;
}
