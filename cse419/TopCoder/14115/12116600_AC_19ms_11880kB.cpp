#include <bits/stdc++.h>

using namespace std;
#define le 200

class ThePhantomMenace{
	public:
     int find(vector <int> doors, vector <int> droids){
     	int len1 = doors.size();
        int len2 = droids.size();
        int n[len1];
        for(int i = 0; i < len1; i++) n[i] = le;
        for(int i = 0; i < len1; i++){
        	for(int j = 0; j < len2; j++) n[i] = min(n[i], abs(doors[i] - droids[j]));
        }
        sort(n, n + len1);
        return n[len1 - 1];
     }
};