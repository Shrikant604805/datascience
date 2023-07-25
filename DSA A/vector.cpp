#include<iostream>
#include<vector>
using namespace std;

int main(){
 

    vector<int> v;
    std::cout<<"Size-->"<<v.size()<<endl;
    std::cout<<"Size-->"<<v.capacity()<<endl;
    v.push_back(1);
    std::cout<<"Capacity is "<<v.capacity()<<endl;
    std::cout<<"Size is"<<v.size()<<endl;
    v.push_back(2);
     std::cout<<"Capacity is "<<v.capacity()<<endl;
     std::cout<<"Size is"<<v.size()<<endl;
    v.push_back(3);
     std::cout<<"Capacity is "<<v.capacity()<<endl;
     std::cout<<"Size is"<<v.size()<<endl;
    v.push_back(4);
     std::cout<<"Capacity-->"<<v.capacity()<<endl;
     std::cout<<"Size-->"<<v.size()<<endl;
    v.push_back(5);
     std::cout<<"Capacity is"<<v.capacity()<<endl;
     std::cout<<"Size is"<<v.size()<<endl;

     std::cout<<"Element at index 1"<<v.at(3)<<endl;
     std::cout<<"element at"<<v.at(0)<<endl;
    v.pop_back();
     std::cout<<"Element at index 1"<<v.at(3)<<endl;
    return 0;
}