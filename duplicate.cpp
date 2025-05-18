#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) 
            return 0;

        int i = 1;
        for(int j = 1; j < nums.size(); j++) {
            if(nums[j] != nums[i - 1]) {
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};

int main() {
    Solution sol;
    vector<int> nums;
    int n, temp;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter sorted elements: ";
    for(int i = 0; i < n; i++) {
        cin >> temp;
        nums.push_back(temp);
    }

    int newLength = sol.removeDuplicates(nums);

    cout << "Array after removing duplicates: ";
    for(int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "New length: " << newLength << endl;

    return 0;
}
