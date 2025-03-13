#include <bits/stdc++.h>
using namespace std;
int main()
{
  list<int> ls; // doubly Linked List

  ls.push_back(2);
  ls.push_front(2);

  ls.emplace_front(1);
  ls.emplace_back(5);
  return 0;
}