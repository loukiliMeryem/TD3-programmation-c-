#include<iostream>
#include<string>
#include<list>
#include<iterator>
using namespace std;
typedef struct
{
    string nom;
    string prenom;
    int age;
} Person;
 void printlist(list <Person> p){
    list<Person>:: iterator it;
    for (it = p.begin(); it !=p.end() ; ++it) {
        cout << "Nom :"<< (*it).nom  << endl;
        cout << "Prenom :"<< (*it).prenom  << endl;
        cout << "Age :"<< (*it).age  << endl;
  }}

int main (){
list<Person> population;
int n;
// saisi des personnes
cout<<"le nombre des personnes saisies :";
cin>>n;
for(int i=0;i<n;i++){
    Person person;
cout<<"nom_person"<<i+1;
cin>>person.nom;
cout<<"prenom_person"<<i+1;
cin>>person.prenom;
cout<<"age_person"<<i+1;
cin>>person.age;
population.push_back(person);}
// le tri des personnes par ordre alphabétique
  for (list<Person>::iterator it1 = population.begin(); it1 != population.end(); ++it1) {
        for (list<Person>::iterator it2 = next(it1); it2 != population.end(); ++it2) {
            if (it1->nom > it2->nom || (it1->nom == it2->nom && it1->prenom > it2->prenom)) {
                swap(*it1, *it2);
            }
        }
    }
// affichage de la population triee
printlist(population);

    return 0;
}
     
