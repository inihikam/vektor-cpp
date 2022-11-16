// VECTOR CPP PROGRAM
// AUTHOR : MUHAMMAD MAULANA HIKAM

#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;

vector<int> V;				/*Variabel V - Vector, Untuk Menampung Sebuah Angka*/

int main(){
	int pilih, pos, data, choose;
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
			cout << "Pilih tipe insert :\n";
			cout << "1. Insert After\n";
			cout << "2. Insert Before\n";
			cout << "Pilih : ";cin >> choose;
			
			if (choose == 1){
				bool sukses = false;
				cout << "\nMasukkan data setelah data : ";cin>>pos;
				for (int i = 0; i < V.size(); i++){
					if (pos == V[i]){
						V.insert(V.begin() + (i+1), data);
						cout << "Data berhasil masuk\n";
						sukses = true;
					}
				}
				if (sukses == false){
					cout << "Data yang dicari tidak ada!\n"; 
				}
				getch();
			}
			if (choose == 2){
				bool sukses = false;
				cout << "\nMasukkan data sebelum data : ";cin>>pos;
				for (int i = 0; i < V.size(); i++){
					if (pos == V[i]){
						V.insert(V.begin() + (i), data);
						cout << "Data berhasil masuk\n";
						sukses = true;
						break;
					}
				}
				if (sukses == false){
					cout << "Data yang dicari tidak ada!\n"; 
				}
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
			bool sukses = false;
			cout << "Masukkan data yang ingin dihapus : ";cin>>pos;
			for (int i = 0; i < V.size(); i++){
				if (pos == V[i]){
					cout << "Data " << V[i] << " Berhasil terhapus!\n";
					V.erase(V.begin() + i);
					sukses = true;
				}
			}
			if (sukses == false){
				cout << "Sorry data not found!\n";
			}
			getch();
		}
		if (pilih == 7){
			for (int i = 0; i < V.size(); i++){
				cout << i+1 << ". " << V[i] << "\n";
			}
			getch();
		}
	}
	while(pilih!=9);
	return 0;
}