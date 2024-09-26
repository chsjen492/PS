#include <bits/stdc++.h>
using namespace std;

struct node {
    char left;
    char right;
};

map<char, node> m;

void preorder (char root) {
    if(root=='.'){
        return;
    }
    cout<<root;
    preorder(m[root].left);
    preorder(m[root].right);
}

void inorder (char root) {
    if(root=='.'){
        return;
    }
    inorder(m[root].left);
    cout<<root;
    inorder(m[root].right);
}

void postorder (char root) {
    if(root=='.'){
        return;
    }
    postorder(m[root].left);
    postorder(m[root].right);
    cout<<root;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    char root, left, right;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>root>>left>>right;
        m[root].left = left;
        m[root].right = right;
    }
    
    preorder('A');
    cout<<'\n';
    inorder('A');
    cout<<'\n';
    postorder('A');
    
}