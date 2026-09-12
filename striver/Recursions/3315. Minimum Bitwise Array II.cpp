class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 2)
             nums[i] = -1;
            else{
                int count=1;
                int temp = nums[i];
                while(temp % 2 != 0){
                   count*=2;
                   temp = temp >> 1;
                }
                count  = count /2;
                nums[i] =  nums[i]-count;
            }
        }
        return nums;
    }
};



logic : for 11 answer is 9
1011 -> 11 - start from right -> 2 power (position of 1th bit after 0)
   here 0 tarvatha 2 power 1 = 2 
   ans = 11 - 2 = 09
0111 -> for 7  ans is 3
  first 0 tarvatha 1 is in 2nd position (2^2 = 4)
  ans = 7 -4 =3






3315. Construct the Minimum Bitwise Array II

Example 1:

Input: nums = [2,3,5,7]

Output: [-1,1,4,3]

Explanation:

For i = 0, as there is no value for ans[0] that satisfies ans[0] OR (ans[0] + 1) = 2, so ans[0] = -1.
For i = 1, the smallest ans[1] that satisfies ans[1] OR (ans[1] + 1) = 3 is 1, because 1 OR (1 + 1) = 3.
For i = 2, the smallest ans[2] that satisfies ans[2] OR (ans[2] + 1) = 5 is 4, because 4 OR (4 + 1) = 5.
For i = 3, the smallest ans[3] that satisfies ans[3] OR (ans[3] + 1) = 7 is 3, because 3 OR (3 + 1) = 7.

