#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int r = 0;
        int l = nums.size() - 1;

        while(r <= l ){
            int mid = r + (l - r)/2;

            if(target == nums[mid]){
                return mid;
            }else if(target > nums[mid]){
                 r = mid + 1;
            }else{
                 l = mid - 1;
            }
        }

        return -1;

      /*  int size = nums.size();

        for(int i = 0; i < size; ++i){
            if(nums[i] == target){
                return i;
            }
        }

        return -1;*/
    }
};

int main(){
    return 0;
}