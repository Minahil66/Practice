// Last updated: 2025-11-21T00:08:53+05:00
// Last updated: 2025-11-21T00:08:19+05:00
int minimumOperations(int* nums, int numsSize) {
    int operations = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 3 != 0) {
            operations++;
        }
    }
    return operations;
}