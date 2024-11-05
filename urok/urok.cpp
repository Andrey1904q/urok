#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include "Header.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(2151);
    ofstream fout;
    ifstream fin;
    Student Ivan = { 1, "Рюрикович", "Иван", "Васильевич", 'м', 18, 1.99 };
    Ivan.f = "Грозный";
    cout_(Ivan);
    fout_(Ivan);
}
