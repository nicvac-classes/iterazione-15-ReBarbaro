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

//ESERCIZIO3//


#include <iostream>
using namespace std;

int main() {
    int i,N,contPari,contDispari,restoDue,x;
    do{
        cout<<"quanti numeri da generare"<<endl;
        cin>>N;
        }while(N<0);
        contPari=0;
        contDispari=0;
        i=0;
        for(i=0;i<=N;i++){
            x=rand()%1001;
            restoDue=x%2;
            if(restoDue==0){
                contPari=contPari+1;
                }else{
                    contDispari=contDispari+1;
}
cout<<i+1<<"numero generato"<<x<<endl;
}
cout<<"sono stati generati"<<contPari<<"numeri pari e"<<contDispari<<"numeriDispari"<<endl;

        
   
}