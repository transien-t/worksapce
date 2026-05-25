#include<iostream>
#include <queue>
#include <algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> stones={2,7,4,1,8,1};
    priority_queue<int> pq(stones.begin(),stones.end());
    while(pq.size()>1)
    {
        int a=pq.top();
        pq.pop();
        int b=pq.top();
        pq.pop();
        if(a!=b)
        {
            pq.push(abs(a-b));
        }
    }
    cout<<(pq.empty()?0:pq.top());
}