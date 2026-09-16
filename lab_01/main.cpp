#include <iostream>
  using namespace std;

   int main() {
       double height = 40;
       double width = 30;
       double floors = 2.5;
       double space = 825;
       double price = 150000;
       double living_area = height*width*floors-space;
       cout<<price/living_area;
        
     return 0;
}