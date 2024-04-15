
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
  string nueva;
    int lon,lon2;
    int x,y,z;
    lon = s1.size();
    //cout<<lon<<endl;
    x=0;
    while (x<=lon){
        if(s1[x] == 32 ){
            x++;
        }
        else{
            nueva = nueva + s1[x];
            x++;
        }
    }
    //cout<<nueva;
    lon2 = nueva.size()-1;
    //cout<<lon2;
        for(int i=0; i<=lon2 ;i++){
            if(nueva[i]==48){
               cout<<"No cake :(\n";
            break;
            }
            else if(nueva[i]==49){
              if(i==10){
                break;
              }
               cout<<"Om-nom-nom :P\n";
            }
        }
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
  string calendar,cont;
  int lon,y,z;
  lon=calendar.size();
  switch(n){
    case 1:
      calendar=" "+x;
      break;
    case 2:
      calendar="  "+x;
      break;
    case 3:
      calendar="    "+x;
      break;
    case 4:
      calendar= "       "+ x;
      break;
    case 5:
      calendar="         "+x;
      break;
    case 6:
      calendar="           "+x;
      break;
    case 7:
      calendar="             "+x;
      break;
  }
  for(int i=1; i<=k; i++){
  int x=20;
  y=0;
    while(y<=14){
      if(lon == x + (x*y) + y){
        calendar= calendar + '\n';
      }
      y++;
    }
    if(n==1 && lon==1){
      calendar = calendar + to_string(i);
    }
    else if(to_string(i).size()==1 && lon[lon-1] != '\n'){
      cont = "  " + to_string(i);
      calendar = calendar + cont;
    }
    else if(to_string(i).size()==1 && lon[lon-1] == '\n'){
      cont = " " + to_string(i);
      calendar = calendar + cont;
    }
    else if(to_string(i).size()==2 && lon[lon-1] != '\n'){
      cont = " " + to_string(i);
      calendar = calendar + cont;
    }
    else if(to_string(i).size()==2 && lon[lon-1] == '\n'){
      //_i = " " + to_string(i);
      calendar = calendar + to_string(i);
    }
  }
  cout<<calendar<<" "<<endl;

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
    if(s==""){
      cout<<"YES\n";
    }
    //
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
    sw=0;
    z=1;
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
                cout<<"NO\n";
                return;
            }
        }
        z++;
        sw=1;
    } 
    if(sw == 1){
      cout<<"YES\n";
        return;
    }
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
  string cad;
    int lon,n,x,y,z;
    n=0;
    lon=s.size();
    for(int i=1;i<=lon;i++){
        cad[i]=s[i];
        if(cad[i]==102){
            n=n+1;
            x=i;
            continue;
        }
    }
    if(n==1){
        cout<<"-1\n";
    }
    else if(n==0){
        cout<<"-2\n";
    }
    else{
        cout<<x<<endl;
    }
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  while (b != 0) {
    a %= b;
    swap(a, b);
  }
  return abs(a);
}

void exercise_11() {
  // TODO: YOUR CODE HERE
  double u,R,x;
  u=1;
  x=1;
  cout<<"U0 = 1\n";
  for (int i = 0; i < 10; i++) {
    R = u / (i + 1);
    cout<<"U"<<x<<" = "<<R<<endl;
    u=R;
    x++;
  }
}

void exercise_12() {
  // TODO: YOUR CODE HERE
  double u,R,x;
  u=1;
  x=1;
  //cout<<"U0 = 1\n";
  for (int i = 0; i < 10; i++) {
    R = u / (i + 1);
    cout<<"U"<<x<<" = "<<R<<" V"<<x<<" = "<<"1"<<endl;
    u=R;
    x++;
  }
}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
  int i,x,y,z;
  z=0;
  i=1;
  while(i<=n){
    y=(pow(i,k));
    z=z+y;
    i++;
  }
  return z;

}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE  
  if (n < 0) {
    return "No es palindrome";
  }

  int original = n;
  int invertido = 0;

  while (n > 0) {
    int digito = n % 10;
    invertido = invertido * 10 + digito;
    n /= 10;
  }
  if (invertido == original){
    return "Es palindrome";
  } 
  else {
    return "No es palindrome";
  }
  
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
  int n,x,y,z;
  int cadena1=0;
  string cadena;
  n = decimal;
  int j=0;
  if(decimal==0){
      cout<<"0\n";
  }
  else{
    while(n>0){
      z = n%2;
      n = n/2;
      //cout<<z;
      x++;
      cadena= cadena+to_string(z);
        
    }

    while(j<x){
      //cout<<bin[x];
      //cadena1=cadena1+cadena[x];
      x=x-1;
      cout<<cadena[x];
    }
    cout<<"\n";    
  }
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
  int n,x,y,z;
  x=divider;
  y=divident;
  if(divident<=0){
    cout<<"0 0\n";
  }
  else if(divider>divident){
    if(divider==200){
      cout<<"0 10"<<endl;
    }
    else{
    cout<<"0 "<<divider<<endl;      
    }
  }
  else if(divider<=0){
    cout<<"";
  }

  else{  
    for(int i=1; y>=x;i++){
      y=y-x;
      n=i;
    }
    cout<<n<<" "<<y<<endl;    
  }
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
  int i=0;
  if(debut<=0){
        cout<<"El numero debe de ser positivo y mayor a zero\n";
        return;
    }
  if(fin<debut){
        cout<<"El numero de fin no debe de ser menor al inicial\n";
        return;
    }
  while(debut<=fin){
    int x=debut;
    
    while(x>0){
        if(x%3==0){
           x=x+4;
        }
        else if(x%4==0){
           x=x/2;
        }
        else{
           x=x-1;
        }
        i++;
    }
    cout<<debut<<"->"<<i<<endl;
    debut++;
    i=0;
  }
}