#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> set1;
    //insertion in a set
    set1.insert(3);
    set1.insert(2);
    set1.insert(1);

    cout<<set1.size()<<endl;
    
    set1.insert(3);
    cout<<set1.size()<<endl;
    //size remains same because duplicate value is added
    //and sets contain only unique values

    //traversing a set
    set<int>::iterator itr;
    for(auto value:set1){
        cout<<value<<" ";
    }cout<<endl;

}