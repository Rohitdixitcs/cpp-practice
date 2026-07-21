#include <iostream>
using namespace std;
int main(){
    int income;
    cout<<"Enter your income : ";
    cin>>income;
    if (income<5000) {
        cout<<"O% tax applied. ";
    } else if (income >=5000 && income<20000) {
        cout<<"20% tax applied. ";
    } else {
        cout<<"50% tax applied. ";
    }

    return 0;

}