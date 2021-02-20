#include <iostream>
using namespace std;

void print_arr(int s,int arr[])
{
  for(int i=0;i<s;i++)
  cout<<" "<<arr[i];
  cout<<endl;
}

int selection_sort(int n,int arr[])
{
    int i,j,t,c=1;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((c++)&&arr[j]<=arr[i])
            {
                t=arr[j]; arr[j]=arr[i]; arr[i]=t;
            }
        }
    }
    return c-1;
}

int main()
{
    int i,j,n=5,cnt,k;
    cout<<"\n Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"\n---------------------------------------\n";
    cout<<"\n USING SELECTION SORT \n";
    cout<<"\n BEST CASE : \n";
    cout<<"\n Enter "<<n<<" elements : ";
    for(i=0;i<n;i++)
    cin>>arr[i];
    cout<<"\n The unsorted array is : ";
    print_arr(n,arr);
    cout<<"\n The sorted array is : ";
    cnt=selection_sort(n,arr);
    print_arr(n,arr);
    cout<<"\n Number of Comparisons : "<<cnt<<endl;
    cout<<"\n WORST CASE : \n";
    cout<<"\n Enter "<<n<<" elements : ";
    for(i=0;i<n;i++)
    cin>>arr[i];
    cout<<"\n The unsorted array is : ";
    print_arr(n,arr);
    cout<<"\n The sorted array is : ";
    cnt=selection_sort(n,arr);
    print_arr(n,arr);
    cout<<"\n Number of Comparisons : "<<cnt<<endl;
    cout<<"\n---------------------------------------\n";
    return 0;
}
