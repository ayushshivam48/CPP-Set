#include<iostream>
#include<set>
#include<string>
using namespace std;
int main(){
    set <string> invitelists;

    int n;
    cin>>n;

    while(n--){

        string name;
        cin>>name;

        invitelists.insert(name);
    }
    
    cout<<"Invite lists: "<<endl;
    for(auto name:invitelists){
        cout<<name<<endl;
        
    }

}