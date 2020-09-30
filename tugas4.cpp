#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char sentence[100];
    // masukkan nama
    // tiap kata masukkan dalam array
    // array di tampilkan secara terbalik
    cout << "Masukkan kalimat : ";
    cin >> sentence;
    int x = strlen(sentence);
    
    for (int i = x; i >= 0; i--) {
        cout << sentence[i];
    }

    return 0;
}