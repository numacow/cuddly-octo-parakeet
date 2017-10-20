#include<iostream>
#include <conio.h>
using namespace std;

int wat(int arr[], int n)
{
    // initialize output
    int result = 0;

    // maximum element on left and right
    int left_max = 0, right_max = 0;

    // indices to traverse the array
    int lo = 0, hi = n-1;

    while(lo <= hi)
    {
        if(arr[lo] < arr[hi])
        {
            if(arr[lo] > left_max)
            // update max in left
            left_max = arr[lo];
            else
            // water on curr element = max - curr
            result += left_max - arr[lo];
            lo++;
        }
        else
        {
            if(arr[hi] > right_max)
            // update right maximum
            right_max = arr[hi];
            else
            result += right_max - arr[hi];
            hi--;
        }
    }

    return result;
}

void displaygrid(int a[100]){
    int l=a[0];
    int c=0;
    char block=219;
    for(int i=0;a[i]!=-1;i++){
        if (a[i]>l){
            l=a[i];}
        c++;}
    for(int j=0;j<l;j++){
        for(int i=0;a[i]!=-1;i++){
            if (a[i]>=(l-j)){
                cout<<block;}
            else{
                if ((l-j)==1){
                cout<<"_";}
                else{
                cout<<" ";}}}
    cout<<"\n";}}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];}
    a[n]=-1;
    displaygrid(a);
    cout<<n<<"\n";

    cout<<n<<"\n";
    cout<<wat(a,n);}
