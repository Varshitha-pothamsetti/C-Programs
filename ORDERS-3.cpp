#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
using namespace std;


struct TreeNode{
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : data(val), left(NULL), right(NULL){}
};

TreeNode *ConstructaTreedfs(vector<string>&node, int idx){
    if(idx >= node.size() || node[idx] == "N"){
        //idx++;
        return nullptr;
    }
    TreeNode *root = new TreeNode(stoi(node[idx]));
    //idx++;
    root->left = ConstructaTreedfs(node,2*idx+1);
    root->right = ConstructaTreedfs(node,2*idx+2);
    return root;
}
void Inorder(TreeNode *root){
    if(!root)return;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}
void Preorder(TreeNode *root){
    if(!root)return;
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}
void Postorder(TreeNode *root){
    if(!root)return;
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}
TreeNode *CreatATreeBFS(vector<string>&nodes){

    //first step ;
    int idx = 0;
    if(nodes[idx] == "N"){
        return nullptr;
    }
    TreeNode *root = new TreeNode(stoi(nodes[idx]));
    //TreeNode *temp = root;
    queue<TreeNode*>Q;
    //Q.pop() , Q.front() , Q.empty(), Q.size()
    Q.push(root);
    //root->1
    while(!Q.empty() && idx < nodes.size()){
        TreeNode *temp = Q.front();
        Q.pop();
        idx++;
        //first left take care
        if(nodes[idx]!="N"){
            TreeNode *nn = new TreeNode(stoi(nodes[idx]));
            temp->left = nn;
            Q.push(nn);

        }
        //insert right
        idx++;
        if(idx < nodes.size() && nodes[idx]!="N"){
            TreeNode *nn = new TreeNode(stoi(nodes[idx]));
            temp->right = nn;
            Q.push(nn);
        }
    }
    return root;
}

int main(){
    //int n;
    //given a decimal number writes it binary
    string s;
    getline(cin , s);
    //vector --> dynamic array
    vector<string>nodes;
    stringstream ss(s);

    string temp;
    while(ss >> temp){
        nodes.push_back(temp);
    }
    int idx = 0;
    TreeNode *root = ConstructaTreedfs(nodes,idx);
    Inorder(root);
    Preorder(root);
    Postorder(root);
}

