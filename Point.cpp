/*
*Program of points
*/

#include<iostream>
#include<math.h>

using namespace std;
class Point{
    private:
        int x,y;
    public:

    Point(int x=0,int y=0){
        this->x=x;
        this->y=y;
    }
    void set(int a,int b){
        x=a;
        y=b;
    }
    void show(){
        cout<<"("<<x<<", "<<y<<")"<<endl;
    }
    void origin(){
        this->x=0; this->y=0;
    }
    friend ostream &operator<<(ostream &output,Point &p){
        output<<"("<<p.x<<", "<<p.y<<")"<<endl;
        return output;
    }
    friend istream &operator>>(istream &input,Point &p){
        input>>p.x>>p.y;
        return input;
    }
    Point operator+(Point p){
        Point tmp;
        tmp.x=p.x+x;
        tmp.y=p.y+y;
        return tmp;
    }
    Point operator-(Point p){
        Point tmp;
        tmp.x=x-p.x;
        tmp.y=y-p.y;
        return tmp;
    }
    double distance(Point p){
        return(
            sqrt(
                pow(p.x-x,2) + pow(p.y-y,2)
            )
        );
    }
    double slope(Point p){
        return((p.y-y)/(p.x-x));
    }
    void line(Point p){
        printf("(x - %d )",x);
        cout<<" = "<<this->slope(p);
        printf(" ( y - %d ) \n",y);
    }


};
int main(void){
    Point a,b,c;
    int choice;

    while(1){
        cout<<"\n1. Enter the point :\n";
        cout<<"2. Show the point \n";
        cout<<"3. Add points\n";
        cout<<"4. Substract points\n";
        cout<<"5. Slope\n";
        cout<<"6. Line"<<endl;
        cout<<"7. Distance between\n";
        cout<<"0. Exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter a point : ";
                cin>>a;
                break;
            case 2:
                cout<<"Your point is = ";
                cout<<a<<endl;
                break;
            case 3:
                cout<<"Enter another point : ";
                cin>>b;
                c=a+b;
                cout<<"Addition = "<<c<<endl;
                break;
            case 4:
                cout<<"Enter another point : ";
                cin>>b;
                c=a-b;
                cout<<"Difference = "<<c<<endl;
                break;
            case 5:
                cout<<"Enter another point : ";
                cin>>b;
                cout<<"Slope = "<<a.slope(b)<<endl;
                break;
            case 6:
                cout<<"Enter another point : ";
                cin>>b;
                a.line(b);
                break;
            case 7:
                cout<<"Enter another point : ";
                cin>>b;
                cout<<"Distance = "<<a.distance(b)<<endl;
                break;
            case 0:
                exit(0);
            default:
                cout<<"Wrong choice...!!"<<endl;




        }

    }
    return 0;
}
