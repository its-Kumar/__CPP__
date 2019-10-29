#include <iostream>
using namespace std;

class cube
{
	public:
	void setLength(double l){
		length=l;
	}	
	void setBreadth(double b){
		breadth=b;
	}
	void setHeight(double h){
		height=h;
	}
	double getVolume(void){
		return length*height*breadth;
	}
	
	//overload + operator to add to cube
	cube operator+(const cube& b){
		cube c;
		c.length=this->length+b.length;
		c.breadth=this->breadth+b.breadth;
		c.height=this->height+b.height;
		return c;
	}
	private:
		double length;
		double height;
		double breadth;
};

int main(){
	cube c1,c2,c3;
	
	c1.setLength(4.0);
	c1.setBreadth(6.0);
	c1.setHeight(5.0);
	
	c2.setLength(8.0);
	c2.setBreadth(4.0);
	c2.setHeight(10.0);
	N
	cout<<"volume of cube1: "<<c1.getVolume()<<endl;
	cout<<"volume of cube2: "<<c2.getVolume()<<endl;
	c3=c1+c2;
	
	cout<<"volume of cube3: "<<c3.getVolume()<<endl;
	
	return 0;
}
