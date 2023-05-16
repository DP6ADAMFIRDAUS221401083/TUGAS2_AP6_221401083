/*  Nama:Adam M Firdaus
    Nim:221401083
    Lab:AP6
    Deskripsi:Program mengubah pointer dalam bahasa c menjadi bahasa c++
*/
#include <iostream>

using namespace std;
int main(){

    int nilai[3],*petunjuk;
    nilai[0] = 125;
    nilai[1] = 345;
    nilai[2] = 750;

    petunjuk = &nilai[0];
    cout<<"nilai:"<<*petunjuk<<" ada di alamat memori:"<<petunjuk<<endl;
    cout<<"nilai:"<<*(petunjuk+1)<<" ada di alamat memori:"<<(petunjuk+1)<<endl;
    cout<<"nilai:"<<*(petunjuk+2)<<" ada di alamat memori:"<<(petunjuk+2)<<endl;
    
}