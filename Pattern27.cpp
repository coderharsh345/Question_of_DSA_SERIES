#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>> n;

    int i=1;
    int count=1;
    while(i<=n){
        int j=1,space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }
        
        while(j<=i){
            cout<<count;
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }






}