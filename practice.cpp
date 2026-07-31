#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr = {2, 2, 1, 1, 1, 2, 2};
    int n=arr.size();
    int candidate = 0;
    int count= 0;
    for(int el: arr){
        if(count ==0){
            candidate = el;
        }
        if(el==candidate){
            count++;
        }else{
            count--;
        }
    }
    cout<<candidate;
    return 0;
}