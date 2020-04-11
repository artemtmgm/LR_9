#include <iostream> 
#include <time.h> 

using namespace std;

void view(const int*, int);
void MegNum(int*, int);
void SelNum(int*, int);
void createVect(int*&, int);

void Invert(int*, int);

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int n;
    int* pA, * pB, * pC;
    cout << "Задайте кiлькiсть елементiв: ";
    cin >> n;   
    pA = new int[n];     
    createVect(pA, n);      
    view(pA, n);
    MegNum(pA, n);
    SelNum(pA, n);
    cout << "Iнвертований ";
    Invert(pA, n);
    view(pA, n);
    cout << endl;

    cout << "Задайте кiлькiсть елементiв: ";
    cin >> n;   
    pB = new int[n];
    createVect(pB, n);
    view(pB, n);
    MegNum(pB, n);
    SelNum(pB, n);
    cout << "Iнвертований ";
    Invert(pB, n);
    view(pB, n);
    cout << endl;

    cout << "Задайте кiлькiсть елементiв: ";
    cin >> n;   
    pC = new int[n];
    createVect(pC, n);
    view(pC, n);
    MegNum(pC, n);
    SelNum(pC, n);
    cout << "Iнвертований ";
    Invert(pC, n);
    view(pC, n);

    delete[]pA;
    delete []pB;       
    delete[]pC;
    return 0;
} 
void view(const int* X, int size) {
    cout << "Масив: "<< '\t';
    for (int i = 0; i < size; i++) {
        cout << X[i] << '\t';
    }
    cout << endl;
}

void MegNum(int* X, int size) {
    cout << "Масив елементiв з протилежним знаком: " << '\t';
    for (int i = 0; i < size; i++) {
            cout << X[i]*-1 << '\t';
    }
    cout << endl;
}

void SelNum(int* X, int size) {
    cout << "Масив непарних елементiв: " << '\t';
    for (int i = 0; i < size; i++) {
      if (X[i] % 2 == 0) 
        cout << "0" << '\t';
      else 
        cout << X[i] << '\t';
    }
    cout << endl;
}

void createVect(int*& X, int size) {
    srand((time(NULL)));
    for (int i = 0; i < size; i++)
        X[i] = rand() % 21 - 10;
}


void Invert(int* X, int size) {
    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = X[i];
        X[i] = X[size - 1 - i];
        X[size - 1 - i] = temp;
    }
}