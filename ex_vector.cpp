#include <string.h>
#include <vector>
using namespace std;

int main() {
   vector <int> myvector;
   int sum = 0;
   myvector.pushback (100);
   myvector.pushback (200);
   myvector.pushback (300);
   while ( !myvector.empty() ) {
    sum += myvector.back();
    myvector.pop_back();
    myvector.push_back (50);
   } 
   cout << "A soma =" << sum << '\n';
   return 0;
}