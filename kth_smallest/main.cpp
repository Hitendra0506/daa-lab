#include <iostream>
using namespace std;

int divide(int l, int u,int arr[])
{
    int p = arr[u],i =(l - 1),t;
    for (int j = l; j <= u- 1; j++)
    {
        if (arr[j] <=  p)
        {
            i++;
            t=arr[i];arr[i]=arr[j];arr[j]=t;
        }
    }
    t=arr[i+1];arr[i+1]=arr[u];arr[u]=t;
    return (i + 1);
}

int find_k(int k,int l, int u,int arr[])
{
        if(k<=u-l+1)
        { int pi = divide(l, u,arr),x;
        if (pi+1==k)
        x=arr[pi];
        if(pi+1>k)
        x=find_k(k,l, pi - 1,arr);
        else
        x=find_k(k, pi + 1, u,arr);
        return x;
        }
}

void print_arr(int n,int arr[])
{
    int i;
    for (i=0; i < n; i++)
    cout<<"  "<<arr[i];
    cout<<endl;
}

int main()
{
    int i,j,n,k;
    cout<<"\n Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"\n---------------------------------------\n";
    cout<<"\n Enter "<<n<<" elements : ";
    for(i=0;i<n;i++)
    cin>>arr[i];
    cout<<"\n The array is : ";
    print_arr(n,arr);
    cout<<"\n Enter k : ";
    cin>>k;
    cout<<"\n The "<<k<<" smallest element is : "<<find_k(k+1,0,n-1,arr);
    cout<<"\n---------------------------------------\n";
    return 0;
}
