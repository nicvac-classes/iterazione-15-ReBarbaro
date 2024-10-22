#include <iostream>
using namespace std;

int main() {
   int N,M,i;
   cout<<"elenca i numeri da N a M con passo 2 "<<endl;
   cout<<"inserisci N"<<endl;
   cin>>N;
   cout<<"inserisci M"<<endl;
   cin>>M;
   for (i=M; i<=N; i+=2){
    cout<<i<<endl;
    }
}

//ESERCIZIO 2//


#include <iostream>
using namespace std;

int main() {
   string nome;
   int i,N;
   cout<<"quanti atleti ci sono in gara ?"<<endl;
   cin>>N;
   for(i=0;i<=N;i++){
    cout<<"scrivi il nome dell'atleta"<<endl;
    cin>>nome;
    cout<<"ciao"<<nome<<endl;
    }
}
