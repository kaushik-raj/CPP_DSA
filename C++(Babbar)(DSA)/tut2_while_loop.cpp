//                              print 
// #include<iostream>
// using namespace std;

// int main () {
//     int i ,n=1,sum=0;
//     cout<<"Enter a number "<<endl;
//     cin>>i;
//     while(n<=i){
//         sum+=n;
//         n++;
//     }
//     cout<<sum;
//     return 0;
// }




//                                  print sum of all even numbers less than n .

// #include<iostream>
// using namespace std;

// int main () {
//     int sum=0, n , i=1;
//     cout<<"Enter a number"<<endl;
//     cin>>n;
//     while(i<=n){
//         if(i%2==0){
//             sum+=i;
//         }
//     i++;   
//     }

//     cout<<"The sum of even numbers is: "<<sum;
//     return 0;
// }



//                                  Find that given number is prime or not . 


// #include <iostream>
// #include <cstdlib> // For using the exit function
// #include<cmath>
// using namespace std;

// int main() {
//     int a, i = 2, q = 0;
//     cout << "Enter a number: ";
//     cin >> a;

//     if (a == 1) {
//         cout << "Invalid";
//         exit(1);
//     }

//     while (i < a/2) {
//         if (a % i == 0) {
//             cout << "It is not a prime" << endl;
//             q++;
//             exit(1);
//         }
//         i++;
//     }

//     if (q == 0) {
//         cout << "It is a prime number";
//     }

//     return 0;
// }


//                          1st pattern (While loops)    (number print)


// #include<iostream>
// using namespace std;

// int main () {
//     cout<<"Enter a number"<<endl;
//     int a ,i=0,j=0; 
//     cin>>a;
//    while(i<a){
//     j=0;
//         while(j<a){
//             cout<<"*";
//             j++;
//         }
//     cout<<endl;
//     i++;

//    }
    
//     return 0;
// }



//                          2nd pattern (while loop) (number print)


// #include<iostream>
// using namespace std;

// int main () {
//     int a,i=1,j=1 ;
//     cout<<"Enter a number"<<endl;
//     cin>>a;
//     while(i<=a){
//         j=1;
//         while(j<=a){
//             cout<<i;
//             j++;
//         }
//         cout<<endl;
//     i++;
//     }
//     return 0;
// }



//                             3rd pattern (while loop) (number print)


// #include<iostream>
// using namespace std;

// int main () {
//     int a,i=1,j=1;
//     cout<<"Enter a number"<<endl;
//     cin>>a;
//     while(i<=a){
//         j=1;
//         while(j<=a){
//             cout<<j;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }



//                              4th pattern (number print)


// #include<iostream>
// using namespace std;

// int main () {
//     int a , i=1, j=1 ;
//     cout<<"Enter a number"<<endl;
//     cin>>a;
//     while(i<=a){
//         j=1;
//         while(j<=a){
//             cout<<a-j+1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }




//                                          5th pattern (number print)


// #include<iostream>
// using namespace std;

// int main (){
//     int a , i=1, j=1 ,k=1;
//     cout<<"Enter a number "<<endl;
//     cin>>a;
//     while(i<=a){
//         j=1;
//         while(j<=a){
//             cout<<k;
//             k++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }



//                                      6th pattern (Star pattern printing starts )



// #include<iostream>
// using namespace std;

// int main () {
//      int a , i=0,j=0 ;
//     cout<<"Enter a number"<<endl;
//     cin>>a;
   
//     while(i<a){
//         j=0;
//         while(j<=i){
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }



//                                      7th pattern



// #include<iostream>
// using namespace std;

// int main () {
//      int a , i=1,j=1 ;
//     cout<<"Enter a number"<<endl;
//     cin>>a;
   
//     while(i<=a){
//         j=1;
//         while(j<=i){
//             cout<<i;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }


//                      8th pattern 


// #include<iostream>
// using namespace std;

// int main () {
//      int a , i=1,j=1 ,k=1;
//     cout<<"Enter a number"<<endl;
//     cin>>a;
   
