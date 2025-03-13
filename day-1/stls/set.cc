#include <bits/stdc++.h>
using namespace std;
int main()
{
  set<int> st;

  //  stores unique element
  // sorts the element

  st.insert(1);
  st.emplace(4);
  st.emplace(3);
  st.emplace(8);
  st.emplace(5);

  auto it = st.find(1); // if not found will point at st.end()
  st.erase(it);
  auto it1 = st.find(4); // if not found will point at st.end()
  auto it2 = st.find(8); // if not found will point at st.end()

  st.erase(it1, it2); //[it1,it2)

  return 0;
}