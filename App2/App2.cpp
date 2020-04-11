#include <iostream> 
#include <time.h> 

using namespace std;

void view(const int*);
bool checkDate(int*, int);
void createVect(int*&, int, int);

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int* pA, * pB, * pC;
    bool day, mounth, year;
    pA = new int[10];
    createVect(pA, 1, 30);
    cout << "Days: " << '\t';
    view(pA);
   
    pB = new int[10];
    createVect(pB, 1, 12);
    cout << "Months: " << '\t';
    view(pB);
 
    pC = new int[10];
    createVect(pC, 1999, 2003);
    cout << "Years: " << '\t';
    view(pC);

    day = checkDate(pA,16);
    mounth = checkDate(pB, 1);
    year = checkDate(pC, 2001);
    if (day == true && mounth == true && year == true)
        cout << "You are lucky!";
    else
        cout << "Try again!";
   
    delete[]pA;
    delete[]pB;
    delete[]pC;
    return 0;
}
void view(const int* X) {
    for (int i = 0; i < 10; i++) {
        cout << X[i] << '\t';
    }
    cout << endl;
}

void createVect(int*& X, int a, int b) {
    srand((time(NULL)));
    for (int i = 0; i < 10; i++)
        X[i] = a + rand() % ((b+1)-a);
}

bool checkDate(int* X, int a) {
    for (int i = 0; i < 10; i++) {
        if (X[i] == a) {
            return true;
            break;
        }
    }
    return false;
}