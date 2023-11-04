#include<iostream>
using namespace std;

template<class T>
T puissance(T &x) {
    return (x * x);}
int main() {

  int a;
  cout << "Saisir un nombre : ";
  cin >> a;
  // On utilise la fonction template pour afficher le carré de l'entier saisi.
  cout<<"Le carré de votre nombre est : "<<puissance(a)<<endl;



    return 0;}