
#include <iostream>
#include <random>
#include <algorithm>
#include <vector>
#include <cstdlib>
using namespace std;
int main() {
    // SUDOKU (Wybor wymiarow tablicy, wielokrotnosc 3)
    int n;
    cout << "Podaj wymiar tablicy (NxN): ";
    cin >> n;
    if (n % 3 != 0) {
        cout << "Wymiar tablicy musi byc wielokrotnoscia 3." << endl;
        return 1;
        }
    // Inicjalizacja tablicy
    else {
        vector<vector<int>> blocks(n / 3, vector<int>(n / 3));
        for (int i = 0; i < n / 3; i++) {
            for (int j = 0; j < n / 3; j++) {
                blocks[i][j] = i * (n / 3) + j + 1;
            }
        }
        // Losowe mieszanie blokow
        random_device rd;
        mt19937 g(rd());
        shuffle(blocks.begin(), blocks.end(), g);
        
    //## RANDOM N DATA
    //srand(time(NULL));
    //cin >> n;
    //for(int i=0;i<n;i++){
    //    t[i] = rand()%9;
    //    cout << t[i] << " ";
    //}
    //cout << endl;
    }
}