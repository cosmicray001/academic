#include <iostream>
using namespace std;
 
int main() {
	double salary;
	int T;
	cin>>T;
	if(T>=1 && T<=1000){
	for(int x=1;x<=T;x++){
	cin>>salary;
	while(salary<1500 && salary>=1){
		double HDR=.1*salary;
		double DA=.9*salary;
		double Gross=salary+HDR+DA;
		cout<<Gross<<endl;
		break;
 
	}
	while(salary>=1500 && salary<=100000){
		double HDR1=500;
		double DA1=.98*salary;
		double Gross1=salary+HDR1+DA1;
		printf("%.4lf\n", Gross1);
	break;
 
	}
}
}
}