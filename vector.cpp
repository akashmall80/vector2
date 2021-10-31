//Vector 
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr={1,2,3,4,5};
    arr.push_back(16);
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.pop_back();
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}