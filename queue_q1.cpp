#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
int main()
{
    vector<int> students={1,1,1,0,0,1},sandwiches={1,0,0,0,1,1};
    stack<int> st;
    queue<int> q;
    int i,n=students.size(),cnt=0,res=0;
    for(int i=0;i<n;i++)    {
        q.push(students[i]);
        st.push(sandwiches[n-1-i]);
    }
    while(!st.empty())
    {
        if(cnt==n)
        {
            res=n;
            break;
        }
        if(q.front()==st.top())
        {
            q.pop();
            st.pop();
            n--;
            cnt=0;
        }
        else
        {
            q.push(q.front());
            q.pop();
            cnt++;
        }
    }
    return res;
}