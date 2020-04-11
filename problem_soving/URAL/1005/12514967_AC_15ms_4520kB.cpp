#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

void test(int a, int index, int K);
vector<int> list, group;

int main()
{
    int K, k, S = 0, min;
    cin >> K;
    for (int i = 0; i < K; i++)
    {
        cin >> k;
        S += k;
        group.push_back(k);
    }
    for (int i = 0; i < K; i++)
    {
        test(group[i], i, K);
    }
    k = S / 2;
    min = 1000000;
    for (int i = 0; i < list.size(); i++)
    {
        if (abs(k - list[i]) < abs(k - min))
            min = list[i];
    }
    S = abs(S - min - min);
    cout << S;
    return 0;
}

void test(int a, int index, int K)
{
    list.push_back(a);
    for (int i = index + 1; i < K; i++)
        test(a + group[i], i, K);
}