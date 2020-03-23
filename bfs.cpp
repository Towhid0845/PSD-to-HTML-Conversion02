#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int>g[100];
queue<int>Q;
int color[10],p[10],d[10];

int main()
{
    int i,j,u,v,n,e,s,A;
    cout<<"Enter the number of node: "<<endl;
    cin>>n;
    cout<<"Enter the number of edge: "<<endl;
    cin>>e;
    cout<<"enter the pair: ";
    for(i=0;i<e;i++)
    {
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
///List print
    for(i=0;i<n;i++)
    {
        cout<<i<<"->";
        for(j=0;j<g[i].size();j++)
        {
            v=g[i][j];
            cout<<v<<" ";
        }
        cout<<endl;
    }

    for(i=0;i<n;i++)
    {
        color[i]=0;
        p[i]=-1;
        d[i]=9999;
    }
    cout<<"Enter the source: ";
    cin>>s;
    color[s]=1;
    d[s]=0;
    p[s]=-1;
    Q.push(s);

    while(!Q.empty())
    {
        A=Q.front();
        Q.pop();    for(i=0;i<n;i++)
    {
        cout<<i<<"->";
        for(j=0;j<g[i].size();j++)
        {
            v=g[i][j];
            cout<<v<<" ";
        }
    }
        color[A]=2;
    }
    cout<<"Color:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<color[i]<<endl;
    }

    cout<<"Distance:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<d[i]<<endl;
    }

    cout<<"Parent:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<p[i]<<endl;
    }
}
