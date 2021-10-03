#include <time.h>
#include <iostream>

using namespace std;

int main() {
  srand((unsigned) time(NULL));

  for (int i = 0; i < 5; i++) {
    cout << (float) rand() / RAND_MAX << endl;
  }
}
