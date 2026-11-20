//283. Move Zeroes
//https://leetcode.com/problems/move-zeroes/

void moveZeroes(int* nums, int numsSize) {
    int j = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[j] = nums[i];
            j++;
        }
    }

    while (j < numsSize) {
        nums[j] = 0;
        j++;
    }
}
