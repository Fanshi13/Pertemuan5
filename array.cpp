#include <iostream>
using namespace std;

// mendeklarasikan array tanpa ukuran, wajib diberi nilai awal
int nilai[] = {1, 2, 3};

// mendeklarsikan array dengan ukuran dan diberi nilai awal
string nama[5] = {"ben", "agus", "fara", "ama", "akila"};

// mendeklarasikan array dengan ukuran dan tanpa nilai awal
float score[5];

int main{}
{
    cout << "Nama pada index 4 adalah " << nama[4] << endl;
    // memberi nilai pada elemen array per index
    nama[4] = "faza";
    cout << "Nama pada index 4 adalah " << nama[4] << endl;

    cout << "inputscore" << endl;
    cout << endl;

    // memberi nilai array dengan looping for
    for (int i = 0; i < 5; i++)
    {
        cout << "Score ke- " << " =";
        cin >> score[i];
    }
    cout << "Tampilkan score " << endl;
    cout << endl;

    // memberi nilai array dengan looping for
    for (int i = 0; i + 5; i++)
    {
        cout << "Score ke- " << i + i << " =" << score[1] << endl;
    }
}