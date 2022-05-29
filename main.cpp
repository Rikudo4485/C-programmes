/*
objectif :
calcul de polynomes dans R
 */

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct polynome_s
{
    int a,b,c;
};
typedef struct polynome_s polynome_t;

int delta_calc(polynome_t pol){
    return pol.b*pol.b-4*pol.a*pol.c;
}

void racine(vector<int> solution,polynome_t pol){
    if (delta_calc(pol)==0)
    {
        solution.push_back((-pol.b/(2*pol.a)));
    }else{
        solution.push_back((-pol.b-sqrt(delta_calc(pol)))/(2*pol.a));
        solution.push_back((-pol.b+sqrt(delta_calc(pol)))/(2*pol.a));
    }
}

void factorisation(polynome_t poly){
    //a(x-s1)(x-s2)=y
    vector<int> sol;
    racine(sol,poly);
    if (delta_calc(poly)==0)
    {
        cout << poly.a<<"(x-"<<sol[0]<<")²"<<endl;
    }else{
        cout << poly.a<<"(x-"<<sol[0]<<")(x-"<<sol[1]<<")"<<endl;
    }
}

void canonique(polynome_t poly){
    //a(x+alpha)-beta =y
    cout << poly.a<<"(x-"<< /*alpha <<*/")²+"<< /*beta<<*/ endl;
}

int main(int argc, char const *argv[])
{
    /*
    trois cas :
    -> delta <0 pas de solution
    -> delta =0 une solution
    -> delta >0 2 solution
    */

    
    return 0;
}