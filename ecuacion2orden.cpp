#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  float y=1;
  float x=0;
  float z = 0;
  float h=0.1;
  int N= 10/h;
  int i;
  for(i=0; i<N; i++){
    y = y +h*z;
    x = x + h;
    z = z- h*y;
    cout << x << " " << y<<" " << z << endl;
  }
  return 0;
}
