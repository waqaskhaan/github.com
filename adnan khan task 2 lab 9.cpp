#include<iostream>
using namespace std;
class Overload{
	private:
		int addition;
	public:
	Overload()
		{
		}
		Overload(int value)
		{
			addition=value;
		}
		void setvalue(int add)
		{
			addition=add;
		}
		Overload operator+(Overload A)
		{
			Overload obj;
			obj.setvalue(this->getval()+A.getval());
			return obj;	
		}
		int getval()
		{
			return addition;
		}
};
int main()
{
	Overload A1(10);
	Overload A2(30);
	Overload A3;
	A3=A1+A2;
	cout<<"First value: "<<A1.getval()<<endl;
	cout<<"Second value: "<<A2.getval()<<endl;
	cout<<"Sum: "<<A3.getval();
}