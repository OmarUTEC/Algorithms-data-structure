#include <iostream>
#include <vector>
#include <chrono>
#include <ctime>
#include <unistd.h>

using namespace std;

const string alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789   ";

string generarTexto(size_t N){    
    string resultado = "";
    for (size_t i = 0; i < N; i++)
        resultado += alfabeto[rand() %  alfabeto.size()];
    return resultado;
}

int* buildPositions(string pattern){
    int* positions = new int[256];
    for(int i=0;i<256;i++)
        positions[i] = -1;
    for(int i=0;i<pattern.size();i++){
        positions[(int)pattern[i]] = i;
    }
    return positions;
}

vector<int> testInocente(string Texto, string Patron)
{    
    auto start = std::chrono::steady_clock::now();
    
    int N = Texto.size();
    int M = Patron.size();
    vector<int> result;

    for (int i = 0; i <= N - M; i++) {
        int j;
        for (j = 0; j < M; j++)
            if (Texto[i + j] != Patron[j])
                break;
 
        if (j == M)  // Si Patron[0...M-1] = Texto[i, i+1, ...i+M-1]
            result.push_back(i);
    }

    auto end = std::chrono::steady_clock::now();
    cout << "Inocente time in microseconds: "
        << chrono::duration_cast<chrono::microseconds>(end - start).count()
        << " ms" << endl;
    return result;
}


vector<int> testBoyerMoore(string Texto, string Patron)
{    
    auto start = std::chrono::steady_clock::now();
    vector<int> result;

    int* posiciones = buildPositions(Patron);
    int s = 0; // shift of the pattern with respect to text
    int n = Texto.length();
    int m = Patron.length();

    while(s <= (n - m)){
        int j = m - 1;

        while(j >= 0 && Patron[j] == Texto[s+j])
            j--;

        if(j < 0){
            result.push_back(s);
            s += (s + m < n)? m - posiciones[Texto[s + m]] : 1;
        }else{
            s += max(1, j - posiciones[Texto[s + j]]);
        }
    }

    delete [] posiciones;

    auto end = std::chrono::steady_clock::now();
    cout << "BoyerMoore time in microseconds: "
        << chrono::duration_cast<chrono::microseconds>(end - start).count()
        << " ms" << endl;
    return result;
}


void verificarResultado(vector<int> result1, vector<int> result2)
{
    if(result1.size() != result2.size())
        cerr <<"Error!! el resultado no es el mismo\n";
    for(int i=0;i<result1.size();i++)
        if(result1[i] != result2[i])
            cerr <<"Error!! el resultado no es el mismo\n";
}

void imprimirResultado(const string& Texto, const string& Patron, const vector<int>& result, const string& method){
    cout << method << " coinicide en los indices: ";
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " (";
        for(int j = 0; j < Patron.size(); j++) {
            cout << Texto[result[i] + j];
        }
        cout << "), ";
    }
    cout << endl;
}

/*
int main()
{    
    srand(time(NULL));    
    size_t N = 100;//100,1000,10000,100000,1000000
    int m = 10;

    string Texto = "AABAACAADAABAABA"; //GCGATGCCTA
    string Patron = "AABA"; //TATATG

    //string Texto = "GCGATGCCTA"; 
    //string Patron = "TATATG"; 
    
    vector<int> result1 = testInocente(Texto, Patron);
    imprimirResultado(Texto, Patron, result1, "Intuitivo");
    
    vector<int> result2 = testBoyerMoore(Texto, Patron);
    imprimirResultado(Texto, Patron, result2, "BoyerMoore");
    
    verificarResultado(result1, result2);

    return 0;
}
*/

/*
int main()
{    
    srand(time(NULL));    
    size_t N = 1000000;//100,1000,10000, 1000000,1000000
    int m = 10;
    string Texto = generarTexto(N);
    string Patron = generarTexto(m);    
    //string Texto = "AABAACAADAABAABA";//GCGATGCCTA
    //string Patron = "AABA";//TATATG
    
    vector<int> result1 = testInocente(Texto, Patron);
    vector<int> result2 = testBoyerMoore(Texto, Patron);
    verificarResultado(result1, result2);

    return 0;
}
*/

int main()
{    
    srand(time(NULL));    
    size_t N = 1000000;//100,1000,10000,100000,1000000
    int m = 10;
    //string Texto = generarTexto(N);
    //string Patron = generarTexto(m);    
    string Texto = "GCGATGCCTA";//GCGATGCCTA
    string Patron = "TATATG";//TATATG
    
    vector<int> result1 = testInocente(Texto, Patron);
    vector<int> result2 = testBoyerMoore(Texto, Patron);
    verificarResultado(result1, result2);

    return 0;
}

