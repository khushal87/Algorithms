//#include <bits/stdc++.h>
//using namespace std;
//
//void addEdge(vector<int> adj[], int u,int v)
//{
//    adj[u].push_back(v);
//    //can also be done for undirected graph
//    // by addding this adj[v].push_back(u);
//}
//
//void DFS(vector <int> adj[],int s,int V)
//{
//    vector <bool> vis(V,false);
//    stack <int> stack;
//    stack.push(s);
//    while(!stack.empty())
//    {
//        s=stack.top();
//        stack.pop();
//        if(!vis[s])
//        {
//            cout<<s<<" ";
//            vis[s]=true;
//        }
//        for(auto j:adj[s])
//        {
//            if(!vis[j])
//            {
//                stack.push(j);
//            }
//        }
//    }
//}
//
//int main() {
//    int n,k;
//    cin>>n>>k;
//    vector<int> adj[n];
//    for(int i=0;i<k;i++)
//    {
//        int a,b;
//        cin>>a>>b;
//        addEdge(adj,a,b);
//    }
//    DFS(adj,2,n);
//    return 0;
//}