// code link :- Unordered Map
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//                                               Unordered Map

int main(){
    
    // Creation
    unordered_map<string , int> m;

    // Insertion
        // 1
        pair<string , int > p = make_pair("babbar" , 13);
        m.insert(p);

        // 2
        pair<string , int > pair2("Love" , 2);
        m.insert(pair2);

        // 3
        m["mere"] = 1;

        // what if we insert which the same key
        m["mere"] = 3; // it will update the key , but not create new key with same name .

    
    // Search

    cout<<m["mere"]<<endl;
    cout<<m.at("babbar")<<endl;

        // Now see the difference when we search a invalid key

        // cout<<m.at("Unknown")<<endl; // this will show error
        cout<<m["Unknown"]<<endl;   //this is return 0 , bcz this code create a mapping of input with 0 .
        // Even now if we call m.at("Unknown ") it will return 0.
        cout<<m.at("Unknown")<<endl;

    // Size
    cout<<m.size()<<endl;

    // to check Presence
    cout<<m.count("Love")<<endl;    // 0 -> not present , 1 -> present 


    // erase
    m.erase("Love");
    cout<<m.size()<<endl;


    // Iteration 
    cout<<"Iterator -1 "<<endl;
    for(auto i:m){
        cout<<i.first << " " <<i.second<<endl;
    }

    // Iteration by creating a iterator
    cout<<"Iterator -2 "<<endl;
    unordered_map<string , int> :: iterator it = m.begin();

    while(it != m.end()){
        cout<<it->first << " " << it->second<<endl;
        it++;
    }

}