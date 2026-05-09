#include <iostream>
#include<vector>
using namespace std;

int main() {
    int target = 13;
    vector<int>arr= {2, 7,11,15};
    vector<int>ans;
    
    int n=arr.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]+arr[j] > target){
            i++;
        }else if(arr[i]+arr[j] < target){
            j--;
        }else{
            ans.push_back(i);
            ans.push_back(j);
        }
    }
    cout << ans[0] << ", " << ans[1];
    return 0;
}