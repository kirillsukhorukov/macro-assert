#include <iostream>
#include <cassert>

using namespace std;

float travelTime(float distance, float speed)
{
    return distance/speed;
}

int main()
{
    float distance, speed;
    cout << "------------Macro assert------------" << endl;
    cout << "Enter distance (km): ";
    cin >> distance;
    cout << "Enter speed (km/h): ";
    cin >> speed;
    assert(speed>0);
    if (distance>=0) cout << "Travel time: " << travelTime(distance, speed) << " hour" << endl;
    else cout << "Distance entry error!" << endl;

    return 0;
}
