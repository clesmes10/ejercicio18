#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  float y=1;
  float x=0;
  float h=0.1;
  int N= 3/h;
  int i;
  for(i=0; i<N; i++){
    y = y -h*y;
    x = x + h;
    cout << x << " " << y<< endl;
  }
  return 0;
}

    
    
