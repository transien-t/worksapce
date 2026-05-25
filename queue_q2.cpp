#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> tickets={5,1,1,1};
    int k=0;
    int i,n=tickets.size(),res=0;
    for(i=0;i<n;i++)
    {
        if(i<=k)
        {
            res+=min(tickets[i],tickets[k]);
        }
        else
        {
            res+=min(tickets[i],tickets[k]-1);
        }
    }
    return res;
}