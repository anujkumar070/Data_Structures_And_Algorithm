#include<iostream>
using namespace std;

int selectionSort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {

        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
                {
                    int t=arr[i];
                    arr[i]=arr[j];
                    arr[j]=t;
                }
        }
    }

    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
    return 0;
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

    selectionSort(a,n);
    return 0;
}
