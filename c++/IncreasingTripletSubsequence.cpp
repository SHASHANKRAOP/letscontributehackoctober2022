#include<iostream>
#include<vector>
#include<algorithm>
#include <string>
#include<cstring>
#include<map>
#include<set>
#include<unordered_set>
#include<unordered_map>
#include<cmath>
#include<conio.h>
#include<queue>
#include <utility>
typedef long long ll;
using namespace std;
int main()
{
	getch();
}
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        vector<int> dpL(n+1);
        vector<int> dpR(n+1);
        dpL[0] = INT32_MAX;
        dpR[n] = INT32_MIN;
        for(int i = 1;i<=n;i++)
        {
            dpL[i] = min(dpL[i-1],nums[i-1]);
        }
        for(int i = n-1;i>=0;i--)
        {
            dpR[i] = max(dpR[i+1],nums[i]);
        }
        for(int i = 0;i<n;i++)
        {
            cout<<dpL[i+1]<<" "<<nums[i]<<" "<<dpR[i]<<endl;
            if(nums[i]>dpL[i]&&nums[i]<dpR[i])
                return true;
        }
        return false;
    }
};