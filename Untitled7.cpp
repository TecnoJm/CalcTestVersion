#define suma(a,b) a+b
#define resta(a,b) a-b
#define multiplicar(a,b) a*b
#define division(a,b) a/b
#include <iostream>

int i = 20;
int j = 30;

int sum;
int res;
int multi;
int div;

using namespace std;


int main()

{

 sum = suma (i,j);
 res = resta (i,j);
 multi = multiplicar (i,j);
 div = division(i,j);

cout <<  "la suma es: " << sum << endl;
cout <<  "la resta es: " << res << endl;
cout <<  "la multiplicacion  es: " << multi << endl;
cout <<  "el cociente  es: " << div << endl;
return 0;

}
