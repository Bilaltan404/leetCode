#include <iostream>
#include <vector>

using namespace std;

class NumArray
{
public:
    NumArray(vector<int> &nums)
    {
        nums_ = nums;
    }

    int sumRange(int left, int right)
    {
        int sum = 0;

        for (int i = left; left <= right; ++left)
        {
            sum += nums_[left];
        }
        return sum;
    }

private:
    vector<int> nums_;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
int main()
{
    vector<int> nums = {-2,0,3,-5,2,-1};   // 
    NumArray* obj = new NumArray(nums);
    int param_1 = obj->sumRange(1,4);
    return 0;
}