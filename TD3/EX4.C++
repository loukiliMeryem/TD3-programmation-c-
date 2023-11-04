#include<iostream>
#include<string>
#include<set>
#include<iterator>
using namespace std;
// fonction pour afficher l'ensemble
void printSet(set<int,greater<int>> S){
    set<int,greater<int>>:: iterator it;
    for(it=S.begin();it!=S.end();++it){
        cout<<*it<<" ";
        cout<<endl;
    }
}
  //fonction à deux parametres pour rechercher une valeur 
   bool containsValue(set<int,greater<int>>S, int value) {
    return S.find(value) != S.end();
}
  //fonction à trois parametres pour rechercher une valeur 
bool containsvalue(int value,set<int,greater<int>>:: iterator begin,set<int,greater<int>>:: iterator end)
   {
     while (begin!=end){
        if (*begin==value){
          return true;  
        }
        ++begin;
     }
     return false;
   }
     //la fonction principale 
  int main(){
  set<int,greater<int>> myset;
   for (int i=0;i<100;++i){
   myset.insert(i+1);
   }
   printSet(myset);
   int valueReserch;
   cout<<"entrer la valeur à rechercher :";
   cin>>valueReserch;
   bool R=containsValue(myset,valueReserch);
   if(R)
   {cout<<"la valeur a été trouvé "<<endl;}
   else 
   cout<<"la valeur n'a pas été trouvé!!!"<<endl;
   // la fonction de recherche modifiè
   bool f=containsvalue(valueReserch,myset.begin(),myset.end());
   if(f)
   {cout<<"la valeur a été trouvé par la methode de recherche modifié";}
   else
   cout<<"la valeur n'a pas été trouvé par la methode de recherche modifié!!!" ;


    return 0;
  }