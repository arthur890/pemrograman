#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

struct pelanggan {
	char nama [20];
	string jenis;
    string tipe;
   	int beli;
    int tagihan;
    int harga;
};

void menu() {
	cout<<"                              ============================================================\n";
    cout<<"                              =                                                          =\n";
    cout<<"                              =                        [ M E N U ]                       =\n";
    cout<<"                              = Dealer Mitra Hezky Sejahtera                             =\n";
    cout<<"                              ============================================================\n";
    cout<<"                              =      JENIS SEPEDA          |         TIPE SEPEDA         =\n";
    cout<<"                              =       C = CITY             |         1. KECIL            =\n";
    cout<<"                              =       M = MOUNTAIN         |         2. BESAR            =\n";
    cout<<"                              =       R = ROAD             |                             =\n";
    cout<<"                              ============================================================\n\n";
}

void harga(){
	printf("                              ============================================================\n");
    printf("                              =                                                          =\n");
    printf("                              =                   [ Beli Kendaraan ]                     =\n");
    printf("                              = Author : Hezky_r                                         =\n");
    printf("                              ============================================================\n");
    printf("                              =========================|              HARGA             |=\n");
    printf("                              = kode| Jenis kendaraan  | [1] kecil      | [2]   besar   |=\n");
    printf("                              =========================|================|===============|=\n");
    printf("                              =  C   | CITY            | Rp. 1.770.000,-| Rp.3.400.000,-|=\n");
    printf("                              =  M   | MONTAIN         | Rp. 1.720.000,-| Rp.2.195.000,-|=\n");
    printf("                              =  R   | ROAD            | Rp. 2.800.000,-| Rp.4.100.000,-|=\n");
    printf("                              ============================================================\n");
}

int main (){
	system("cls");
	menu();
	int tipe;
	string transaksi;
	pelanggan p1;
	cout<< "NAMA PELANGGAN	           : ";
	cin.get(p1.nama, 20);
	ulang:
	cout<< "KODE JENIS [ C / M / R ]   : ";
	cin>> p1.jenis;
	if (p1.jenis == "C" || p1.jenis == "c"){
		kode:
		cout<< "KODE TIPE  [ 1 / 2 ]       : ";
		cin >> tipe;
		if (tipe == 1){
			cout<< "JUMLAH BELI            	   : ";
			cin >> p1.beli;
			p1.jenis = "CITY";
			p1.tipe = "KECIL";
			p1.tagihan=1770000*p1.beli;
			p1.harga = 1770000;
		} else if (tipe == 2){
			cout<< "JUMLAH BELI            	   : ";
			cin >> p1.beli;
			p1.jenis = "CITY";
			p1.tipe = "BESAR";
			p1.tagihan=3400000*p1.beli;
			p1.harga =3400000;
		} else {
			cout<< " KODE TIDAK ADA!\n";
			goto kode;
		}
	} else if (p1.jenis == "M" || p1.jenis == "m"){
		cout<< "KODE TIPE  [ 1 / 2 ]       : ";
		cin >> tipe;
		if (tipe == 1){
			cout<< "JUMLAH BELI            	   : ";
			cin >> p1.beli;
			p1.jenis = "MOUNTAIN";
			p1.tipe = "KECIL";
			p1.tagihan=1720000*p1.beli;
			p1.harga =1720000;
		} else if (tipe == 2 ){
			cout<< "JUMLAH BELI            	   : ";
			cin >> p1.beli;
			p1.jenis = "MOUNTAIN";
			p1.tipe = "BESAR";
			p1.tagihan=2195000*p1.beli;
			p1.harga =2195000;
		} else {
			cout<< " KODE TIDAK ADA!";
		}
	} else if (p1.jenis == "R" || p1.jenis == "r"){
		cout<< "KODE TIPE  [ 1 / 2 ]       : ";
		cin >> tipe;
		if (tipe == 1){
			cout<< "JUMLAH BELI            	   : ";
			cin >> p1.beli;
			p1.jenis = "ROAD";
			p1.tipe = "KECIL";
			p1.tagihan=2800000*p1.beli;
			p1.harga =2800000;
		} else if (tipe == 2 ){
			cout<< "JUMLAH BELI            	   : ";
			cin >> p1.beli;
			p1.jenis = "ROAD";
			p1.tipe = "BESAR";
			p1.tagihan=4100000*p1.beli;
			p1.harga =4100000;
		} else {
			cout<< "KODE TIDAK ADA! ";
		}
	} else {
		cout<< "KODE JENIS TIDAK ADA! \n";
		goto ulang;
	}
	cout<<"\n";
	harga();
	cout<<"\n";
	cout<<"                              ==============================================\n";
	cout<<"                            	  NAMA PELANGGAN : "<< p1.nama<< endl;
	cout<<"                            	  JENIS SEPEDA   : "<< p1.jenis<< endl;
	cout<<"                            	  TIPE SEPEDA    : "<< p1.tipe<< endl;
	cout<<"                            	  HARGA          : Rp."<< p1.harga<< endl;
	cout<<"                            	  JUMLAH BELI    : "<< p1.beli<< endl;
	cout<<"                            	  TAGIHAN	 : Rp."<< p1.tagihan<< endl;
    cout<<"                              ==============================================\n";
    trans:
    cout<<"                            		TRANSAKSI LAGI? (Y/T) : ";
    cin>> transaksi;
    if (transaksi == "Y" || transaksi == "y"){
    	system("cls");
	} else if (transaksi == "T" || transaksi == "t"){
		printf("                              ============================================================\n");
    	printf("                              =                                                          =\n");
    	printf("                              =                        TERIMA KASIH                      =\n");
    	printf("                              = Author : Hezky_r                                         =\n");
    	printf("                              ============================================================\n");
	} else {
		cout<<"Pilihan TIDAK ADA!\n";
		goto trans;
	}
}
