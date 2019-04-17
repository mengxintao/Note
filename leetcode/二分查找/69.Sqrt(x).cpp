/*
Leetcode : 69. Sqrt(x) (Easy)

Input: 4
Output: 2

Input: 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we want to return an integer, the decimal part will be truncated.
*/


public int mySqrt(int x) {
    if(x <= 1) return x;
    int l = 1, h = x;
    while(l <= h){
        int mid = l + (h - l) / 2;
        int sqrt = x / mid;
        if(sqrt == mid) return mid;
        else if(sqrt < mid) h = mid - 1;
        else l = mid + 1;
    }
    return h;
}
