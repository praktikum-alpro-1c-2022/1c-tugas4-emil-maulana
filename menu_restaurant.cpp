#include <iostream>

using namespace std;

int main(){
	int menu;
	
	cout<<"             Menu Restaurant Mc'Yahud            "<<endl;
	cout<<" ================================================"<<endl;
	cout<<" 1. Nasi Goreng Informatika    Rp. 5.000,-"<<endl;
	cout<<" 2. Nasi Soto Ayam Internet    Rp. 7.000,-"<<endl;
	cout<<" 3. Gado-Gado Disket           Rp. 4.500,-"<<endl;
	cout<<" 4. Bubur Ayam LAN             Rp. 4.000,-"<<endl;
	cout<<" ================================================"<<endl;
	
	cout<<" Masukkan Pilihan Anda : ";
	cin>>menu;
	
	switch(menu){
		case 1:
			cout<<" Pilihan NO 1. Nasi Goreng Informatika Rp. 5.000,-";
		break;
		case 2:
			cout<<" Pilihan NO 2. Nasi Soto Ayam Internet Rp. 7.000,-";
		break;
		case 3 :
			cout<<" Pilihan NO 3. Gado-Gado Disket Rp. 4.500,-";
		break;
		case 4 :
			cout<<" Pilihan NO 4. Bubur Ayam LAN Rp. 4.000,-";
		break;
		default:
			cout<<" Menu Tidak Tersedia";
	}
	
	return 0;
}
