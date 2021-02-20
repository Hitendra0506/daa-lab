#include <bits/stdc++.h>
using namespace std;

class graph
{
    int vertices;
    int edges;
    list<int> *adjacency_list;
public :
    graph(int a,int b)
    {
        vertices=a;
        edges=b;
        adjacency_list=new list<int>[a];
    }
    void add_edge()
    {
        int s,d;
        cout<<"\n Enter the source vertex : ";
        cin>>s;
        cout<<"\n Enter the destination vertex : ";
        cin>>d;
        adjacency_list[s].push_back(d);
    }
    void dfs(int a,int checked[])
    {
        cout<<" "<<a<<" ";
        checked[a]=1;
        list<int>::iterator i;
        for(i=adjacency_list[a].begin();i!=adjacency_list[a].end();i++)
          if(checked[*i]==0)
                dfs(*i,checked);
     }
    void initialize_dfs(int start)
    {
            int *checked= new int[vertices];
            for(int i=0;i<vertices;i++)
                checked[i]=0;
            dfs(start,checked);
    }
};

int main()
{
    int v,e,i,s;

    cout<<"\n Enter the number of vertexes : ";
    cin>>v;
    cout<<"\n Enter the number of edges : ";
    cin>>e;
    cout<<"\n Enter the "<<e<<" edges : \n\n";

    graph g(v,e);
    for(i=0;i<e;i++)
    g.add_edge();

    system("cls");
    cout<<"\n Enter the start node : ";
    cin>>s;
    cout<<"\n DFS Sequence :  ";
    g.initialize_dfs(s);
    cout<<"\n\n";
    return 0;
}
