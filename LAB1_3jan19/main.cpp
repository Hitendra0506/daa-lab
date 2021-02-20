#include <bits/stdc++.h>
using namespace std;

int linear_search(int s,int arr[],int item)
{
    int i=0,pos=-1;
    while(i<s&&pos==-1)
    {
        if(arr[i]==item)
            pos=i+1;
        i++;
    }
    return pos;
}

void bubble_sort(int s,int arr[])
{
    int i,j,t;
    for(i=0;i<s;i++)
    {
        for(j=0;j<s-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
}

void print_arr(int s,int arr[])
{
  for(int i=0;i<s;i++)
  cout<<" "<<arr[i];
  cout<<endl;
}

int bin_search(int n,int item,int arr[])
{
    int beg=0,last=n-1,pos=-1;
    int mid=(beg+last)/2;
    while(beg<=last&&pos==-1)
    {
        mid=(beg+last)/2;
        if(arr[mid]==item)
            pos=mid+1;
        else if(arr[mid]<item)
            beg=mid+1;
        else
            last=mid-1;
    }
    return pos;
}

int main()
{
     int s,i;
     cout<<"\n Enter the size : ";
     cin>>s;
     int arr[s];
     cout<<"\n Enter the "<<s<<" elements : ";
     for(i=0;i<s;i++)
     cin>>arr[i];
     cout<<"\n The array is : ";
     print_arr(s,arr);
     int ch;
     char c;
     do
     {
        system("cls");
        cout<<"\n The array is : ";
        print_arr(s,arr);
        cout<<"\n-------------------------------------+\n";
        cout<<"\t      MENU                   |\n";
        cout<<"-------------------------------------+";
        cout<<"\n\t 1. Linear Search            |";
        cout<<"\n\t 2. Bubble Sort              |";
        cout<<"\n\t 3. Binary Search            |";
        cout<<"\n\t 4. EXIT                     |";
        cout<<"\n-------------------------------------+\n";
        cout<<"\n\n Enter your choice :";
        cin>>ch;
        switch(ch)
        {
        case 1:{
                 int ele;
                 cout<<"\n Enter the search element :";
                 cin>>ele;
                 int p=linear_search(s,arr,ele);
                 if(p==-1)
                     cout<<"\n "<<ele<<" Not found !!!\n";
                 else
                    cout<<"\n "<<ele<<" found at position "<<p<<"\n";
                 cin>>c;
                       break;
                }
        case 3:{
                 int ele;
                 cout<<"\n Enter the search element :";
                 cin>>ele;
                 int p=bin_search(s,ele,arr);
                 if(p==-1)
                     cout<<"\n "<<ele<<" Not found !!!\n";
                 else
                    cout<<"\n "<<ele<<" found at position "<<p<<"\n";
                 cin>>c;
                       break;
                }
        case 2:{
                   cout<<"\n The sorted array is : ";
                   bubble_sort(s,arr);
                   print_arr(s,arr);
                   cin>>c;
                       break;
                }
         case 4:break;
        default : cout<<"\nINVALID\n";cin>>c;break;
      }}
     while(ch!=4);
    return 0;
}
