#include <iostream>

using namespace std;

// Function to print size of the data type we pass
template <typename temp> void size(temp x){
    cout<<"Size of "<<x<<" :"<<sizeof(x)<<endl; 
}

int main(){

    // Integer 4 bytes
    size(10);

    // Float is by default double 8 bytes
    size(0.6);

    // Character 1 byte
    size('A');

    return 0;
}