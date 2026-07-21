#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks : ";
    cin>>marks;
    if (marks>=90) {
        cout<<"A grade obtained. ";
    } else if (marks>=80) {
         cout<<"B grade obtained. ";
    }else {
        cout<<"C grade obtained. ";
    }
    
    return 0;
}