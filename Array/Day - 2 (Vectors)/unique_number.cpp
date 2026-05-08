#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>nums = {1,2,3,4,5,2};
    int ans = 0;
    for( int val : nums){
        ans ^= val;
    }
    cout << ans;

    return 0;
}