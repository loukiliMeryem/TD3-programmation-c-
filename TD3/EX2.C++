#include<iostream>
#include<list>
#include<iterator>
using namespace std;

  void printlist(list <int> l){
    list<int>:: iterator it;
    for (it = l.begin(); it !=l.end() ; ++it) {
        cout << '\t'<<*it;
        cout<<endl;
  }}


    int main(){
    list <int> mylist;
    //Adding elements to the list using push_back function
    for(int i=0; i<9;++i){
     mylist.push_back(i*2);
    }
    cout<<"my list non trie :"<<endl;
    printlist(mylist);
    // le tri à bulle (ordre croissant)
    list<int> :: iterator it1,it2;
    for (it1=mylist.begin();it1!=mylist.end();++it1)
    for (it2=next(it1);it2!=mylist.end();++it2){
        if (*it1 > *it2){
            iter_swap(it1,it2);}
    }
    cout<<"mon list trie a bulle: "<<endl;
    printlist(mylist);
    //le tri par selection (ordre croissant)
    list<int> :: iterator minElement;
    for (it1=mylist.begin();it1!=mylist.end();++it1)
    {
        minElement= it1;
        for (it2=next(it1);it2!=mylist.end();++it2){
            if (*it2 < *minElement){
                minElement=it2;}}
                if(minElement!=it1){
                    iter_swap(it1,minElement);
                }
    }
    cout<<"mon liste trie par selection :";
    printlist(mylist); 
    // le tri par insertion (ordre croissant)
    int valueToInsert;
    for ( it1 = next(mylist.begin()); it1 != mylist.end(); ++it1) {
         valueToInsert = *it1;
         it2 = prev(it1);
        while (it2 != mylist.begin() && *it2 > valueToInsert) {
            *next(it2) = *it2;
            --it2;
    
        *next(it2) = valueToInsert;}}
        cout<<"mon list trie par insertion :"<<endl;
        printlist(mylist);
        return 0;
    }