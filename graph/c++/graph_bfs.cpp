//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//typedef pair <int,int> pint;
//typedef map <int,int> mapii;
//typedef map <char,int> mapci;
//typedef map <string,int> mapsi;
//typedef vector <int> vi;
//typedef vector <ll> vll;
//typedef vector <char> vc;
//typedef set <int> si;
//typedef set <ll> sll;
//typedef set <char> sc;
//#define pb(i) push_back(i) ;
//#define ms(arr) memset(arr,true,sizeof(arr))
//#define deb(x) cout<< #x <<" "<< x<<endl;
//#define loop(i,n) for(int i=0;i<n;i++)
//#define Loop(i,k,n) for(ll i=k;i<=n;i++)
//#define tc int t;cin>>t; while(t--)
//
//vector <bool> vis;
//void edge(vector <int> g[],int a,int b)
//{
//    g[a].push_back(b);
//    g[b].push_back(a);
//}
//void bfs(vector <int> g[],int s,int V)
//{
//    vector <bool> vis(V,false);
//    queue <int> q;
//    q.push(s);
//    while(!q.empty())
//    {
//        int f=q.front();
//        q.pop();
//        if(!vis[f]) {
//            cout << f << " ";
//            vis[f] = true;
//        }
//        for(auto j:g[f])
//        {
//            if(!vis[j])
//            {
//                q.push(j);
//            }
//        }
//    }
//}
//int main()
//{
//    int n,e;
//    cin>>n>>e;
//    vector <int> adj[n];
//    int a,b;
//    for(int i=0;i<e;i++)
//    {
//        cin>>a>>b;
//        edge(adj,a,b);
//    }
//    bfs(adj,2,n);
//    return 0;
//}