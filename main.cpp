#include <iostream>
using namespace std;
#include <vector>

int main() {
              int N,i;
              float s,m;
              cout<<"inserisci il numero degli studenti"<<endl;
              cin>> N;
              vector<string> nomi[N];
              vector<float> voti crediti[N];
              for(i=0;i<N;i=i+1)
              {
                cout<<"inserisci il nome dello studente"<<endl;
                cin>> nomi[i];
                cout<<"inserisci la valutazione dello studente"<<endl;
                cin>> voti[i];
                cout<<"inserisci il credito dello studente"<<endl;
                cin>> crediti[i];
              }
            s=0;
            for(i=0;i<N;i=i+1)
            {
                s=s+voti[i];
            }
        m=s/N;
        cout<<"la media è" <<m <<endl;
        for(i=0;i<N;i=i+1)
        {
            if(voti[i]>m)
            {
                if(crediti[i]>=6)
                {
                    cout<<"lo studente"<<nomi[i] << "ha voto"<< voti[i] << "ha credito" <<crediti[i] <<endl;
                }
            }
        }
              





























}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
