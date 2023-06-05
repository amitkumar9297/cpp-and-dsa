/* these algorithm only work on sorted row and sorted columns
FOR EG.
 1  4  7  11
 2  5  8  12
 3  6  9  16
 10 13 14 17

*/

#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n,m;
    cout<<"enter rows and columns";
    cin>>n>>m;
    int mat[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }

    int target;
    cout<<"enter which element are you want to find";  
    cin>>target;

    int r=0,c=m-1;

    bool found=false;

    while(r<n and c>=0)
    {
        if(mat[r][c]==target)
        {
            found=true;
        }

        if(mat[r][c]>target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }

    if(found)
    {
        cout<<"element found";
    }
    else
    {
        cout<<"element does not exist";
    }


    return 0;
}