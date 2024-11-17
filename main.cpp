#include <iostream>
using namespace std;
 
int main() {
   int rows; // Talabalar soni
   int cols = 20; // Har bir ismning maksimal uzunligi
   cout << "Talabalar sonini kiriting: ";
   cin >> rows;
   cin.ignore();
   char names[rows][cols];
   cout << "Iltimos, " << rows << " ta talabaning ismlarini kiriting:" << endl;
   for (int i = 0; i < rows; i++) {
       cout << "Talaba " << i + 1 << " ismi: ";
       cin.getline(names[i], cols);
   }
   cout << "\nTalabalar ismlari:" << endl;
   for (int i = 0; i < rows; i++) {
       cout << "Talaba " << i + 1 << ": " << names[i] << endl;
   }
 
   return 0;
}