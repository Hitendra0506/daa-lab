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
    void dispList()
    {
        cout << "\n Adjacency List : \n";
        list<int>::iterator i;
        for (int j=0;j<vertices;j++)
        {
            cout<<"\n "<<j<<" -->";
            for (i = adjacency_list[j].begin();i != adjacency_list[j].end();i++)
                 cout << " " << *i << " ";
            cout << "\n";
        }
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
    g.dispList();
    cout<<"\n\n";
    return 0;
}
