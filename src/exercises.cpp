
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
int i=1;
int x=1;
    if(n<0 ){
        cout<<"El numero es negativo. Intentelo de nuevo\n";
        }
    else {
        if(n>=14){
            cout<<"El numero es muy grande. Intentelo de nuevo\n";
        }
        else{
          while(i<=n){
            x=x*i;
            i++;
          }
          cout<<x<<"\n";
        }
    }
}

void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
  int h=1;
    if(1<=n<=7 && 1<=k<=99){
        while(h<=k){
            if(h % 7 ==0){
                if(h<10){
                cout<<" "<<h<<" "<<endl;
                h++;
                }
                else{
                    cout<<h<<" "<<endl;
                    h++;
                }
            }

            else{
                if(h<10){
                cout<<" "<<h<<" ";
                h++;
                }
                else{
                    cout<<h<<" ";
                    h++;
                }
            }
        }
    }
}

int exercise_6(int n) {
  // TODO: YOUR CODE HERE
  int t;
    
    t=0;
    while(n>0){
        t = t + n%10;
        n=n/10;
    }
    //cout<<t<<endl;
  return t;
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE
    double x,r;
    x=1;
    r=0;
    for(int i=1; i<=n; i++){
        r= r + (pow(-1,(i+1))/i);  
    }
    cout<<r<<endl;
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
  int x,y,z,m,l;
    string b,n,bin1;
    char a;
    int j=0;
    int sw,lon2;
    x=1;
    m=1;
    l=1;
    int lon=s.size()-1;
    //cout<<lon;
    while (j<=lon){
        a=s[lon];
        lon=lon-1;
        if(a == 32){
            cout<<"";
        }
        else{
        
        bin1=bin1 + a;
            
        }
        
    }
    
    //cout<<n<<endl;
    //cout<<bin1<<endl;
    sw=0;
    z=1;
    //lon2=n.size();
    while(z<=(lon2=s.size())){
        if(bin1[m]==s[l]){
            m++;
            l++;
        }
        else{
            if(s[l]==32){
                l++;
            }
            else{
                //cout<<"NO\n";
                break;
            }
        }
        z++;
        sw=1;
    }
    int valor(int sw){
    if(sw == 1){
        b=YES;
        return b;
    }
    else{
      return "NO";
    }
    }
     
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
  int a,x,y,z,r;
    r=0;
    x=2;
    if(n<0){
        cout<<"No hay primos negativos";
    }
    while (r<n){
     a=2;  
      while(a<=x){
          y=x%a;
            if(y==0){
                 if(x==a){
                  cout<<x<<" ";
                  r++;
                  }
                  else{
                  break;
                 }
              }
        a++;
       }
    x++;
    }
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}