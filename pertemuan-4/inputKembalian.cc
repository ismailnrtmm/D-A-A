#include <iostream>
 
using namespace std;

int main() {
    int a, b, da;
    cout<<"masukan harga barang : ";
    cin>>a;
    cout<<"masukan uang pembeli : ";
    cin>>b;
    cout<<"harga barang : "<<a<<endl;
    cout<<"uang pembeli : "<<b<<endl;
    da = a-b;
    cout<<"kembalian :"<<da<<endl;

    return 0;
}