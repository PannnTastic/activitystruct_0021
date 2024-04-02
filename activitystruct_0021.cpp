#include<iostream>
using namespace std;

struct detailalamat
{
    
};

struct mahasiswa
{
    string nim;
    string nama;
    string alamat;
    int umur;
};

int main (){
    mahasiswa mhs;

    cout<< "Nomor Mahasiswa : ";
    cin >> mhs.nim;
    cout<< "Nama Mahasiswa : ";
    cin >> mhs.nama;
    cout << "Alamat Mahasiswa : ";
    cin >> mhs.alamat;
    cout << "Umur : ";
    cin >> mhs.umur;

    cout<<endl;
    cout << "\nNim : " << mhs.nim;
    cout<< "\nNama : "<< mhs.nama;
    cout << "\nAlamat : " << mhs.alamat;
    cout << "\nUmur : " << mhs.umur; 

}