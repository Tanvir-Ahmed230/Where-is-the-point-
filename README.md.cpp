# Where-is-the-point-
Does the point lie in x axis or y axis or origin or between the axes?

#include<iostream>
using namespace std;

int main() {
int x,y;
cout<<"Enter the value of x :";
cin>>x;
cout<<"Enter the value of y :";
cin>>y;
if(x==0 && y!=0){
   cout<<"("<<x<<","<<y<<") "<<"lies in the y axis."<<endl;
}
 if(y==0 && x!=0){
cout<<"("<<x<<","<<y<<") "<<"lies in the x axis."<<endl;
}
 if(x==0 && y==0){
cout<<"("<<x<<","<<y<<") "<<"lies in the origin."<<endl;
}
else{
cout<<"("<<x<<","<<y<<") "<<"lies between the axes."<<endl;
}
    return 0;
}
