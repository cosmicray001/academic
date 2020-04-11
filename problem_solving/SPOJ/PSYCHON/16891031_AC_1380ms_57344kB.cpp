#include <bits/stdc++.h>

using namespace std;

#define len 10000010
#define len1 664580
int n[len];
int p[len1];

int main()
{
    //int c = 0;
    memset(n, 0, len);
    //for(int i = 0; i < len; i++) printf("%d\n", n[i]);
    for(int i = 4; i < len; i += 2) n[i] = 1;
    int root = sqrt(len);
    for(int i = 3; i <= root; i += 2){
        for(int j = i * i; j < len; j += i){
            if(n[j] == 0) n[j] = 1;
        }
    }//664579
    int c = 1;
    p[0] = 2;
    for(int i = 3; i < len; i += 2){
        if(n[i] == 0){
            p[c] = i;
            c++;
        }
    }


    int t;
    scanf("%d", &t);
    int num;
    for(int i = 0; i < t; i++){
        scanf("%d", &num);
        int ev = 0, od = 0;
        int temp = num;

        for(int l = 0; p[l] <= sqrt(temp); l++){

            if(temp % p[l] == 0){
                int cou = 0;
                while(temp % p[l] == 0){
                    cou++;
                    temp /= p[l];
                }
                if(cou % 2 == 0) ev++;
                else od++;
            }

        }
        if(temp != 1) od++;
        if(ev > od) printf("Psycho Number\n");
        else printf("Ordinary Number\n");
    }

    return 0;

}