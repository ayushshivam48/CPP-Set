#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> set1;
    //insertion in a set
    set1.insert(5);
    set1.insert(4);
    set1.insert(3);
    set1.insert(2);
    set1.insert(1);

    cout<<set1.size()<<endl;
    
    //size remains same because duplicate value is added
    //and sets contain only unique values

    //traversing a set
    
    for(auto value:set1){
        cout<<value<<" ";
    }cout<<endl;

    auto start_itr = set1.begin();
    start_itr++;

    auto end_itr = set1.begin();
    advance(end_itr,3);

    if(set1.find(4)!=set1.end()){
        cout<<"Value is present"<<endl;
    }else{
        cout<<"Value is not present"<<endl;
    }

}