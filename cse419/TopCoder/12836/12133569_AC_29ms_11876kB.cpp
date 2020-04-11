#include <bits/stdc++.h>
#define inf 100000000
using namespace std;

class FoxAndSightseeing{
	public:
    int getMin(vector <int> position){
    	int len = position.size();
    	if(len == 3) return abs(position[0] - position[2]);
    	else{
            int sum_t = 0, ve = inf;
            for(int i = 0; i < len - 1; i++) sum_t += abs(position[i] - position[i + 1]);
            int skp = 1;
            while(skp <= len - 2){
                int sum = sum_t - (abs(position[skp - 1] - position[skp]) + abs(position[skp] - position[skp + 1]));
                sum += abs(position[skp - 1] - position[skp + 1]);
                ve = min(ve, sum);
                skp++;
            }
            return ve;
    	}
    }
};
