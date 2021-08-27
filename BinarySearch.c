#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int k)
{
    int end=n;
    int start=0;
    while(end>=start)
    {
        int mid=(end+start)/2;
        if(arr[mid]==k)
            return mid;
        else if(mid>k)
            end=mid-1;
        else if(mid<end)
            start=mid+1;
    }
    return -1;
}

int main()
{
    //Take array size=n, element whose index is to be found=k, array=a as input
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k;
    if(binarySearch(a,n,k)==-1)
        cout<<"Given element is not present in array";
    else
    cout<<binarySearch(a,n,k);
    return 0;
}
