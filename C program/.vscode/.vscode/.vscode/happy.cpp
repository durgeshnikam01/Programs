#include<bits/stdc++.h>
using namespace std;

long long maximumHappinessSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count=0;
        long long sum=0;
        
        for(int i=nums.size()-1;i>=0;i--){
            while(k>0){
                sum=sum+nums[i]-count;
                count++;
                 k--;
            }
           
        }
        return sum;
        
    }
int main(){
    vector<int>nums={1,2,3};
    cout<<maximumHappinessSum(nums,2);
}