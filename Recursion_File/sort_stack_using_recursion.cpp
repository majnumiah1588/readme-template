#include<bits/stdc++.h>
using  namespace  std;

void inserts(stack<int>&v,int temp)
{
    if(v.empty()||v.top()<=temp)
    {
        v.push(temp);
        return;
    }
    int val=v.top();
    v.pop();
    inserts(v,temp);
    v.push(val);
}

void sorts(stack<int>&v)
{
    if(v.size()==1)
    {
        return;
    }
    int temp=v.top();
    v.pop();
    sorts(v);
    inserts(v,temp);
}

void print(stack<int>v)
{
    if(v.empty())return;
    int x=v.top();
    v.pop();
    print(v);
    cout<<x<<" ";
}
int main()
{
    int n;
    cin>>n;
    stack<int>v;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push(x);
    }
    sorts(v);
    print(v);
    cout<<endl;
    return 0;
}