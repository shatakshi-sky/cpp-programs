#include <iostream>
using namespace std;

int main(){

    int sp;
    cout<<"enter a sp:";
    cin>>sp;

    int cp;
    cout<<"enter cp:";
    cin>>cp;

    if(sp>cp){
        cout<<"profit";
    }
    if(sp<cp)
    { cout<<"loss";
    }
   if(sp==cp){
    cout<<"no profit no loss";
   }

    
    
return 0;

}
