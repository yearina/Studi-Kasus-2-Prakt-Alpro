#include <iostream>
using namespace std;

int main() {
	char nama[20];
	int menu, pesan, jumlah, cash;
	float harga, ongkir, potongan_ongkr, jarak, diskon, kembalian;
	float total_harga, total_belanja, total_bayar;
	
	// NAMA PEMESAN
	cout<<"Masukkan nama pemesan: "; cin>>nama;
	
	// MENU
	menu:
	cout<<"Menu:"<<endl;
	cout<<"1. Ayam geprek = 21000"<<endl;
	cout<<"2. Ayam goreng = 17000"<<endl;
	cout<<"3. Udang goreng = 19000"<<endl;
	cout<<"4. Cumi goreng = 20000"<<endl;
	cout<<"5. Ayam bakar = 25000"<<endl;
	cout<<"-----------------------------------\n";
	cout<<"Pilih menu yg akan dibeli: "; cin>>menu;
	switch(menu){
	case 1:
	  cout<<"Ayam geprek"<<endl;
	  cout<<"Jumlah: "; cin>>jumlah;
	  harga = 21000;
	  break; 
	case 2:
	  cout<<"Ayam goreng"<<endl;
	  cout<<"Jumlah: "; cin>>jumlah;
	  harga = 17000;
	    break;
	case 3:
	  cout<<"Udang goreng"<<endl;
	  cout<<"Jumlah: "; cin>>jumlah;
	  harga = 19000;
		break;
	case 4:
	  cout<<"Cumi goreng"<<endl;
	  cout<<"Jumlah: "; cin>>jumlah;
	  harga = 20000;
	    break;
	case 5:
	  cout<<"Ayam bakar"<<endl;
	  cout<<"Jumlah: "; cin>>jumlah;
	  harga = 25000;
	    break;
	}
	
	//TOTAL HARGA DAN BELANJA
	total_harga = jumlah*harga;
	total_belanja += total_harga;
	cout<<"Total harga = "<<total_harga<<endl;
	cout<<"Total belanja = "<<total_belanja<<endl;
	
	// TAMBAH PESANAN
	cout<<"\nTambah pesanan (ya=1/tidak=0): "; cin>>pesan;
	if (pesan == 1) {
	goto menu;
	}
	else if (pesan == 0) {
	cout<<"--Pesanan selesai--\n"<<endl;
	}
	
	// ONGKIR
	cout<<"Masukkan jarak delivery (km): "; cin>>jarak;
	if (jarak <= 3){
	ongkir = 15000;
	}
	else if (jarak > 3) {
	ongkir = 25000;
	}
	
	// POTONGAN ONGKIR & DISKON
	if(total_belanja >= 50000 && total_belanja < 150000) {
	potongan_ongkr = 5000;
	diskon = 15*50000/100;
	}
	else if(total_belanja >= 150000) {
	potongan_ongkr = 8000;
	diskon = 35*50000/100;
	}
	
	// SLIP BAYAR & KEMBALIAN
	cout<<"\n	  --SLIP BAYAR--\n"<<endl;
	cout<<"Nama Pemesan	: "<<nama<<endl;
	cout<<"Total belanja	: "<<total_belanja<<endl;
	cout<<"Ongkir		: "<<ongkir<<endl;
	cout<<"Potongan ongkir	: "<<"-"<<potongan_ongkr<<endl;
	cout<<"Diskon		: "<<"-"<<diskon<<endl;
	cout<<"-------------------------------------------\n"; 
	total_bayar = total_belanja+ongkir-potongan_ongkr-diskon;
	cout<<"Total Bayar	: "<<total_bayar<<endl;
	cout<<"			Cash	  : "; cin>>cash;
	kembalian = cash-total_bayar;
	cout<<"			Kembalian : "<<kembalian; 

	return 0;
	}
