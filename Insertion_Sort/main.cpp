// INSERTION SORT

#include <iostream>
using namespace std;
void print_arr(int s,int arr[])
{
  for(int i=0;i<s;i++)
  cout<<" "<<arr[i];
  cout<<endl;
}

int insertion_sort(int n,int arr[])
{
    int i,j,k,c=1;
    for(i=1;i<n;i++)
    {
        k=arr[i];
        j=i-1;
        while(j>=0&&(c++)&&arr[j]>k)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=k;
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
    cout<<"\n USING INSERTION SORT \n";
    cout<<"\n BEST CASE : \n";
    cout<<"\n Enter "<<n<<" elements : ";
    for(i=0;i<n;i++)
    cin>>arr[i];
    cout<<"\n The unsorted array is : ";
    print_arr(n,arr);
    cout<<"\n The sorted array is : ";
    cnt=insertion_sort(n,arr);
    print_arr(n,arr);
    cout<<"\n Number of Comparisons : "<<cnt<<endl;
    cout<<"\n WORST CASE : \n";
    cout<<"\n Enter "<<n<<" elements : ";
    for(i=0;i<n;i++)
    cin>>arr[i];
    cout<<"\n The unsorted array is : ";
    print_arr(n,arr);
    cout<<"\n The sorted array is : ";
    cnt=insertion_sort(n,arr);
    print_arr(n,arr);
    cout<<"\n Number of Comparisons : "<<cnt<<endl;
    cout<<"\n---------------------------------------\n";
    return 0;
}
