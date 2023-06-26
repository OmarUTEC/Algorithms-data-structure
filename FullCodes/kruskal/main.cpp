#include <iostream>
#include <vector>
#include "kruskal.h"

using namespace std;

int main(){
    vector<char> vertices = {'A','B','C','D','E','F','G','H'};
    vector<Edge> aristas = 
        {{'A', 'B', 1},
         {'A', 'C', 3},
         {'A', 'D', 5},
         {'B', 'D', 6},
         {'C', 'D', 4},
         {'C', 'E', 7},
         {'D', 'F', 2},
         {'E', 'F', 9},
         {'E', 'G', 4},
         {'F', 'H', 3},
         {'G', 'H', 8},
        };
        cout << "Algoritmo de kruskal"<<endl;
    vector<Edge> result = kruskal(vertices, aristas);
    for(Edge edge : result){
        cout<<edge<<endl;
    }
    
    //'A', 'B', 1
    //'D', 'F', 2
    //'A', 'C', 3
    //'F', 'H', 3
    //'C', 'D', 4
    //'E', 'G', 4
    //'C', 'E', 7
}