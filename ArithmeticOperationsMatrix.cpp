#include <iostream>
#include <vector>
#include <iostream>

using namespace std;

template<class T>
ostream& operator<<(ostream& os, vector<T>& V) {
   for(int i=0; i<V.size(); i++)
      os << V[i]<<" ";
   os<<endl;
   return os;
};
void add(int val, int eklenecekdeger) {
    int i,j;
    vector<vector<int>> X;
	for(i=0;i<4;i++) {
		vector<int> Y;
		for(j=0;j<4;j++) {
			Y.push_back(val+eklenecekdeger);
		}
		X.push_back(Y);
		
	}
	
}
void multip(int val, int eklenecekdeger) {
    int i,j;
    vector<vector<int>> X;
	for(i=0;i<4;i++) {
		vector<int> Y;
		for(j=0;j<4;j++) {
			Y.push_back(val*eklenecekdeger);
		}
		X.push_back(Y);
		
	}
	cout<<X;
}



int main() {
	vector<vector<int>> X;
	int i,j,element,a=4,b=2;
	cout<<"Matrix 1:"<<endl;
	for(i=0;i<4;i++) {
		vector<int> Y;
		for(j=0;j<4;j++) {
			Y.push_back(a);
		}
		X.push_back(Y);
		
	}
	cout<<X<<endl;
	cout<<"Matrix 2:"<<endl;
    vector<vector<int>> Z;
    for(i=0;i<4;i++) {
		vector<int> Y;
		for(j=0;j<4;j++) {
			Y.push_back(b);
		}
		Z.push_back(Y);
		
	}
	cout<<Z<<endl<<"Matrix1 + Matrix2:"<<endl;
	vector<vector<int>> T;
    for(i=0;i<4;i++) {
		vector<int> Y;
		for(j=0;j<4;j++) {
			Y.push_back(a+b);
		}
		T.push_back(Y);
		
	}
	
	cout<<T<<endl<<"Matrix1 * Matrix2:"<<endl;
	vector<vector<int>> E;
    for(i=0;i<4;i++) {
		vector<int> Y;
		for(j=0;j<4;j++) {
			Y.push_back(a*b);
		}
		E.push_back(Y);
		
	}
	cout<<E<<endl;
	cout<<"Matrix1 - Matrix2:"<<endl;
	vector<vector<int>> K;
    for(i=0;i<4;i++) {
		vector<int> Y;
		for(j=0;j<4;j++) {
			Y.push_back(a-b);
		}
		K.push_back(Y);
		
	}
	cout<<K<<endl;
    
	
	
	
	
		
		
 return 0;
}
