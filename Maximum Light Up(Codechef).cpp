#include<iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
    long int a,b,c,x,y,t;
	cin>>t>>a>>b>>c>>x>>y;
	long int ca=b+x*a,cc=c+y*a,qa=0,qc=0,s=0,p=0;;
	qa = t/ca;
	s = qa*ca;
	p = qa;
	while(s<t) {
		if(qa) {
			s-=qa;
			qa--;
		}
		s+=cc;
		qc++;
		if(s>=t) {
			break;
		}
        p=max(p,qa+qc);
	}
	cout<<p<<endl;
	}
	return 0;
}
