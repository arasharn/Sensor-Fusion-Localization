#include <iostream>

using namespace std;

//class Circle 
//{
    //private:
        //double radius;
    //public:
        //void setRadius(double r)
        //{
            //radius = r;
        //}
        //double getArea()
        //{
            //return 3.14 * radius * radius;
        //}
//};

/*
 * Defining Member function of class 
 */
 
 class Circle
 {
	 private:
		double radius;
	 public:
		void setRadius(double r);
		double getArea();
 };
 
 void Circle :: setRadius(double r)
 {
	 radius = r;
 }
 
 double Circle :: getArea()
 {
	 return radius * radius * 3.14;
 }
 
int main(){
	Circle c1;
	c1.setRadius(2.0);
	cout << c1.getArea() << endl;
}
