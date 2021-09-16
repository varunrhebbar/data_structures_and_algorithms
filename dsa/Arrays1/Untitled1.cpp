#include<iostream>
using namespace std;

class Fatherproperty{
public:
	string Propvalue = "one million dollers";
	public:
		void getProperty()
		{
			cout<<"Father property->"<<this->Propvalue<<endl;
		}
};
	class son : protected Fatherproperty{
		public:
			void getProperty()
			{
			cout<<"Son Property =>"<<this->Propvalue<<endl;
			}
	};
	class Grandson : public Fatherproperty{
		public:
			void getProperty()
			{
			cout<<"GrandSon Property =>"<<this->Propvalue<<endl;
			}
	};
	int main(){
	Grandson s1;
	s1.getProperty();
		}
	