//     while(i<=a){
//         j=1;
//         while(j<=i){
//             cout<<k;
//             k++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }



//                                      9th pattern 

// #include<iostream>
// using namespace std;

// int main () {
//      int a , i=1,j=1 ,k;
//     cout<<"Enter a number"<<endl;
//     cin>>a;
   
//     while(i<=a){
//         j=1;
//         k=i;
//         while(j<=i){
            
//             cout<<k;
//             j++;
//             k++;
            
//         }
        
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }



//                                  9(a)th pattern (imp)



// #include<iostream>
// using namespace std;

// int main () {
//      int a , i=1,j=1;
//     cout<<"Enter a number"<<endl;
//     a=4;    
//     while(i<=a){
        
//         j=i;
//         while(j<i*2){
//             cout<<j;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }




//                                      10th pattern 



// #include<iostream>
// using namespace std;

// int main () {
//     int a=4,i=1,j=1;
//     while (i<=a){
//         j=1;
//         while(j<=i){
//             cout<<i-j+1;
//             j++;
//         }
//         cout<<endl;
//         i++;

//     }
//     return 0;
// }


//                                      11th pattern(IMP - bcz , we used char and incresed it . )


// #include<iostream>
// using namespace std;

// int main () {
//     int a , i=1 ,j=1;
//     a=4;
//     char ch='A';
//     while(i<=a){
//         j=1;
//         while(j<=a){
//             char ah = ch+i-1;
//             cout<<ah;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }


//                                      12th pattern 


// #include<iostream>
// using namespace std;

// int main () {
//     int a =4 , i =1,j=1;
//     char ch = 'A';
//     while(i<=a){
//         j=1;
//         while(j<=a){
//             char ah = ch+j-1;
//             cout<<ah;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }


//                              13th pattern 


// #include<iostream>
// using namespace std;

// int main () {
//     int a =3 , i =1,j=1,k=1;
//     char ch = 'A';
//     while(i<=a){
//         j=1;
//         while(j<=a){
//             char ah = ch+k-1;
//             cout<<ah;
//             j++;
//             k++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }



//                                        14th pattern 

// #include<iostream>
// using namespace std;

// int main () {
//     int a = 3 , i =1,j=1,k;
//     while(i<=a){
//         k=i;
//         j=1;
//         while(j<=a){
//             char ah = 'A'+k-1;
//             cout<<ah;
//             j++;
//             k++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }

//                      15th pattern 


// #include<iostream>
// using namespace std;

// int main () {
//     int a=3 , i=1 , j=1;
    
//     while(i<=a){
//         j=1;
//         while(j<=i){
//             char ah = 'A' +i-1;
//             cout<<ah;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }


//                              16th pattern 


// #include<iostream>
// using namespace std;

// int main () {
//     int a=4 , i=1, j=1,k=1 ;
//     while(i<=a){
//         j=1;
//         while(j<=i){
//             char ch = 'A' + k -1;
//             cout<<ch;
//             k++;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }

//     return 0;
// }


//                              17th pattern 

// #include<iostream>
// using namespace std;

// int main () {
//     int a=4 , i=1,j=1 ,k;
//     while(i<=a){
//         k=i;
//         j=1;
//         while(j<=i){
//             char ch  = 'A' + k-1;
//             cout<<ch;
//             k++;    
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
    
//     return 0;
// }



//                              18th pattern 


// #include<iostream>
// using namespace std;

// int main () {
//     int a =4 , i=1,j=1,k;
//     while(i<=a){
//         k=a-i;
//         j=1;
//         while(j<=i){
//             char ch = 'A' +k;
//             cout<<ch;
//             k++;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
//     return 0;
// }


//                      19th pattern 


// #include<iostream>
// using namespace std;

// int main () {
//     int a= 4 , i=1,j,k=1;

//     while(i<=a){
//         j=1;
//         while(j<=a-i){
//             cout<<" ";
//             j++;
//         }
//         k=1;
//         while(k<=i){
//             cout<<"*";
//             k++;

