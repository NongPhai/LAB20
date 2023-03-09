#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect r1,Rect r2){
	double w2,h2;
	w2=min(r1.x+r1.w,r2.x+r2.w)-max(r1.x,r2.x);
	h2=min(r1.y,r2.y)-max(r1.y-r1.h,r2.y-r2.h);
	if(w2>0 && h2>0) return w2*h2;
	else return 0; 
}
