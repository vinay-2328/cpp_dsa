#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        left = NULL;
        right = NULL;
    }
};

class cmp{
    bool operator()(node* a,node* b){
        return a->data > b->data;
    }
};

class solution {
    public:
    vector<string> huffmanCode(string s, vector<int> f, int n){
        priority_queue<node*,vector<node*> , cmp> pq;
        for(int i=0;i<n;i++){
            node* temp = new node(f[i]);
            pq.push(temp);
        }
        while(pq.size()>1){
            node* left = pq.top();
            pq.pop();
            node* right = pq.top();
            pq.pop();
            node* newnode = new node(left->data+right->data);
            newnode->left = left;
            newnode->right=right;
            pq.push(newnode)
        }
    };
};