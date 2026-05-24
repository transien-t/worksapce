#include <iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<map>
#include<string>
#include<stack>
using namespace std;
int main() 
{
    vector<int> nums={1,2,3,4,0};
    int n=nums.size(),i,index=0,ans;
    for(i=0;i<n;i++)
    {
        if(nums[i]==0)
        {
            index=i;
        }
    }
    if(nums[(index+1)%n]==n-1&&(index!=0||(index+1)%n!=n-1))
    {
        for(i=0;i<n-1;i++)
        {
            if(nums[(index+i+1)%n]!=nums[(index+i+2)%n]+1)
            {
                ans=-1;
                break;
            }
        }
        if(i==n-1)
        {
            ans=1+min(n-1-index,index+1);
        }
    }
    else if(nums[(index-1+n)%n]==n-1)
    {
        for(i=0;i<n-1;i++)
        {
            if(nums[(index-i-2+n)%n]+1!=nums[(index-i+n-1)%n])
            {
                ans=-1;
                break;
            }
        }
        if(i==n-1)
        {
            ans=min(index,n-index+2);
        }
    }
    else
    {
        ans=-1;
    }
    cout<<ans;
    return ans;
}
