#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double mph = 6.5;
    // PACE calculation
    /* write your code */
    cout<<"How fast are you going in mph?"<<endl;
    cin>>mph;
    //express pace in minutes and seconds
  /* write your code here */
    double mpm = mph / 60;
    double mps = mpm / 60;
  //express your output in 1 decimal points
    cout<<"You are running "<<mpm<<" miles per minute!"<<endl;
    cout<<"You are running "<<mps<<" miles per second!"<<endl;

    return 0;
}
