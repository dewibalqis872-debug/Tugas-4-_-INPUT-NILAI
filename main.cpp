#include <iostream>
using namespace std;

int main() {
    int nilai;

    cout << "==================================" << endl;
    cout << "       PROGRAM INPUT NILAI        " << endl;
    cout << "==================================" << endl;

    cout << "Masukkan Nilai: ";
    cin >> nilai;

    cout << endl;

    if (nilai < 0 || nilai > 100) {
        cout << "Nilai tidak valid!" << endl;
    }
    else if (nilai > 90) {
        cout << "Grade: A" << endl;
    }
    else if (nilai > 80) {
        cout << "Grade: B" << endl;
    }
    else if (nilai > 70) {
        cout << "Grade: C" << endl;
    }
    else {
        cout << "Grade: D" << endl;
    }

    cout << "==================================" << endl;
    cout << "          PROGRAM SELESAI         " << endl;
    cout << "==================================" << endl;

    return 0;
}
