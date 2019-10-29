#include <iostream>
using namespace std;

class Shape
{
	public:
		virtual int getArea()=0;
		void setHeight(int h){
			height=h;
		}
		void setWidth(int w){
			width=w;
		}
	protected:
		int width;	int height;
};
class Triangle:public Shape
{
	public:
		int getArea(){
			return (width*height)/2;
		}
};
class Rectangle :public Shape
{
	public:
		int getArea(){
			return(width*height);
		}
};
int main(void){
	Rectangle R;
	Triangle T;
	
	R.setWidth(6);
	R.setHeight(10);
	
	cout<<"Area of Rectangle:"<<R.getArea()<<endl;
	
	T.setWidth(4);
	T.setHeight(7);
	
	cout<<"Area of Triangle:"<<T.getArea()<<endl;
	
	return 0;
	
}
