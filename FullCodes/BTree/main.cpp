#include <iostream>
#include "btree.h"

void test1(){
    cout << "Test 1: "<<endl;
    Node<int>* root = new Node<int>({11, 16, 20, 31});
    root->link_child(0, {3, 5});
    root->link_child(1, {12, 15});
    root->link_child(2, {17, 19});
    root->link_child(3, {22, 25, 27, 28});
    root->link_child(4, {32, 36, 37, 38});
    cout<<root->to_string()<<endl;//3,5,11,12,15,16,17,19,20,22,25,27,28,31,32,36,37,38
    cout<<"search(5):"<<root->search(5)<<endl;//search(5): 1
    cout<<"search(36):"<<root->search(36)<<endl;//search(36): 1
    cout<<"search(13):"<<root->search(13)<<endl;//search(13): 0
    vector<int> result = root->range_search(16, 21);
    for(auto elem : result) cout<<elem<<", ";//16,17,19,20
    cout<<endl;    
}

void test2(){
    cout << "Test 2: "<<endl;
    Node<int>* root = new Node<int>({20});
    root->link_child(0, {11, 16});
    root->link_child(1, {31, 35});
    root->children[0]->link_child(0, {3, 5});
    root->children[0]->link_child(1, {12, 15});
    root->children[0]->link_child(2, {17, 19});
    root->children[1]->link_child(0, {22, 25, 27, 28});
    root->children[1]->link_child(1, {32, 33});
    root->children[1]->link_child(2, {36, 38});
    cout<<root->to_string()<<endl;//3,5,11,12,15,16,17,19,20,22,25,27,28,31,32,33,35,36,38
    cout<<"search(35):"<<root->search(35)<<endl;//search(35): 1
    cout<<"search(22):"<<root->search(22)<<endl;//search(22): 1
    cout<<"search(13):"<<root->search(13)<<endl;//search(13): 0
    vector<int> result = root->range_search(0, 10);
    for(auto elem : result) cout<<elem<<", ";//31,32,33
    cout<<endl;  
}

int main(){

    test1();
    test2();
}