//         }
//         i++;
//         cout<<endl;

//     }
//     return 0;
// }


//                      20th pattern 


// #include<iostream>
// using namespace std;

// int main () {
//     int a =4 , i=1,j=1;
//     while(i<=a){
//         j=1;
//         while(j<=a-i+1){
//             cout<<"*";
//             j++;

//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }


//                             21th pattern 

// #include<iostream>
// using namespace std;

// int main () {
//     int a =4 , i=1,j=0,k=0;
//     while(i<=a){
//         j=0;
//         while(j<=i-1){
//             cout<<" ";
//             j++;
//         }
//         k=0;
//         while(k<=a-i){
//             cout<<"*";
//             k++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }


//                               22th pattern


// #include<iostream>
// using namespace std;

// int main () {
//     int a =4 , i=1,j=0,k=0;
//     while(i<=a){
//         j=0;
//         while(j<=i-1){
//             cout<<" ";
//             j++;
//         }
//         k=0;
//         while(k<=a-i){
//             cout<<i;
//             k++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }


//                          23th pattern 


// #include<iostream>
// using namespace std;

// int main () {
//     int a =4 , i=1, j=1,k=1; 
//     while(i<=a){
//         j=1;
//         while(j<=a-i){
//             cout<<" ";
//             j++;
//         }
//         k=1;
//         while(k<=i){
//             cout<<i;
//             k++;

//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }


//                                24th pattern 


// #include<iostream>
// using namespace std;
// int main () {
//     int a=4,i=1,j,k,o;
//     while(i<=a){
//         j=1;
//         k=1;
//         while(k<=i-1){
//             cout<<" ";
//             k++;
//         }
//         o=i;
//         while(j<=a-i+1){
//             cout<<o;
//             o++;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
//     return 0;
// }


//                          25th pattern 


// #include<iostream>
// using namespace std;

// int main () {
//     int a=4, i=1,j=1,k=1,o=1;
//     while(i<=a){
//         j=1;
//         while(j<=a-i){
//             cout<<" ";
//             j++;
//         }
//         k=1;
//         while(k<=i){
//             cout<<o;
//             o++;
//             k++;
//         }
//         i++;
//         cout<<endl;
//     }
//     return 0;
// }


//                      26th pattern 


// #include<iostream>
// using namespace std;

// int main () {
//     int a=4 , i=1,j=1,k=1,l=1;
//     while(i<=a){
//         j=1;
//         while(j<=a-i){
//             cout<<" ";
//             j++;
//         }
//         k=1;
//         int q=1;
//         while(k<=i){
//             cout<<q;
//             q++;
//             k++;
//         }
//         l=1;
//         int e=i-1;
//         while(l<=i-1){
            
//             cout<<e;
//             e--;
//             l++;
//         }
//         i++;
//         cout<<endl;
//     }
//     return 0;
// }


//                              27th pattern (Dabbang pattern )

// #include<iostream>
// using namespace std;

// int main () {
//     int a=5,i=1,j=1,k=1,l=1;
//     while(i<=a){
//         j=1;
//         while(j<=a-i+1){
//             cout<<j;
//             j++;
//         }
//         k=1;
//         while(k<=(i-1)*2){
//             cout<<"*";
//             k++;
//         }

//         l=0;                
//         int q=a-i+1;        // where to start printing the value of q

//         while(l<=a-i){
//             cout<<q;
//             q--;
//             l++;

//         }
//         cout<<endl;

//         i++;
//     }

//     return 0;
// }

// //           same 27th question 

// #include<iostream>
// using namespace std;
// int main() {
//     int a = 5 ,w=1;
    
//     while(a>0){
//         int i=a;
//         int j=1;
//         while(i>0){
//             cout<<j;
//             j++;
//             i--;
//         };
        
//         int q = (w-1)*2;
//         while(q>0){
//             cout<<"*";
//             q--;
//         };
//         int r=a;int t=a;
//         while(r>0){
//             cout<<r;
//             r--;
//         }
//         a--;
//         w++;
//         cout<<endl;
//     };
// };
