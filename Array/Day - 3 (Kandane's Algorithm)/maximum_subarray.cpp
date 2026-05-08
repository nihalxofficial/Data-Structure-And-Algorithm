#include <iostream>
using namespace std;


// BruteForce Approach
int main() {
    int n=5;
    int arr[5]={1,2,3,4,5};
    int maxsum = 0;
    for(int st=0;st<n;st++){
        int cursum = 0;
        for(int end=st; end<n; end++){
            cursum += arr[end];
            maxsum = max(maxsum, cursum);
        }

    }
        cout<<maxsum;

    return 0;
}