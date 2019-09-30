////
//// Created by hrith on 13-08-2019.
////
//
//#include <bits/stdc++.h>
//using namespace std;
//
//void print(int **adj,int n,int sv,bool *vis)
//{
//    cout<<sv<<" ";
//    vis[sv]=true;
//    for(int i=0;i<n;i++)
//    {
//        if(adj[sv][i]==1)
//        {
//            if(vis[i])
//            {
//                continue;
//            }
//            else
//            {
//                print(adj,n,i,vis);
//            }
//        }
//    }
//}
//int main()
//{
//    int n,e;
//    cin>>n>>e;
//    int **adj=new int*[n];
//    for(int i=0;i<n;i++)
//    {
//        adj[i]=new int[n];
//    }
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            adj[i][j]=0;
//        }
//    }
//    for(int i=0;i<e;i++)
//    {
//        int x,y;
//        cin>>x>>y;
//        adj[x][y]=1;
//        adj[y][x]=1;
//    }
//    bool *vis=new bool[n];
//    for(int i=0;i<n;i++)
//    {
//        vis[i]=false;
//    }
//    print(adj,n,3,vis);
//}