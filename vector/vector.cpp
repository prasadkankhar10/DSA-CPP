#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int>vec1;// empty verale
    vector<int>vec2={1,2,3}; //just like array but with dyamic memory dont need to be space with memory
    vector<int>vec3(3,0); // 3 items and in every item 0 0,0,0

    //For each loop
    for(int value: vec2){
        cout<<value<<endl;
    }

    //Functons of vector
    //1)size

    cout<< vec3.size()<<endl; // show the size of vector

    //2) push back

    vec1.push_back(11);// to add elemnt at the end of vecotr 

    //3) pop back
    vec2.pop_back();// remove/delete the last/end elemnt of vecotr

    cout<<"after pop"<<endl;
    for(int i:vec2){
        cout<<i;
    }

    //4)Front

    cout<<"/n"<< vec3.front()<<endl;// show the first elemnt of vector index 0

    //5)back

    cout<<vec2.back()<<endl;

    //6) at

    cout<<vec1.at(0)<<endl;// to show elemnt/item at any index of vector

}