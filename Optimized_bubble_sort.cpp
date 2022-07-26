#include<bits/stdc++.h>
using namespace std;
void printArray(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

}

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Before sorting : ";
    printArray(arr,n);
    cout<<endl;

    for(int i=1; i<n; i++)
    {
        int flag = 0;
        for(int j=0; j<n-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
    }

    cout<<"After sorting : ";
    printArray(arr,n);
    return 0;
}
