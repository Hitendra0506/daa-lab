#include <iostream>
using namespace std;
int cnt=0;

void print_arr(int n,int arr[])
{
    int i;
    for (i=0; i < n; i++)
    cout<<"  "<<arr[i];
    cout<<endl;
}

void merge_arr(int l,int m,int u,int arr[])
{
    int i,j,k,size1,size2;
    size1=m-l+1;
    size2=u-m;
    int left[size1],right[size2];
    for(i=0;i<size1;i++)
       left[i]=arr[l+i];
    for(i=0;i<size2;i++)
       right[i]=arr[m+i+1];

    i=0;j=0;k=l;

    while(i<size1&&j<size2)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
        }
        else
        {
            arr[k]=right[j];
            j++;
        }
        k++;
    }
    while(i<size1)
    {
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<size2)
    {
        arr[k]=right[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[],int n)
{
    int temp=1;
    for(temp=1;temp<=n-1;temp*=2)
    {   int i;
        cnt++;
        for(i=0;i<n-1;i+=2*temp)
        {
            int l,m,u,t;
            l=i;
            m= i+temp-1;
            u=((n-1)<=(m+temp))?(n-1):(m+temp);
            merge_arr(l,m,u,arr);
        }
    }
}

int main()
{
 int i,j,n;

    cout<<"\n Enter the size of array : ";
    cin>>n;
     int arr[n];
    cout<<"\n------------------------------------------------\n";
    cout<<"\n USING MERGE SORT \n";
    cout<<"\n Enter "<<n<<" elements : ";
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<"\n The unsorted array is : ";
    print_arr(n,arr);
    cout<<"\n The sorted array is   : ";
    merge_sort(arr,n);
    print_arr(n,arr);
    cout<<"\n------------------------------------------------\n";
    cout<<"\nCount : "<<cnt;
    cout<<"\n------------------------------------------------\n";
    return 0;
}
