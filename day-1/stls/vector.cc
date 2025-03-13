#include <bits/stdc++.h>
using namespace std;
int main()
{
  /**
   * @Vector
   *
   * similar tp array
   * Size of vector is dynamic
   */

  vector<int> a; // vector with size  = 0;  here int is datatype of element sthat will be stored
  int initial_size_of_vector = 5;
  int fill_all_places_with = 10;
  vector<int> b(initial_size_of_vector, fill_all_places_with); // first par

  /**
   * @methods
   * 1. push_back(4)
   * 2. emplace_back(2);  // same as push_back but fast
   * 3. pop_back(); // removes last element
   */

  vector<int> c(b); // vector c will have copy of vector b ;

  /**
   ** @ Iterators
   *
   * Iterator points to address of element
   * to access element at iterator it use  *(it)
   * a.begin();
   * a.end();  will point to index just after the last element index or say a.size();
   */

  vector<int>::iterator it = b.begin();

  cout << *(it) << "\n";

  for (auto item : b)
  { // auto is the master keyword it will detect the datatype by it self
    cout << item;
  }

  for (int i = 0; i < b.size(); i++)
  {
    b[i] = i;
  }

  b.erase(b.begin() + 1); // removed item at index 1 now size of array is 4

  cout << "\n";
  for (auto item : b)
  { // auto is the master keyword it will detect the datatype by it self
    cout << item << " ";
  }

  b.erase(b.begin(), b.end() - 1); // gave startIndex  = 0, end index  =2 and size of vector was 4;
  // abvove sttement deleted elements from 0,2 and only one elent in vector is left = {4}
  cout << "\n";

  /**
   * * @Insert
   * b.inser(b.begin(),10) at index  0 inserts 10
   * b.inser(b.begin()+1,2,300); just after index = 0 inserts 2 300
   */

  b.insert(b.begin(), 10);

  for (auto item : b)
  { // auto is the master keyword it will detect the datatype by it self
    cout << item << " ";
  }

  cout << "\n";
  b.insert(b.begin() + 1, 2, 300);
  for (auto item : b)
  { // auto is the master keyword it will detect the datatype by it self
    cout << item << " ";
  }
  cout << "\n";
  a.insert(a.begin(), b.begin(), b.begin() + 2); // inserts first 2 element of vector b into vector a
  for (auto item : a)
  { // auto is the master keyword it will detect the datatype by it self
    cout << item << " ";
  }

  cout << "\n";

  b.clear(); // trims down the vector into empty vector 
  for (auto item : b)
  { // auto is the master keyword it will detect the datatype by it self
    cout << item << " ";
  }
  cout << "\n";
  // cout << b[0];
  return 0;
}