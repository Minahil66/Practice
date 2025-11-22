// Last updated: 2025-11-22T09:20:52+05:00
// Last updated: 2025-11-21T00:12:54+05:00
// Last updated: 2025-11-21T00:09:34+05:00
// Last updated: 2025-11-21T00:08:58+05:00
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