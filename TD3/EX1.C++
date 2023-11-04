#include<iostream>
#include<string>
using namespace std;

class  complex{ 
    private:
    double real;
    double img;
    public:
    //constructor
    complex(){}
    complex(double r,double i);
    float get_real();
    float get_img();
    void operator+(complex);
    void  operator-(complex);
    void  operator*(complex);
    void  operator/(complex);

};
complex::complex(double r,double i){
    real=r;
    img=i;}
    float complex::get_real() {return real;}
    float complex::get_img(){return img;}
     //redéfinition de l'opérateur +
    void complex::operator + (complex c)
{
    double resultat_real= real+c.real;
    double resultat_img = img+c.img;
    cout<<"la partie reelle du resultat de l'addition est:"<<resultat_real<<endl;
    cout<<"la partie imaginaire du resultat de l'addition est:"<<resultat_img<<endl;
}
 //redéfinition de l'opérateur -
 void complex:: operator-(complex j){
 double resultat_real= real-j.real;
 double resultat_img= img-j.img;
 cout<<"la partie reelle du resultat de la soustraction est : "<<resultat_real<<endl;
 cout<<"la partie imaginaire du resultat de la soustraction est : "<<resultat_img<<endl;}
 //redéfinition de l'opérateur *
    void complex:: operator*(complex a){
      double resultat_real= real*a.real -img*a.img;
      double resultat_img= real*a.img + img*a.real ;
      cout << "La partie reele du resultat de multiplication est : "<<resultat_real<<endl;
      cout << "La partie imaginaire du resultat de multiplication est : "<<resultat_img<<endl;}
      //redéfinition de l'opérateur /
    void complex:: operator/(complex f){
           double resultat_real= real/f.real -img/f.img;
           double resultat_img= real/f.img + img/f.real ; 
         cout<<"la partie reelle du résultat de la division est :"<<resultat_real<<endl;
         cout<<"la partie imaginaire du résultat de la division est :"<<resultat_img<<endl;}
     
       int main(){
       double real1,real2,img1,img2;
       cout<<"donnez la partie reelle du nombre complex 1 :";
       cin>>real1;
       cout<<"donnez la partie imaginaire du nombre complex 1 :";
       cin>>img1;

       cout<<"donnez la partie relle du nombre complex 2 :";
       cin>>real2;
       cout<<"donnez la partie imaginaire du nombre complex 2 :";
       cin>>img2;

       complex Z1(real1,img1);
       complex Z2(real2,img2);

    char operation;
    cout<<"choisir une opereration (+,-,*,/)";
    cin>>operation;

       switch(operation){
        case '+' :  Z1+Z2;
        break;
        case '-' :  Z1-Z2;
        break;
        case '*' : Z1*Z2;
        break;
        case '/' : Z1/Z2;
        break;
        default:
        cout<<"operation non valide";
        break;
       }
        return 0;
       }

