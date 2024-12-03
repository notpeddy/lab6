#include<iostream>
using namespace std;

int main(){
    int i=0, count=0, count2=0;
    cout << "Enter an integer: ";
    cin >> i ;
    while(i != 0){
        
        if(i%2==0){
        count=count+1;
        }

        if(i%2 !=0){
            count2=count2+1;
        }
        cout << "Enter an integer: ";
    cin >> i ;
    }

    cout << "#Even numbers = " << count << "\n" ;
    cout << "#Odd numbers = " << count2 ;
    return 0;
}
