//217. Contains Duplicate
//https://leetcode.com/problems/contains-duplicate/submissions/2199885313/
bool containsDuplicate(int* nums, int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] == nums[j]) {
                return true;
            }
        }
    }

    return false;
}
