// A bus has n stops numbered from 0 to n - 1 that form a circle. We know the distance between all pairs of neighboring stops where distance[i] is the distance between the stops number i and (i + 1) % n. The bus goes along both directions i.e. clockwise and counterclockwise. Return the shortest distance between the given start and destination stops.

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int n = distance.size();
        int clockwise = 0,counterclockwise = 0;
        for(int i = 0;i < n;i++){
            if(i >= start && i < destination) clockwise += distance[i];
            else counterclockwise += distance[i];
        }
        return min(clockwise,counterclockwise);
    }
};
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>distance;
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        distance.push_back(x);
    }
    int start,destination;
    cout<<"Enter the starting point : ";
    cin>>start;
    cout<<"Enter the ending point : ";
    cin>>destination;
    Solution solve;
    int shortestPath = solve.distanceBetweenBusStops(distance,start,destination);
    cout<<"The shortest distance between the given "<<start<<" and "<<destination<<" stops will be : "<<shortestPath;
}