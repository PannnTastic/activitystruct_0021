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
    detailalamat alamat;
    string nama;
    int umur;
};

int main (){
    mahasiswa mhs[3];
    
    for(int i = 0;i < 3; i++)
    {
        cout<< "Nomor Mahasiswa : ";
        getline (cin , mhs[i].nim);
        cout<< "Nama Mahasiswa : ";
        getline(cin , mhs[i].nama);

        cout << "Alamat Mahasiswa : ";
        cout << "\n\t Nama Desa : ";
        getline (cin, mhs[i].alamat.desa); 
        cout << "\n\t Nama Kota : ";
        getline (cin ,mhs[i].alamat.kota);

        cout << "Umur : ";
        cin >> mhs[i].umur;
    }

    for (int i=0;i<3;i++)
    {
        cout<<endl;
        cout << "\nNim : " << mhs[i].nim;
        cout << "\nNama : "<< mhs[i].nama;
        cout << "\nAlamat : " ;
        cout << "\nDesa : " << mhs[i].alamat.desa;
        cout << "\nKota : "<< mhs[i].alamat.kota;
        cout << "\nUmur : " << mhs[i].umur; 
    }
}