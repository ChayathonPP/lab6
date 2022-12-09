#include <iostream>
#include<cmath>
using namespace std;
double deg2rad(double d)
{
  return d*0.0174532925;
}

double rad2deg(double r)
{
  return r*57.2957795;
}

double findXComponent(double Lx1,double Lx2,double Rx1,double Rx2)
{
 return (Lx1*cos(Rx1))+(Lx2*cos(Rx2));
}

double findYComponent(double Ly1,double Ly2,double Ry1,double Ry2)
{
 return (Ly1*sin(Ry1))+(Ly2*sin(Ry2));

}

double pythagoras(double x,double y)
{
   return sqrt(pow(x,2.00)+pow(y,2.00));
}

void showResult(double vec,double direc)
{
  cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
  cout << "Length of the resultant vector = " << vec <<"\n";
  cout << "Direction of the resultant vector (deg) = " << direc << "\n";
  cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}
int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}