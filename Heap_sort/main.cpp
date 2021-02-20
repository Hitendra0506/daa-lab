#include <iostream>

using namespace std;
void print_arr(int n,int arr[])
{
    int i;
    for (i=0; i < n; i++)
    cout<<"  "<<arr[i];
    cout<<endl;
}

void max_heapify(int n,int r,int arr[])
{
    int i,p=r,x;
    int lchild=2*p+1;
    int rchild=2*p+2;

    if(lchild<n)
      p=(arr[lchild]>arr[p]?lchild:p);
    if(rchild<n)
      p=(arr[rchild]>arr[p]?rchild:p);
    swap(arr[p],arr[r]);
    if(p!=r)
    max_heapify(n,p,arr);

}

int main()
{

    int i,j,n;
    cout<<"\n Enter the size of array : ";
    cin>>n;
    int arr[n];

    cout<<"\n----------------------------------------------------\n";
    cout<<"\n USING HEAP SORT \n";
    cout<<"\n Enter "<<n<<" elements : ";

    for(i=0;i<n;i++)
        cin>>arr[i];

    cout<<"\n The unsorted array is : ";
    print_arr(n,arr);
    cout<<"\n The sorted array is   : ";

    for(i=n/2-1;i>=0;i--)
    max_heapify(n,i,arr);

    for(i=n-1;i>0;i--)
    {
        swap(arr[0],arr[i]);
        max_heapify(i,0,arr);
    }

    print_arr(n,arr);
    cout<<"\n----------------------------------------------------\n";
    return 0;
}
