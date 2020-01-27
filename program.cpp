#include<iostream.h>
#include<math.h>
int main()
{ double distance,x1,x2,y1,y2;
cout<<"enter the coordinates of point 1 :";
cin>>x1>>y1;
cout<<"enter the coordinates of point 2 :";
cin>>x2>>y2;
distance=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
cout<<"thedistance between("<<x1<<","<<y1<<")and("<<x2<<","<<y2<<") is : "<<distance<<endl;
return 0;
}
