#include <bits/stdc++.h>
using namespace std;
int main()
{
  multiset<int> ms;
  ms.insert(1); // {1}
  ms.insert(1); //{1,1}
  ms.insert(1); //{1,1,1}

  ms.erase(1);          // removes all occurrences of 1
  auto it = ms.find(1); // returns first occurrence of 1

  ms.erase(it); // deletes first occurrence of 1
  return 0;
}