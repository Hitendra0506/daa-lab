#include <iostream>
using namespace std;
int cnt=0;
int divide(int l, int u,int arr[])
{
    cnt++;
    int p = arr[u],i =(l - 1),t;
    for (int j = l; j <= u- 1; j++)
    {
        if (arr[j] <= p)
        {
            i++;
            t=arr[i];arr[i]=arr[j];arr[j]=t;
        }
    }
    t=arr[i+1];arr[i+1]=arr[u];arr[u]=t;
    return (i + 1);
}

void quick_sort(int l, int u,int arr[])
{
    if (l < u)
    {
        int pi = divide(l, u,arr);
        quick_sort(l, pi - 1,arr);
        quick_sort( pi + 1, u,arr);
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
    int i,j,n;
    cout<<"\n Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"\n---------------------------------------\n";
    cout<<"\n USING QUICK SORT \n";
    cout<<"\n Enter "<<n<<" elements : ";
    for(i=0;i<n;i++)
    cin>>arr[i];
    cout<<"\n The unsorted array is : ";
    print_arr(n,arr);
    cout<<"\n The sorted array is   : ";
    quick_sort(0,n-1,arr);
    print_arr(n,arr);
    cout<<"\n---------------------------------------\n";
    cout<<"\n The number of comparisons are : "<<cnt;
    return 0;
}
