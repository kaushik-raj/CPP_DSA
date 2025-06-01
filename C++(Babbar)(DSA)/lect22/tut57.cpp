// code link :- https://www.naukri.com/code360/problems/replace-spaces_1172172?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5&leftPanelTabValue=SUBMISSION


//                                              Approch -1 

// #include <bits/stdc++.h> 
// #include<iostream>
// using namespace std;
// string replaceSpaces(string &str){
// 	string s;
// 	for(int i=0;i<str.length();i++){
// 		if(str[i]==' '){
// 			s.push_back('@');
// 			s.push_back('4');
// 			s.push_back('0');

// 		}
// 		else{
// 			s.push_back(str[i]);

// 		}
// 	}
// 	return s;
// };

// int main(){
//     string s = "My name  is ";
//     string str = replaceSpaces(s);
//     cout<<str<<endl;
// }


//                                          Approch - 2


#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
string replaceSpaces(string &str){
	for(int i=0;i<str.length();i++){
		if(str[i]==' '){
			str.replace(i, 1, "@40");
		}
	}
	return str;
};

int main(){
    string s = "My name  is ";
    string str = replaceSpaces(s);
    cout<<str<<endl;
}