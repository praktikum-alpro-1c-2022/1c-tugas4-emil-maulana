#include <iostream>

using namespace std;

int main(){
	int kode, jumlah, harga, total, pil;
	char ukuran;
	string merek;
	
	pilihan :
		
	cout <<" =====================================================================================" << endl;
	cout <<" ==    Kode Susu    ==      Nama Produk     ==      Ukuran      ==      Harga       ==" << endl;
	cout <<" =====================================================================================" << endl;
    cout <<" ==    1            ==      Dancow          ==    (B) Besar     ==    Rp. 10.000    ==" << endl;
    cout <<" ==                 ==                      ==    (S) Sedang    ==    Rp. 4.250     ==" << endl;
    cout <<" ==                 ==                      ==    (K) Kecil     ==    Rp. 2.100     ==" << endl;
    cout <<" ==    2            ==      Indomilk        ==    (B) Besar     ==    Rp. 8.500     ==" << endl;
    cout <<" ==                 ==                      ==    (S) Sedang    ==    Rp. 4.000     ==" << endl;
    cout <<" ==                 ==                      ==    (K) Kecil     ==    Rp. 2.100     ==" << endl;
    cout <<" ==    3            ==      Sustacal        ==    (B) Besar     ==    Rp. 17.000    ==" << endl;
    cout <<" ==                 ==                      ==    (S) Sedang    ==    Rp. 14.000    ==" << endl;
    cout <<" ==                 ==                      ==    (K) Kecil     ==    Rp. 8.300     ==" << endl;
    cout <<" =====================================================================================" << endl;
	cout << endl;
	
	cout<<" Masukkan Kode Susu (1-3) : ";
	cin>>kode;
	
	cout<<" Masukkan Jumlah Pembelian : ";
	cin>>jumlah;
	
	cout<<" Masukkan Ukuran (B/S/K) : ";
	cin>>ukuran;
	
	system("cls");
	
	switch(kode){
		case 1 :
			merek = " Susu Dancow ";
			if(ukuran == 'b' || ukuran == 'B'){
				harga = 10000;
			}else if(ukuran == 's' || ukuran == 'S'){
				harga = 4250;
			}else if(ukuran == 'k' || ukuran == 'K'){
				harga = 2100;
			}else{
				cout<<" Ukuran Yang Anda Masukkan Belum Tersedia "<<endl;
			}
		break;
		case 2 :
			merek = " Susu Indomilk ";
			if(ukuran == 'b' || ukuran == 'B'){
				harga = 8500;
			}else if(ukuran == 's' || ukuran == 'S'){
				harga = 4000;
			}else if(ukuran == 'k' || ukuran == 'K'){
				harga = 2100;
			}else{
				cout<<" Ukuran Yang Anda Masukkan Belum Tersedia "<<endl;
			}
		break;
		case 3 :
			merek = " Susu Sustacal ";
			if(ukuran == 'b' || ukuran == 'B'){
				harga = 17000;
			}else if(ukuran == 's' || ukuran == 'S'){
				harga = 14000;
			}else if(ukuran == 'k' || ukuran == 'K'){
				harga = 8300;
			}else{
				cout<<" Ukuran Yang Anda Masukkan Belum Tersedia "<<endl;
			}
		break;
		default :
			cout<<" Kode Susu Yang Anda Masukkan Belum Tersedia "<<endl;
		break;
	}
	
	cout<<endl;
	
	cout<<" ====================================================="<<endl;
	cout<<" ================== STRUK PEMBELIAN =================="<<endl;
	cout<<endl;
	cout<<""<< merek << endl;
	cout<<" Harga Susu : Rp. " << harga << ",-" << endl;
	cout<<" Jumlah Pembelian : "<< jumlah <<endl;
	cout<<" Jumlah Total Pembayaran : Rp. "<< harga*jumlah << ",-" <<endl;
	cout<<endl;
	cout<<" ====================================================="<<endl;
	cout<<" ==================  TERIMA  KASIH ==================="<<endl;
	
	cout<<" 1. KEMBALI "<<endl;
	cout<<" 2. KELUAR "<<endl;
	cout<<" Masukkan Pilihan Anda : ";
	cin>>pil;
	system("cls");
	
	if(pil == 1){
		goto pilihan;
	}else if(pil == 2){
		exit(0);
	}else{
		cout<<" Pilihan Tidak Tersedia ";
	}
	
	return 0;
}
