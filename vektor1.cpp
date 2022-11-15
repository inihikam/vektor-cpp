#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;

vector<int> V;				/*Variabel V - Vector, Untuk Menampung Sebuah Angka*/

int main(){
	int pilih, pos, data;
	do
	{
		system("cls");
		cout << "\n";
		cout<<"1. Menambah Data Didepan"<<endl;
		cout<<"2. Menambah Data Belakang"<<endl;
		cout<<"3. Menambah Data DiTengah"<<endl;	
		cout<<"4. Menghapus Data DiDepan"<<endl;	
		cout<<"5. Menghapus Data DiBelakang"<<endl;	
		cout<<"6. Menghapus Data DiTengah"<<endl;	
		cout<<"7. Menampilkan Data"<<endl;
		cout<<"9. Keluar"<<endl;
		cout<<"Pilihan Anda [1-9] : ";cin>>pilih;

		if (pilih == 1){
			cout << "Masukkan data : ";cin>>data;
			V.insert(V.begin(), data);
			cout << "Data berhasil masuk\n";
			getch();
		}
		if (pilih == 2){
			cout << "Masukkan data : ";cin>>data;
			V.push_back(data);
			cout << "Data berhasil masuk\n";
			getch();
		}
		if (pilih == 3){
			cout << "Masukkan data : ";cin>>data;
			cout << "\nMasukkan data pada posisi ke-";cin>>pos;
			if (pos > V.size()){
				cout << "Maaf posisi melewati akhir data!\n";
				getch();
			} else {
				V.insert(V.begin() + (pos-1), data);
				cout << "Data berhasil masuk\n";
				getch();
			}
		}
		if (pilih == 4){
			V.erase(V.begin());
			cout << "Data berhasil dihapus\n";
			getch();
		}
		if (pilih == 5){
			V.pop_back();
			cout << "Data berhasil dihapus\n";
			getch();
		}
		if (pilih == 6){
			cout << "Masukkan posisi data yang ingin dihapus : ";cin>>pos;
			if (pos > V.size()){
				cout << "Maaf posisi data melewati batas akhir!";
				getch();
			} else {
				V.erase(V.begin() + (pos-1));
				cout << "Data berhasil dihapus!";
				getch();
			}
		}
		if (pilih == 7){
			for (int i = 0; i < V.size(); i++){
				cout << i+1 << V[i] << "\n";
			}
			getch();
		}
		
	}
	while(pilih!=9);
	return 0;
}
