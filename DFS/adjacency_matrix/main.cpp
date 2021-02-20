#include <iostream>
using namespace std;
int main()
{
    int e,v,i,s,d,j;
    cout<<"\n Enter number of vertex : ";
    cin>>v;
    int ver[v];
    cout<<"\n Enter number of edges : ";
    cin>>e;
    int edge[e];
    int am[v][v];
    for(i=0;i<v;i++)
    for(j=0;j<v;j++)
        am[i][j]=0;
    cout<<"\n Vertex = { ";
    for(i=1;i<=e;i++)
    cout<<i<<",";
    cout<<"\b }";
    cout<<"\n\n Enter "<<e<<" edges : \n\n";
    for(i=0;i<e;i++)
    {
        cout<<"\n EDGE "<<i+1<<"\n";
        cout<<"\n Enter source vertex : ";
        cin>>s;
        cout<<"\n Enter destination vertex : ";
        cin>>d;
        if(s<=e&&s>=1&&d<=e&&s>=1)
        {
        am[s-1][d-1]=1;
        am[d-1][s-1]=1;
        }
        else
        {
            cout<<"\n Invalid Vertex ! Enter again...";
            i--;
        }
    }

    cout<<"\n The adjacency Matrix is : \n\n\n";
    for(i=-1;i<v;i++)
    {for(j=-1;j<v;j++)
    {
        if(i==-1)
        {
            if(j==-1)
                cout<<"    ";
            else
                cout<<j+1<<" ";
        }
        else if(j==-1)
        {
            cout<<i+1<<" ";
        }
        else
            cout<<" "<<am[i][j];
    }
        cout<<"\n\n ";
    }
    return 0;
}
