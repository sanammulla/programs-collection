//Suraj Subramanian 18/2/19
//C++ : reverse an array

#include<iostream>
using namespace std;
int main(){
    int arr[10];
    for(int i=0;i<10;i++)
        cin>>arr[i];
    int p=0,q=9,temp;
    while(p<5){
        temp=arr[p];
        arr[p]=arr[q];
        arr[q]=temp;
        p++;
        q--;
    }
    for(int i=0;i<10;i++)
        cout<<arr[i];
    return 0;
}