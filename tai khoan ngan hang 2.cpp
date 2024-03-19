#include <iostream>
#include <string>

using namespace std;

class TaiKhoan {
private:
    string chuSoHuu;
    double soDuVND;

public:
    TaiKhoan(string chuSoHuu, double soDuVND) : chuSoHuu(chuSoHuu), soDuVND(soDuVND) {}

    string getChuSoHuu() const {
        return chuSoHuu;
    }

    double getSoDuVND() const {
        return soDuVND;
    }

    void guiTien(double soTienVND) {
        soDuVND += soTienVND;
    }

    void rutTien(double soTienVND) {
        if (soTienVND > soDuVND) {
            cout << "So du khong du de rut" << endl;
        } else {
            soDuVND -= soTienVND;
        }
    }

    double getSoDuUSD() const {
        return soDuVND / 24613;
    }
};

int main() {
    TaiKhoan taiKhoan("Truong Van Giang", 1000000000);

    cout << "Chu so huu tai khoan: " << taiKhoan.getChuSoHuu() << endl;
    cout << "So du tai khoan: " << taiKhoan.getSoDuVND() << " VND (" << taiKhoan.getSoDuUSD() << " USD)" << endl;

    taiKhoan.guiTien(5000000);
    taiKhoan.rutTien(350000);
    taiKhoan.rutTien(200000);

    return 0;
}

