#include<iostream>
using namespace std;
/////////////////////////////////////
class distance
{ 
private:
int feet;
float inches;
public:
distance( ): feet(0),inches(0.0)
{ }
distance(int ft, float in): feet(ft),inches(in)
{ }
////////////////////////////////
void get_dist()
{
    cout<<endl<<"Enter feet: "; cin>>feet;
    cout<<endl<<"Enter inches: "; cin>>inches;
}
void show_dist()
{
    cout<<endl<<feet<<" "<<inches;
}
distance add_dist(distance);
};

/////////////////////////////////

distance distance::add_dist(distance d2)
{
    distance temp;
    temp.inches= inches +d2.inches;
    if(temp.inches>=12.0)
    {
        temp.inches-=12.0;
        temp.feet=1;
    }
    temp.feet += feet + d2.feet;
    return temp;
}
//////////////////////////////////////////////////////////
int main()
{
    distance dist1,dist3;
    distance dist2(11,6.25);
    dist1.get_dist();
    dist3 = dist1.add_dist(dist1);
    cout << "\ndist1 = "; dist1.show_dist();
cout << "\ndist2 = "; dist2.show_dist();
cout << "\ndist3 = "; dist3.show_dist();
cout << endl;
return 0;
}
