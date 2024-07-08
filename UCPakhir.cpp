#include <iostream>
 using namespace std; 
 
class MasukUniversitas { 
// isi access modifier disini    ^ 
    public:
    int uangPendaftaran;
    int uangSemesterPertama;
    int uangBangunan;
    int totalBiaya; 
    // isi daftar variable yang dibutuhkan di bawah ini ^
    public:
        MasukUniversitas() {
            uangPendaftaran = 0; 
            uangSemesterPertama = 0;
            uangBangunan = 0;
            totalBiaya = 0;
            // isi nilai default variable yang dibutuhkan di bawah ini 
        }
        virtual void namaJalurMasuk() { return; } 
        virtual void hitungTotalBiaya() { return; }
        virtual void tampilkanTotalBiaya() { return; }
        virtual void input() { return; }
    // isi disini dengan fungsi virtual yang dibutuhkan 
            
        
     void setUangPendaftaran (int nilai) 
    {         
        this->uangPendaftaran = nilai; 
    }      float 
    getUangPendaftaran() {         
        return uangPendaftaran; 
    } 

    // isi setter dan getter variable yang dibutuhkan di bawah ini 
       
};

class SNBT : public MasukUniversitas { 
    public:
    virtual void namaJalurMasuk() {
        cout << "Jalur SNBP" << endl;
    }

    virtual void hitungTotalBiaya(){
        totalBiaya = uangPendaftaran + uangSemesterPertama + uangBangunan; 
    }

    virtual void tampilkanTotalBiaya(){
        cout << "Total Biaya = " << totalBiaya << endl;
        if (totalBiaya >= 45100000 ){
            cout << "Kategori : mahal" << endl;
            cout << "Rekomendasi : Dipertimbangkan" << endl;
        } else if (totalBiaya < 45100000 ){
            cout << "Kategori : sedang" << endl;
            cout << "Rekomendasi : Dipertimbangkan" << endl;
        } else{

        }
        
    }

    
        void input() {
            cout << "Masukkan Uang Pendaftaran : " << endl;
            cin >> uangPendaftaran;
            cout << "Masukkan Uang Semester pertama : " << endl;
            cin >> uangSemesterPertama;
            cout << "Masukkan Uang bangunan : " << endl;
            cin >> uangBangunan;
            
            

    }
    // isi disini untuk melengkapi class SNBT 
};  





class SNBP : public MasukUniversitas { 
    public:
    virtual void namaJalurMasuk() {
        cout << "Jalur SNBP" << endl;
    }

    virtual void hitungTotalBiaya(){
        totalBiaya = uangPendaftaran + uangSemesterPertama; 
    }

    virtual void tampilkanTotalBiaya(){
        cout << "Total Biaya = " << totalBiaya << endl;
        if (totalBiaya <= 9100000){
            cout << "Kategori : Sedang" << endl;
            cout << "Rekomendasi : Dipertimbangkan" << endl;
        } else if (totalBiaya > 9100000){
            cout << "Kategori : Mahal" << endl;
            cout << "Rekomendasi : Dipertimbangkan" << endl;
        } else{

        }
        
    }

    
        void input() {
            cout << "Masukkan Uang Pendaftaran : " << endl;
            cin >> uangPendaftaran;
            cout << "Masukkan Uang Semester pertama : " << endl;
            cin >> uangSemesterPertama;
            
            

    }
    // isi disini untuk melengkapi class SNBP 
};  





int main() { 
    int pilihan;
    
    SNBT p;
    SNBP s;
    do
    {
       cout << "1. SNBT" << endl;
       cout << "2. SNBP" << endl;
       cout << "3. keluar" << endl;
       cout << "Pilih = ";
       
       cin >> pilihan;

       switch (pilihan)
       {
        case 1 :
        p.input();
        cout << p.uangPendaftaran << endl;
        break;
        
        case 2 :
        s.input();
        cout << SNBP::hitungTotalBiaya << endl;
        break;
 
        case 3 :
        break;
        cout << "keluar" << endl;

       }

       system("pause");
       system("CLS");
       
    } while(pilihan != 3);
}
