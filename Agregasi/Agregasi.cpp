#include <iostream>
#include <vector>
using namespace std;

#include "anak.H"
#include "ibu.H"

int main() {
    ibu* varIbu = new ibu ("dini");
    ibu* varIbu2 = new ibu ("novi");
    anak* varAnak1 = new anak ("adrian");
    anak* varAnak2 = new anak ("ardin");
    anak* varAnak3 = new anak ("ais")

    varIbu->tambahAnak(varAnak1);
    varIbu->tambahAnak(varAnak2);
    varibu2->tambahAnak(varAnak3);
    varibu2->tambahAnak(varAnak1);

    varIbu->cetakAnak();
    varibu2->cetakAnak();

    delete varIbu;
    delete varIbu2;
    delete varAnak1;
    delete varAnak2;
    delete varAnak3;

    system("pause");

    return 0;
};