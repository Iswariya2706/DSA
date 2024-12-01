#include <iostream>
using namespace std;
int main(){
    int size;
    cout<< "Enter the size = ";
    cin>> size;
    switch(size){
        case 29:
        cout<< "Small";
        break;
        case 30:
        cout<< "Medium";
        break;
        case 38:
        cout<< "Large";
        break;
        case 42:
        cout<< "XLarge";
        break;
        default:
        cout<< "Invalid input";
        break;
    }
    return 0;
}