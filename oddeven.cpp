#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number to be checked : ";
    cin>>num;
    if (num%2==0) {
        cout<<"Given Number is even. ";

    } else {
        cout<<"Given Number is odd";
    }
    return 0;
}