/*
	*Name : Program of complex numbers
	*Version: 2.0.0
	*CPP
	*Kumar Shanu
*/

#include<iostream>
#include<math.h>

using namespace std;
class Complex{
	private:
		int a,b;
	public:
		
		Complex(int a=0,int b=0){
			this->a=a;
			this->b=b;
		}
		void set(int a,int b){
			this->a=a;
			this->b=b;
		}
		void display(){
			if(b>=0)
				cout<<"("<<a<<" +"<<b<<"j"<<")"<<endl;
			else
				cout<<"("<<a<<" "<<b<<"j"<<")"<<endl;
		}
		int real(){
			return a;
		}
		int imag(){
			return b;
		}
		Complex complement(){
			Complex c;
			c.a=a;
			c.b=-b;
			return c;
		}
		Complex operator+(Complex c){
			Complex t;
			t.a=this->a+c.a;
			t.b=this->b+c.b;
			return t;
		}
		Complex operator-(Complex c){
			Complex t;
			t.a=this->a-c.a;
			t.b=this->b-c.b;
			return t;
		}
		friend ostream &operator<<(ostream &output,Complex &c){
			if(c.b>=0)
				output<<"("<<c.a<<" +"<<c.b<<"j"<<")"<<endl;
			else
				output<<"("<<c.a<<" "<<c.b<<"j"<<")"<<endl;
			return output;
		}
		friend istream &operator>>(istream &input,Complex &c){
			input>>c.a>>c.b;
			return input;
		}

		float mod(){
			return(
				sqrt(pow(a,2) + pow(b,2))
			);
		}
		double angle(){
			if(b==0)
				return 0;
			if(a==0){
				cout<<"Infinity"<<endl;
				return -1;}
			return atan(b / a);
		}
		 


};

int main(void){
	int choice;
	Complex x,y,z;

	cout<<"Enter a complex no : "<<endl;
	cin>>x;
	cout<<endl;
	cout<<x<<endl;
	while(1){
		cout<<"\n1.Display No"<<endl;
		cout<<"2.Real part"<<endl;
		cout<<"3.Imaginary part"<<endl;
		cout<<"4.Complement"<<endl;
		cout<<"5. Mod"<<endl;
		cout<<"6.Add "<<endl;
		cout<<"7.Substract "<<endl;
		cout<<"8.Angle"<<endl;
		cout<<"0.Exit"<<endl;
		cout<<"Enter choice : ";
		cin>>choice;
		cout<<endl;

		switch(choice){
			case 1:
				x.display();
				break;
			case 2:
				cout<<"Real = "<<x.real()<<endl;
				break;
			case 3:
				cout<<"Imag = "<<x.imag()<<endl;
				break;
			case 4:
				x.complement().display();
				break;
			case 5:
				cout<<"Mod = "<<x.mod()<<endl;
				break;
				
			case 6:
				cout<<"Enter the no to be added : ";
				cin>>y;
				z=x+y;
				cout<<z<<endl;
				break;
			case 7:
				cout<<"Enter the no to be substracted : ";
				cin>>y;
				z=x-y;
				cout<<z<<endl;
				break;
			case 8:
				cout<<"\n\ttanø = b/a"<<endl;
				cout<<x.angle()<<endl;
				break;
			case 0:
				exit(0);
			default:
				cout<<"Wrong choice..!! "<<endl;
				
		}
	}
	
	return 0;
}
