#include <bits/stdc++.h>
using namespace std;
int main()
{
  stack<int> st;

  st.push(2);
  st.emplace(5);

  st.top(); // last guy that went in
  st.pop(); // removes last guy from stack

  stack<int> st1, st2;

  st.swap(st2);
  return 0;
}