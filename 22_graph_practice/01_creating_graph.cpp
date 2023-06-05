#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int graph[N][N];        // space complexity is n^2;
int32_t main()
{
    int n.m;            //n is no.of vertices,m is no.of edges
    cin>>n,m;
    for(int i=0;i<m;++i)
    {
        int v1,v2;
        cin>>v1>>v2;
        graph[v1][v2]=1;
        graph[v2][v1]=1;

    }
    return 0;
}