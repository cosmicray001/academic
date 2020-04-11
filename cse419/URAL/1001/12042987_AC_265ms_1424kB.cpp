#include <bits/stdc++.h>

using namespace std;

int main()
{
  vector <double> v;
  double a;
  while(scanf("%lf", &a) != EOF){
    v.push_back(a);
  }
  for(int i = v.size() - 1; i >= 0; i--){
    a = sqrt(v[i]);
    printf("%.4lf\n", a);
  }
  
  return 0;
}