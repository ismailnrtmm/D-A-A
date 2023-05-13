#include <iostream>
#include "clock.cpp"
using namespace std;


int main(int argc, char const *argv[]){
    Clock t;

    int jamInput = 0, menitInput = 0, detikInput = 0;
    cout<<"Jam : "<<endl;
    cin>>jamInput;
    cout<<"Menit : "<<endl;
    cin>>menitInput;
    cout<<"Detik : "<<endl;
    cin>>detikInput;

    t.setWaktu(jamInput, menitInput, detikInput);
    cout<<endl
        <<t.getJam()<<":"
        <<t.getMenit()<<":"
        <<t.getDetik()<<endl;
    cout<<endl;
    cout<<"Tambahkan Jam"<<endl;
    t.tambahJam();
    t.tambahMenit();
    t.tambahDetik();
    cout<<endl
        <<t.getJam()<<":"
        <<t.getMenit()<<":"
        <<t.getDetik()<<endl;

    return 0;
}