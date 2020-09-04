//////最长上升子序列
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//class Solution {
//public:
//    int lengthOfLIS(vector<int>& nums) 
//    {
//        int len = 1, n = (int)nums.size();
//        if (n == 0) return 0;
//        vector<int> d(n + 1, 0);
//        d[len] = nums[0];
//        for (int i = 1; i < n; ++i) {
//            if (nums[i] > d[len]) d[++len] = nums[i];
//            else 
//            {
//                int l = 1, r = len, pos = 0; // 如果找不到说明所有的数都比 nums[i] 大，此时要更新 d[1]，所以这里将 pos 设为 0
//                while (l <= r) {
//                    int mid = (l + r) >> 1;
//                    if (d[mid] < nums[i]) {
//                        pos = mid;
//                        l = mid + 1;
//                    }
//                    else r = mid - 1;
//                }
//                d[pos + 1] = nums[i];
//            }
//        }
//        return len;
//        /*int lengthOfLIS(vector<int>& nums)
//        {
//            vector<int>tails(nums.size());
//            int res = 0;
//            for (int num : nums) {
//                int i = 0, j = res;
//                while (i < j) {
//                    int m = (i + j) / 2;
//                    if (tails[m] < num) i = m + 1;
//                    else j = m;
//                }
//                tails[i] = num;
//                if (res == j) res++;
//            }
//            return res;
//        }*/
//};
//
//int main()
// {
//    vector<int> nums{ 12,8,4,12,15,2,6 };
//    Solution a;
//    cout << a.lengthOfLIS(nums);
//	return 0;
//}