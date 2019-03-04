#define suma(a,b) a+b
#define resta(a,b) a-b
#define multiplicar(a,b) a*b
#define division(a,b) a/b
#define mod(a,b) a%b
#include <iostream>

int i = 100;
int j = 100;

int sum;
int res;
int multi;
float div;
float md;

using namespace std;

int main()

{
 sum = suma (i,j);
 res = resta (i,j);
 multi = multiplicar (i,j);
 div = division(i,j);
 md = mod(i,j);

cout << "La suma es que: " << sum << endl;
cout << "\nLa resta es: " << res << endl;
cout << "\nLa multiplicacion  es: " << multi << endl;
cout << "\nEl cociente  es: " << div << endl;
cout << "\nEl residuo es: " << md << endl;

return 0;
}
