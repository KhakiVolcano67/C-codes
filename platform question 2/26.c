//74. Search a 2D Matrix
//https://leetcode.com/problems/search-a-2d-matrix/submissions/2199904988/
bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int rows = matrixSize;
    int cols = matrixColSize[0];

    int left = 0;
    int right = rows * cols - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        int row = mid / cols;
        int col = mid % cols;

        if (matrix[row][col] == target) {
            return true;
        }
        else if (matrix[row][col] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return false;
}
