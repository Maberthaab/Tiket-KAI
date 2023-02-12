
#include <iostream> // untuk mendeklarasikan bahasa c++
#include <conio.h> //untuk pemanggilan getch
#include <cstdlib> //untuk menerapkan CLS (clear screen)
#include <fstream> //untuk menerapkan varfile (akses file)
#include <windows.h> //untuk memanggil sistem

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void cetakgaris(int n) //untuk menampilkan garis
 {  int i;
  for(i=0;i<=n;i++)
       cout<<"=";cout<<"\n";
 }

struct nama{  //untuk memberi spasi pada nama
 string nama, tujuan, bangku, tanggal;
}nm; 

void loadin(){ //untuk menampilkan loading
  cout<<"\nLoading\t";
  for(int l=0;l<10;l++){
  Sleep(500); cout<<"±";
}
}

void loading(){ //untuk menampilkan loading
 cout<<"\nTerima Kasih\t";
 for(int l=0;l<10;l++){
  Sleep(500); cout<<"±";
 }
}

int main(int argc,  char *argv[]) 
{
char nama[20],berangkat[20],jawab,tujuan[20],namakereta, bangku, tanggal;

int harga, total, kelas, a, b,anak, dewasa,id;
string nama_kereta, tipe;
ofstream varfile;

  awal:
loadin();
system ("CLS");  
  cetakgaris(79); //pemanggilan function
  cout<<"\t\t\t       Selamat Datang"<<endl;
  cout<<"\t\t\t     PT. Kereta Api KEL.3    \n"<<endl;
  cout<<"\t\t\t      Created Kelompok 3   "<<endl;
  cetakgaris(79); //pemanggilan function
  cout<<endl;
  cout<<"\n\t\t*--------------------*--------------------*";
  cout<<"\n\t\t| Nama Kereta        | Jam Berangkat      |";
  cout<<"\n\t\t|--------------------|--------------------|";
  cout<<"\n\t\t| 1. K.A Bandara     |       08.30        |";
  cout<<"\n\t\t|--------------------|--------------------|";
  cout<<"\n\t\t| 2. Putri Deli      |       10.00        |";
  cout<<"\n\t\t|--------------------|--------------------|";  
  cout<<"\n\t\t| 3. Siantar Ekspress|       12.30        |";
  cout<<"\n\t\t|--------------------|--------------------|";  
  cout<<"\n\t\t| 4. Sribilah        |       14.00        |";
  cout<<"\n\t\t|--------------------|--------------------|";  
  cout<<"\n\t\t| 5. Sri Lelawangsa  |       16.30        |";
  cout<<"\n\t\t*--------------------*--------------------*";
  
  cout<<endl;
  cout<<"\n Pembelian atas nama   : ";  cin.sync();
  getline (cin, nm.nama);
  cout<<"\nNomor Identitas / KTP  : "; cin>>id;
  cout<<"\n Kode Kereta (1-5)     : "; cin>>namakereta;
  cout<<endl;
  system ("CLS");
  switch (namakereta){
   case '1':{
   
    cout<<" 1. Ekonomi\n 2. Eksekutif\n";cout<<endl;
    cout<<" Pilih kelas kereta : ";cin>>kelas;
if (kelas == 1){
     harga=25000;
     system("CLS");
     cout<<"\n Tujuan : "; cin.sync();
     getline(cin, nm.tujuan);

     cout<<"\n Nomor Bangku : "; cin.sync();
     getline(cin, nm.bangku);
          
     cout<<"\n Tanggal Keberangkatan : "; cin.sync();
     getline(cin, nm.tanggal);
     
     cout<<"\n Kategori \n";
     cout<<" Tiket Dewasa : ";cin>>a;
     cout<<" Tiket Anak-anak : "; cin>>b;
     anak=harga*b;
     dewasa=harga*a;
     total=dewasa+anak;
    cout<<"Total pembayaran : Rp "<<total<<endl;
     varfile.open("Tiket.txt");
     
     if (varfile == NULL){ //varfile ke 1
      cout<<"File failed";
     }
     else{
varfile<<"=========================================================="<<endl;
varfile<<"\t\t Bukti Pembayaran Tiket Kereta Api"<<endl;
varfile<<"=========================================================="<<endl;
varfile<<" Atas nama      : "<<nm.nama<<endl;
varfile<<" Nomer Identitas: "<<id<<endl;
varfile<<" Nama Kereta    : Medan"<<endl;
varfile<<" Keberangkatan  : jam 08.30"<<endl;
varfile<<" Kelas Kereta   : Eksekutif"<<endl;
varfile<<" Nomor Bangku   : "<<nm.bangku<<endl;
varfile<<" Tanggal        : "<<nm.tanggal<<endl;
varfile<<" Tujuan         : "<<nm.tujuan<<endl;
varfile<<" Tiket untuk\n";
varfile<<" \t1. Dewasa\t: "<<a<<" tiket"<<endl;
varfile<<" \t2. Anak-anak\t: "<<b<<" tiket"<<endl;
varfile<<endl;
varfile<<" Harga satuan\n";
varfile<<"  Dewasa\t: Rp"<<harga<<endl;
varfile<<"  Anak-anak\t: Rp"<<harga*0.5<<endl;
varfile<<" Jadi total pembayaran anda adalah Rp "<<total<<endl;
varfile.close();
     } //tutup varfile ke 1
    }
    else if (kelas == 2){
     harga=45000;
     system("CLS");
     cout<<"\n Tujuan : "; cin.sync();
     getline(cin, nm.tujuan);
     cout<<"\n Nomor Bangku : "; cin.sync();
     getline(cin, nm.bangku);
     cout<<"\n Tanggal Keberangkatan : "; cin.sync();
     getline(cin, nm.tanggal);
     cout<<"\n Kategori\n";
     cout<<" Tiket Dewasa : ";cin>>a;
     cout<<" Tiket Anak-anak : "; cin>>b;
     anak=harga*b;
     dewasa=harga*a;
     total=dewasa+anak;
    cout<<"Total pembayaran : Rp "<<total<<endl;
     varfile.open("Tiket.txt");
     
     if (varfile == NULL){ //varfile ke 2
      cout<<"File failed";
    }
     else{
varfile<<"=========================================================="<<endl;
varfile<<"\t\t Bukti Pembayaran Tiket Kereta Api"<<endl;
varfile<<"=========================================================="<<endl;
varfile<<" Atas nama      : "<<nm.nama<<endl;
varfile<<" Nomer Identitas: "<<id<<endl;
varfile<<" Nama Kereta    : Medan"<<endl;
varfile<<" Keberangkatan  : jam 08.30"<<endl;
varfile<<" Kelas Kereta   : Ekonomi"<<endl;
varfile<<" Nomor Bangku   : "<<nm.bangku<<endl;
varfile<<" Tanggal        : "<<nm.tanggal<<endl;
varfile<<" Tujuan         : "<<nm.tujuan<<endl;
varfile<<" Tiket untuk\n";
varfile<<" \t1. Dewasa\t: "<<a<<" tiket"<<endl;
varfile<<" \t2. Anak-anak\t: "<<b<<" tiket"<<endl;
varfile<<endl;
varfile<<" Harga satuan\n";
varfile<<"  Dewasa\t: Rp"<<harga<<endl;
varfile<<"  Anak-anak\t: Rp"<<harga*0.5<<endl;
varfile<<" Jadi total pembayaran anda adalah Rp "<<total<<endl;
varfile.close();
     } //tutup varfile ke 2
    }
    else {
     system("CLS");
     goto awal;}
   break;
   }
   case '2':{
    cout<<" 1. Ekonomi\n 2. Eksekutif\n";
    cout<<" Pilih kelas kereta : ";cin>>kelas;
    if (kelas == 1){
     harga=25000;
     system("CLS");
     cout<<"\n Tujuan : "; cin.sync();
     getline(cin, nm.tujuan);
     cout<<"\n Nomor Bangku : "; cin.sync();
     getline(cin, nm.bangku);
     cout<<"\n Tanggal Keberangkatan : "; cin.sync();
     getline(cin, nm.tanggal);
     cout<<"\n Kategori \n";
     cout<<" Tiket Dewasa : ";cin>>a;
     cout<<" Tiket Anak-anak : "; cin>>b;
     anak=harga*b;
     dewasa=harga*a;
     total=dewasa+anak;
     cout<<"Total pembayaran : Rp "<<total<<endl;
     varfile.open("Tiket.txt");
     
     if (varfile == NULL){ //varfile ke 3
      cout<<"File failed";
     }
     else{
varfile<<"=========================================================="<<endl;
varfile<<"\t\t Bukti Pembayaran Tiket Kereta Api"<<endl;
varfile<<"=========================================================="<<endl;
varfile<<" Atas nama      : "<<nm.nama<<endl;
varfile<<" Nomer Identitas: "<<id<<endl;
varfile<<" Nama Kereta    : T. Balai"<<endl;
varfile<<" Keberangkatan  : jam 10.00"<<endl;
varfile<<" Kelas Kereta   : Ekonomi"<<endl;
varfile<<" Nomor Bangku   : "<<nm.bangku<<endl;
varfile<<" Tanggal        : "<<nm.tanggal<<endl;
varfile<<" Tujuan         : "<<nm.tujuan<<endl;
varfile<<" Tiket untuk\n";
varfile<<" \t1. Dewasa\t: "<<a<<" tiket"<<endl;
varfile<<" \t2. Anak-anak\t: "<<b<<" tiket"<<endl;
varfile<<endl;
varfile<<" Harga satuan\n";
varfile<<"  Dewasa\t: Rp"<<harga<<endl;
varfile<<"  Anak-anak\t: Rp"<<harga*0.5<<endl;
varfile<<" Jadi total pembayaran anda adalah Rp "<<total<<endl;
varfile.close();
     } //tutup varfile ke 3
    }
    else if(kelas==2) {
     harga=45000;
     system("CLS");
     cout<<"\n Tujuan : ";cin.sync();
     getline(cin, nm.tujuan);
     cout<<"\n Nomor Bangku : "; cin.sync();
     getline(cin, nm.bangku);
     cout<<"\n Tanggal Keberangkatan : "; cin.sync();
     getline(cin, nm.tanggal);
     cout<<"\n Kategori \n";
     cout<<" Tiket Dewasa : ";cin>>a;
     cout<<" Tiket Anak-anak : "; cin>>b;
     anak=harga*b;
     dewasa=harga*a;
     total=dewasa+anak;
     cout<<"Total pembayaran : Rp "<<total<<endl;
     varfile.open("Tiket.txt");
     
     if (varfile == NULL){ //varfile ke 4
      cout<<"File failed";
     }
     else{
varfile<<"=========================================================="<<endl;
varfile<<"\t\t Nota pemesanan Tiket Kereta Api"<<endl;
varfile<<"=========================================================="<<endl;
varfile<<" Atas nama      : "<<nm.nama<<endl;
varfile<<" Nomer Identitas: "<<id<<endl;
varfile<<" Nama Kereta    : T. Balai"<<endl;
varfile<<" Keberangkatan  : jam 10.00"<<endl;
varfile<<" Kelas Kereta   : Eksekutif"<<endl;
varfile<<" Nomor Bangku   : "<<nm.bangku<<endl;
varfile<<" Tanggal        : "<<nm.tanggal<<endl;
varfile<<" Tujuan         : "<<nm.tujuan<<endl;
varfile<<" Tiket untuk\n";
varfile<<" \t1. Dewasa\t: "<<a<<" tiket"<<endl;
varfile<<" \t2. Anak-anak\t: "<<b<<" tiket"<<endl;
varfile<<endl;
varfile<<" Harga satuan\n";
varfile<<"  Dewasa\t: Rp"<<harga<<endl;
varfile<<"  Anak-anak\t: Rp"<<harga*0.5<<endl;
varfile<<" Jadi total pembayaran anda adalah Rp "<<total<<endl;
varfile.close();
     } //tutup varfile ke 4
    }
   else {
     system("CLS");
     goto awal;}
   break;
   }
   case'3':{
    cout<<" 1. Ekonomi\n 2. Eksekutif\n";
    cout<<" Pilih kelas kereta : ";cin>>kelas;
    if (kelas == 1){
     harga=25000;
     system("CLS");
     cout<<"\n Tujuan : ";cin.sync();
     getline(cin, nm.tujuan);
     cout<<"\n Nomor Bangku : "; cin.sync();
     getline(cin, nm.bangku);
     cout<<"\n Tanggal Keberangkatan : "; cin.sync();
     getline(cin, nm.tanggal);
     cout<<"\n Kategori \n";
     cout<<" Tiket Dewasa : ";cin>>a;
     cout<<" Tiket Anak-anak : "; cin>>b;
     anak=harga*b;
     dewasa=harga*a;
     total=dewasa+anak;
     cout<<"Total pembayaran : Rp "<<total<<endl;
     varfile.open("Tiket.txt");
     
     if (varfile == NULL){ //varfile ke 5
      cout<<"File failed";
     }
     else{
varfile<<"=========================================================="<<endl;
varfile<<"\t\t Nota pemesanan Tiket Kereta Api"<<endl;
varfile<<"=========================================================="<<endl;
varfile<<" Atas nama      : "<<nm.nama<<endl;
varfile<<" Nomer Identitas: "<<id<<endl;
varfile<<" Nama Kereta    : P. Siantar"<<endl;
varfile<<" Keberangkatan  : jam 12.30"<<endl;
varfile<<" Kelas Kereta   : Ekonomi"<<endl;
varfile<<" Nomor Bangku   : "<<nm.bangku<<endl;
varfile<<" Tanggal        : "<<nm.tanggal<<endl;
varfile<<" Tujuan         : "<<nm.tujuan<<endl;
varfile<<" Tiket untuk\n";
varfile<<" \t1. Dewasa\t: "<<a<<" tiket"<<endl;
varfile<<" \t2. Anak-anak\t: "<<b<<" tiket"<<endl;
varfile<<endl;
varfile<<" Harga satuan\n";
varfile<<"  Dewasa\t: Rp"<<harga<<endl;
varfile<<"  Anak-anak\t: Rp"<<harga*0.5<<endl;
varfile<<" Jadi total pembayaran anda adalah Rp "<<total<<endl;
varfile.close();
     } //tutup varfile ke 5
    }
    else if(kelas==2) {
     harga=45000;
     system("CLS");
     cout<<"\n Tujuan : ";cin.sync();
     getline(cin, nm.tujuan);
     cout<<"\n Nomor Bangku : "; cin.sync();
     getline(cin, nm.bangku);
     cout<<"\n Tanggal Keberangkatan : "; cin.sync();
     getline(cin, nm.tanggal);
     cout<<"\n Kategori \n";
     cout<<" Tiket Dewasa : ";cin>>a;
     cout<<" Tiket Anak-anak : "; cin>>b;
     anak=harga*b;
     dewasa=harga*a;
     total=dewasa+anak;
     cout<<"Total pembayaran : Rp "<<total<<endl;
     varfile.open("Tiket.txt");
     
     if (varfile == NULL){ //varfile ke 6
      cout<<"File failed";
     }
     else{
varfile<<"=========================================================="<<endl;
varfile<<"\t\t Nota pemesanan Tiket Kereta Api"<<endl;
varfile<<"=========================================================="<<endl;
varfile<<" Atas nama      : "<<nm.nama<<endl;
varfile<<" Nomer Identitas: "<<id<<endl;
varfile<<" Nama Kereta    : P. Siantar"<<endl;
varfile<<" Keberangkatan  : jam 12.30"<<endl;
varfile<<" Kelas Kereta   : Eksekutif"<<endl;
varfile<<" Nomor Bangku   : "<<nm.bangku<<endl;
varfile<<" Tanggal        : "<<nm.tanggal<<endl;
varfile<<" Tujuan         : "<<nm.tujuan<<endl;
varfile<<" Tiket untuk\n";
varfile<<" \t1. Dewasa\t: "<<a<<" tiket"<<endl;
varfile<<" \t2. Anak-anak\t: "<<b<<" tiket"<<endl;
varfile<<endl;
varfile<<" Harga satuan\n";
varfile<<"  Dewasa\t: Rp"<<harga<<endl;
varfile<<"  Anak-anak\t: Rp"<<harga*0.5<<endl;
varfile<<" Jadi total pembayaran anda adalah Rp "<<total<<endl;
varfile.close();
     } //tutup varfile ke 6
    }
    else {
     system("CLS");
     goto awal;}
   break;
   }
   case '4':{
    cout<<" 1. Ekonomi\n 2. Eksekutif\n";
    cout<<" Pilih kelas kereta : ";cin>>kelas;
    if (kelas == 1){
     harga=25000;
     system("CLS");
     cout<<"\n Tujuan : ";cin.sync();
     getline(cin, nm.tujuan);
     cout<<"\n Nomor Bangku : "; cin.sync();
     getline(cin, nm.bangku);
     cout<<"\n Tanggal Keberangkatan : "; cin.sync();
     getline(cin, nm.tanggal);
     cout<<"\n Kategori \n";
     cout<<" Tiket Dewasa : ";cin>>a;
     cout<<" Tiket Anak-anak : "; cin>>b;
     anak=harga*b;
     dewasa=harga*a;
     total=dewasa+anak;
     cout<<"Total pembayaran : Rp "<<total<<endl;
     varfile.open("Tiket.txt");
     
     if (varfile == NULL){ //varfile ke 7
      cout<<"File failed";
     }
 else{
varfile<<"=========================================================="<<endl;
varfile<<"\t\t Nota pemesanan Tiket Kereta Api"<<endl;
varfile<<"=========================================================="<<endl;
varfile<<" Atas nama      : "<<nm.nama<<endl;
varfile<<" Nomer Identitas: "<<id<<endl;
varfile<<" Nama Kereta    : T. Tinggi"<<endl;
varfile<<" Keberangkatan  : jam 14.00"<<endl;
varfile<<" Kelas Kereta   : Ekonomi"<<endl;
varfile<<" Nomor Bangku   : "<<nm.bangku<<endl;
varfile<<" Tanggal        : "<<nm.tanggal<<endl;
varfile<<" Tujuan         : "<<nm.tujuan<<endl;
varfile<<" Tiket untuk\n";
varfile<<" \t1. Dewasa\t: "<<a<<" tiket"<<endl;
varfile<<" \t2. Anak-anak\t: "<<b<<" tiket"<<endl;
varfile<<endl;
varfile<<" Harga satuan\n";
varfile<<"  Dewasa\t: Rp"<<harga<<endl;
varfile<<"  Anak-anak\t: Rp"<<harga*0.5<<endl;
varfile<<" Jadi total pembayaran anda adalah Rp "<<total<<endl;
varfile.close();
     } //tutup varfile ke 7
    }
    else if (kelas==2){
     harga=45000;
     system("CLS");
     cout<<"\n Tujuan : ";cin.sync();
     getline(cin, nm.tujuan);
     cout<<"\n Nomor Bangku : "; cin.sync();
     getline(cin, nm.bangku);
     cout<<"\n Tanggal Keberangkatan : "; cin.sync();
     getline(cin, nm.tanggal);
     cout<<"\n Kategori \n";
     cout<<" Tiket Dewasa : ";cin>>a;
     cout<<" Tiket Anak-anak : "; cin>>b;
     anak=harga*b;
     dewasa=harga*a;
     total=dewasa+anak;
     cout<<"Total pembayaran : Rp "<<total<<endl;
     varfile.open("Tiket.txt");
     
     if (varfile == NULL){ //varfile ke 8
      cout<<"File failed";
     }
     else{
varfile<<"=========================================================="<<endl;
varfile<<"\t\t Nota pemesanan Tiket Kereta Api"<<endl;
varfile<<"=========================================================="<<endl;
varfile<<" Atas nama      : "<<nm.nama<<endl;
varfile<<" Nomer Identitas: "<<id<<endl;
varfile<<" Nama Kereta    : T. Tinggi"<<endl;
varfile<<" Keberangkatan  : jam 14.00"<<endl;
varfile<<" Kelas Kereta   : Eksekutif"<<endl;
varfile<<" Nomor Bangku   : "<<nm.bangku<<endl;
varfile<<" Tanggal        : "<<nm.tanggal<<endl;
varfile<<" Tujuan         : "<<nm.tujuan<<endl;
varfile<<" Tiket untuk\n";
varfile<<" \t1. Dewasa\t: "<<a<<" tiket"<<endl;
varfile<<" \t2. Anak-anak\t: "<<b<<" tiket"<<endl;
varfile<<endl;
varfile<<" Harga satuan\n";
varfile<<"  Dewasa\t: Rp"<<harga<<endl;
varfile<<"  Anak-anak\t: Rp"<<harga*0.5<<endl;
varfile<<" Jadi total pembayaran anda adalah Rp "<<total<<endl;
varfile.close();
     } //tutup varfile ke 8
    }
    else {
     system("CLS");
     goto awal;}
   break;
   }
   case '5':{
    cout<<" 1. Ekonomi\n 2. Eksekutif\n";
    cout<<" Pilih kelas kereta : ";cin>>kelas;
    if (kelas == 1){
     harga=25000;
     system("CLS");
     cout<<"\n Tujuan : "; cin>>tujuan;
    cout<<"\n Nomor Bangku : "; cin>>bangku;
     cout<<"\n Tanggal Keberangkatan : "; cin>>tanggal;
     cout<<"\n Kategori \n";
     cout<<" Tiket Dewasa : ";cin>>a;
     cout<<" Tiket Anak-anak : "; cin>>b;
     anak=harga*b;
     dewasa=harga*a;
     total=dewasa+anak;
    cout<<"Total pembayaran : Rp "<<total<<endl;
     varfile.open("Tiket.txt");
     
     if (varfile == NULL){ //varfile ke 9
      cout<<"File failed";
     }
     else{
varfile<<"=========================================================="<<endl;
varfile<<"\t\t Nota pemesanan Tiket Kereta Api"<<endl;
varfile<<"=========================================================="<<endl;
varfile<<" Atas nama      : "<<nm.nama<<endl;
varfile<<" Nomer Identitas: "<<id<<endl;
varfile<<" Nama Kereta    : Pakam"<<endl;
varfile<<" Keberangkatan  : jam 16.30"<<endl;
varfile<<" Kelas Kereta   : Ekonomi"<<endl;
varfile<<" Nomor Bangku   : "<<nm.bangku<<endl;
varfile<<" Tanggal        : "<<nm.tanggal<<endl;
varfile<<" Tujuan         : "<<nm.tujuan<<endl;
varfile<<" Tiket untuk\n";
varfile<<" \t1. Dewasa\t: "<<a<<" tiket"<<endl;
varfile<<" \t2. Anak-anak\t: "<<b<<" tiket"<<endl;
varfile<<endl;
varfile<<" Harga satuan\n";
varfile<<"  Dewasa\t: Rp"<<harga<<endl;
varfile<<"  Anak-anak\t: Rp"<<harga*0.5<<endl;
varfile<<" Jadi total pembayaran anda adalah Rp "<<total<<endl;
varfile.close();
     } //tutup varfile ke 9
    }
    else if(kelas == 2) {
     harga=25000;
     system("CLS");
     cout<<"\n Tujuan : "; cin>>tujuan;
     cout<<"\n Nomor Bangku : "; cin>>bangku;
     cout<<"\n Tanggal Keberangkatan : "; cin>>tanggal;
     cout<<"\n Kategori \n";
     cout<<" Tiket Dewasa : ";cin>>a;
     cout<<" Tiket Anak-anak : "; cin>>b;
     anak=harga*b;
dewasa=harga*a;
total=dewasa+anak;
cout<<"Total pembayaran : Rp "<<total<<endl;
   varfile.open("Tiket.txt");
   if (varfile == NULL){ //varfile ke 10
   cout<<"File failed";
 }
else{
varfile<<"=========================================================="<<endl;
varfile<<"\t\t Nota pemesanan Tiket Kereta Api"<<endl;
varfile<<"=========================================================="<<endl;
varfile<<" Atas nama      : "<<nm.nama<<endl;
varfile<<" Nomer Identitas: "<<id<<endl;
varfile<<" Nama Kereta    : Pakam"<<endl;
varfile<<" Keberangkatan  : jam 16.30"<<endl;
varfile<<" Kelas Kereta   : Eksekutif"<<endl;
varfile<<" Nomor Bangku   : "<<nm.bangku<<endl;
varfile<<" Tanggal        : "<<nm.tanggal<<endl;
varfile<<" Tujuan         : "<<nm.tujuan<<endl;
varfile<<" Tiket untuk\n";
varfile<<" \t1. Dewasa\t: "<<a<<" tiket"<<endl;
varfile<<" \t2. Anak-anak\t: "<<b<<" tiket"<<endl;
varfile<<endl;
varfile<<" Harga satuan\n";
varfile<<"  Dewasa\t: Rp"<<harga<<endl;
varfile<<"  Anak-anak\t: Rp"<<harga*0.5<<endl;
varfile<<" Jadi total pembayaran anda adalah Rp "<<total<<endl;
      varfile.close();
     } //tutup varfile ke 10
    }
    else {
     system("CLS");
     goto awal;}
   break;
   }
   default :{
   system("CLS");
   goto awal;
   }
   
  } //tutup switch
  
cout<<"\n Sudah benarkan data yang anda masukkan [Y/T]?"; cin>>jawab;
   if(jawab=='Y'||jawab=='y'){
    system("CLS");
    loading();
   }
   else{
    system("CLS");
    goto awal;
   }

 getch ();
 return 0;

}

 
