#include<iostream>
using namespace std;

struct detailalamat
{
    string desa;
    string kota;
};

struct mahasiswa
{
    string nim;
    string nama;
    string alamat;
    int umur;
    detailalamat alamat;
};

int main (){
    mahasiswa mhs;

    cout<< "Nomor Mahasiswa : ";
    cin >> mhs.nim;
    cout<< "Nama Mahasiswa : ";
    cin >> mhs.nama;

    cout << "Alamat Mahasiswa : ";
    cout << "\t Nama Desa : ";
    cin >> mhs.alamat.desa; 
    cout << "\t Nama Kota : ";
    cin >> mhs.alamat.kota;
    
    cout << "Umur : ";
    cin >> mhs.umur;

    cout<<endl;
    cout << "\nNim : " << mhs.nim;
    cout<< "\nNama : "<< mhs.nama;
    cout << "\nAlamat : " << mhs.alamat;
    cout << "\nUmur : " << mhs.umur; 

}