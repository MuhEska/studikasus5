#include <iostream>
using namespace std;

class volume{
	public:
		long tabung();
		long kubus();
	private:
		int r, t, vb, s, vs;
		float phi = 3.14;
};
long volume::tabung(){
	cout<<"Masukan Jari-jari : ";
	cin>>r;
	
	cout<<"Masukan Tinggi    : ";
	cin>>t;
	vb=(phi*t*(r*r));
	cout<<"volume tabung : ";
	return vb;
	
}
long volume::kubus(){
	cout<<"Masukan Sisi Kubus : ";
    cin>>s;
    vs=s*s*s;
    cout<<"Volume Kubus =  ";
    return vs;
}
int main(){
	volume x;
	cout<<x.kubus();
	cout<<endl;
	cout<<x.tabung();
	return 0;
}

