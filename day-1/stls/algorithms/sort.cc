#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2)
{
  if (p1.second < p2.second)
  {
    return true;
  }
  if (p1.second > p2.second)
    return false;
  if (p1.first > p2.first)
    return true;

  return false;
}

int main()
{
  vector<int> a({
      4,
      2,
      3,
      4,
      5,
  });

  for (auto it : a)
  {
    cout << it << " ";
  }

  // sort(a.begin(), a.end()); // for vectors
  // int n = a.size();
  // sort(a, a + n); // for array

  sort(a.begin(), a.end(), greater<int>());

  int arr[] = {1, 2, 3, 4, 6};
  sort(arr, arr + 5);
  sort(arr, arr + 4, greater<int>());

  pair<int, int> pArr[] = {{4, 3}, {2, 1}, {5, 1}};
  sort(pArr, pArr + 3, comp);
  cout << "\n";
  for (auto it : pArr)
  {
    cout << it.first << "_" << it.second << " ";
  }

  string s = "cab";

  sort(s.begin(), s.end());

  cout << endl
       << s << endl;

  do
  {
    cout << endl
         << s;
  } while (next_permutation(s.begin(), s.end()));

  // ? there is one *max_element
  // ? there is one *min_element
  return 0;
}