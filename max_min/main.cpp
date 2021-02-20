#include <iostream>
using namespace std;
void print_arr(int n,int arr[])
{
    int i;
    for (i=0; i < n; i++)
    cout<<"  "<<arr[i];
    cout<<endl;
}

int minimum(int arr[],int l,int r)
{
    if(l==r)
        return arr[l];
    else if(r-l==1)
        return (arr[l]<arr[r])?arr[l]:arr[r];
    else
    {
      int mid=(l+r)/2;
      int minl,minr;
      minl=minimum(arr,l,mid);
      minr=minimum(arr,mid+1,r);
      return (minl<minr)?minl:minr;
    }
}

int maximum(int arr[],int l,int r)
{
    if(l==r)
        return arr[l];
    else if(r-l==1)
        return (arr[l]>arr[r])?arr[l]:arr[r];
    else
    {
      int mid=(l+r)/2;
      int maxl,maxr;
      maxl=maximum(arr,l,mid);
      maxr=maximum(arr,mid+1,r);
      return (maxl>maxr)?maxl:maxr;
    }
}

int main()
{
    int i,j,n,mini,maxi;
    cout<<"\n Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"\n---------------------------------------\n";
    cout<<"\n Enter "<<n<<" elements : ";
    for(i=0;i<n;i++)
    cin>>arr[i];
    cout<<"\n The array is : ";
    print_arr(n,arr);
    cout<<"\n Minimum element : "<<minimum(arr,0,n-1);
    cout<<"\n\n Maximum element : "<<maximum(arr,0,n-1);
    cout<<"\n---------------------------------------\n";
    return 0;
}
