#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age";
    cin>>age;
    if (age>=18){
        cout<<"can vote\n";
    }if (age>=45){
        cout<<"context elections";    
    }else {
        cout<<"can't vote";
    }
    
    
    return 0;

}