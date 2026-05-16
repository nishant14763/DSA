#include <iostream>
#include<vector>
using namespace std;


int binarySearch(vector<int>& nums, int target) {
    int n = nums.size();
    cout << "Vector size: " << n << "\n";
    int left = 0, right = n-1;

    while(left <= right) {
    int mid = left + (right-left)/2 ;

        if(nums[mid] == target)
            return mid;
        else if (target > nums[mid] )
            left = mid++;
        else 
            right = mid--;
    }  
    return 0;
}


int main() {
    cout << "Hello Nishant\n";

    vector<int> nums = {2,4,6,7,8,9,10,23,56};
    for(auto x: nums)
        cout << x << " ";
    cout << "\n";
    cout << binarySearch(nums, 10);

    return 0;
}