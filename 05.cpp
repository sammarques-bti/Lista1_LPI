#include "05.h"
#include <vector>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;


std::pair<int,int> min_max( int V[], size_t n ) {
    int max = 0;
    int min = 0;

    for (int i = 1; i<n; i++) {
        std::cout << "I: " << i << endl;
        if (V[i]>=V[max]){
            max = i;
            //cout << "Encontrou um novo máximo" << endl;
        }
        if (V[min]>V[i]){
            min = i;
            //cout << "Encontrou um novo mínimo" << endl;
        }
    }

    return { min, max };
}

int main(void) {
    //std::vector<int> vec;
    pair<int,int> p;
    int V[] = {5,4,1,3,1,10,7,10,6,8};

    

    p = min_max(V,10);  

    cout << "min: "<< p.first << "max: " << p.second;

    return 0;
}