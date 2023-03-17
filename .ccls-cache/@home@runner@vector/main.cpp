#include <iostream>
#include <vector>
using namespace std ;
int main ()
{
  vector <int > v ;
  cout <<"capacity-"<<v.capacity()<<endl;
  v.push_back(1);
  cout<<"capacity-"<<v.capacity()<<endl;
  v.push_back(10);
  cout<<"capacity-"<<v.capacity()<<endl;
  v.push_back(20);
  cout<<"capacity-"<<v.capacity()<<endl;
  v.push_back(1);
  cout<<"capacity-"<<v.capacity()<<endl;
  v.push_back(1);
  cout<<"capacity-"<<v.capacity()<<endl;
  v.push_back(1);
  cout<<"capacity-"<<v.capacity()<<endl;
  cout << "fornt--"<<v.front()<<endl;
  cout << "back--"<<v.back()<<endl;
  
  
  // v.push_back(20);
  // v.push_back(20);
  // v.push_back(40);
  
  
}