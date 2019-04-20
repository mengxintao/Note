/*
Given a sorted array consisting of only integers where every element appears twice except for one element which appears once. Find this single element that appears only once.

Example 1:

Input: [1,1,2,3,3,4,4,8,8]
Output: 2
 

Example 2:

Input: [3,3,7,7,10,11,11]
Output: 10
 

Note: Your solution should run in O(log n) time and O(1) space.
*/

public int singleNonDuplicate(int[] nums) {
    int l = 0, h = nums.length - 1;
    while(l < h) {
        int m = l + (h - l) / 2;
        if(m % 2 == 1) m--; // 保证 l/h/m 都在偶数位，使得查找区间大小一直都是奇数
        if(nums[m] == nums[m + 1]) l = m + 2;
        else h = m;
    }
    return nums[l];
}
