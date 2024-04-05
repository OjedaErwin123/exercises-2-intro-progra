
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1) {
  // TODO: YOUR CODE HERE
  for(int i= 0; i<s1.size(); ++i){
       if(s1[i]== ' '){
       cout <<i<<endl;
  
       }
   }
   
   cout<<s1.size()<<endl;
}

void exercise_2(string s1) {
  // TODO: YOUR CODE HERE
  string cad1;
  for(int i= 0; i<s1.size(); ++i){
       if(s1[i]!= ' '){
           cad1=cad1+s1[i];
       }
       else {
            cout<<"["<<cad1<<"]"<<endl;
            cad1="";
       }

   }
   if(cad1 == ""){
     cout<<"";
   }
   else{
     cout<<"["<<cad1<<"]"<<endl;
   }
   //cout<<cad.size()<<endl;
}

void exercise_3(string s1) {
  // TODO: YOUR CODE HERE
}

void exercise_4(int n) {
  // TODO: YOUR CODE HERE
  int i=n-1;
  int z=0;
    if(n<0){
        cout<<"El numero es negativo. Intentelo de nuevo\n";
    }
    else if(n==1){
      cout<<n<<"\n";
    }
    else {
        if(n>=14){
            cout<<"El numero es muy grande. Intentelo de nuevo\n";
        }
        else{
            while(i<n){
                n*=i;
                i--;
                if(i==0){
                break;
                }
            }
            cout<<n<<endl;
    
        }
    }
}

void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
}

int exercise_6(int n) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
}

void exercise_12() {
  // TODO: YOUR CODE HERE
}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
  return 0;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}