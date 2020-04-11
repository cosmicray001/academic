#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    char a[110][110];
    char wish[16][10] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
    //for(int i = 0; i < 16; i++) printf("%s\n", wish[i]);
    scanf("%d", &t);
    for(int i = 0; i < t; i++) scanf("%s", a[i]);
    bool sg = false, sg1 = false;
    int k;
    for(int i = 0, k = 0; !(sg == true && sg1 == true); i++, k++){
        sg1 = false;
        printf("%s: %s\n", a[i], wish[k]);
        if(i == t - 1){
            i = -1;
            sg = true;
        }
        if(k == 15){
            k = -1;
            sg1 = true;
        }
    }

    return 0;
}