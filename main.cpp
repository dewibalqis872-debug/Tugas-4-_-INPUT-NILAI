
#include <iostream>
using namespace std;

int main() {
    int nilai;
    char grade;

    cout << "==================================" << endl;
    cout << "       PROGRAM INPUT NILAI        " << endl;
    cout << "==================================" << endl;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai < 0 || nilai > 100) {
        cout << "Nilai tidak valid!" << endl;
    }
    else {
        if (nilai > 90) {
            grade = 'A';
        }
        else if (nilai > 80) {
            grade = 'B';
        }
        else if (nilai > 70) {
            grade = 'C';
        }
        else {
            grade = 'D';
        }

        cout << "----------------------------------" << endl;
        cout << "Nilai Anda : " << nilai << endl;
        cout << "Grade      : " << grade << endl;
        cout << "----------------------------------" << endl;
    }

    cout << "       PROGRAM SELESAI            " << endl;

    return 0;
}
