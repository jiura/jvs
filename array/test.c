#include <stdio.h>

#include "jvs_array.h"

int main() {
    JVS_ARR(int) nums = NULL;

    jvs_arrPushBack(nums, 10);
    jvs_arrPushBack(nums, 20);
    jvs_arrPushBack(nums, 30);
    jvs_arrPushBack(nums, 40);

    printf("First:\n");
    for (int i = 0; i < jvs_arrCount(nums); ++i)
        printf("%d\n", nums[i]);

    size_t i1 = 3, i2 = 0;

    printf("\nRemoving index %zu, value %d\n", i1, nums[i1]);
    jvs_arrRemove(nums, i1);
    printf("\nRemoving index %zu, value %d\n", i2, nums[i2]);
    jvs_arrRemove(nums, i2);

    printf("\nSecond:\n");
    for (int i = 0; i < jvs_arrCount(nums); ++i)
        printf("%d\n", nums[i]);

    jvs_arrEmpty(nums);

    printf("\nNow emptied, count is %zu and no values should appear below.\n", jvs_arrCount(nums));
    for (int i = 0; i < jvs_arrCount(nums); ++i)
        printf("%d\n", nums[i]);

    jvs_arrFree(nums);

    return 0;
}
