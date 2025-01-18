#include<iostream>
#include<set>
#include<algorithm>
#include<string>

using namespace std;

bool checkAllAlphabets(string s){

    if(s.length()<26){
        return false;
    }

    transform(s.begin(),s.end(),s.begin(),::tolower);

    set<char> alphabets;
    for(auto ch:s){
        alphabets.insert(ch);
    }

    return (alphabets.size()==26);
}

int main(){
    
    string input;
    cin>>input;

    if(checkAllAlphabets(input)){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
}