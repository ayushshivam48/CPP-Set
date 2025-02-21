#include <iostream>
#include <unordered_set>
#include<vector>
using namespace std;

int main() {

    int n, p, q;
    cin>>n>>p>>q;

    unordered_set<int> s;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){

            int correct = i;
            int incorrect = j;
            int unattended = n-(i+j);

            if(unattended>=0){
                int score = correct*p + incorrect*q;
                s.insert(score);
            }else{
                break;
            }
        }
    }
    for(auto score:s){
        cout<<score<<" ";
    }
    cout<<endl;
    
    cout<<"Ans:"<<s.size()<<endl;
    
}
