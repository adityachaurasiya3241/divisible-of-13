
#include<iostream>
using namespace std ;
int div(int n){
    if(n%13 == 0){
        cout<<"True";
        return 1 ;
    }
    else{
        cout<<"False";
        return 0;
    }
}
int main(){
    int n ;
    cout<<"enter number : ";
    cin>>n ;
    div(n);
    return 0;
}