#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int st=0, end=matrix.size()-1, mid;
        while(st<=end){
            mid=st+ (end-st)/2;
            if(target >= matrix[mid][0] && target <= matrix[mid][matrix[mid].size()-1]){
                int cst=0, cend=matrix[mid].size()-1, cmid;
                while(cst<=cend){
                    cmid=cst+ (cend-cst)/2;
                    if(matrix[mid][cmid]==target){
                        return true;
                    }
                    else if(target < matrix[mid][cmid]){
                        cend=cmid-1;
                    }else{
                        cst=cmid+1;
                    }
                }
                return false;

            }
            else if(target < matrix[mid][0]){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }
        return false;
        
    }
};