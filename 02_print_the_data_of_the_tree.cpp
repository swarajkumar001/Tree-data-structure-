#include <iostream>
#include "TreeNode.h"
#include <vector>
using namespace std;




void printTree(TreeNode<int>*root){
	
	if(root==NULL){ // this is not a base case this is edge case......
		return;
	}
	
	
	cout<<root->data<<" : ";
	for(int i=0;i<root->children.size();i++){
		cout<< root->children[i]->data  <<" ,";
	}
	cout<<endl;
	for(int i=0;i<root->children.size();i++){
		printTree(root->children[i]);
	}
	
	
}

int main(){
	TreeNode<int>* root=new TreeNode<int> (1);
	TreeNode<int>* node1=new TreeNode<int> (2);
	TreeNode<int>* node2=new TreeNode<int> (3);
	root->children.push_back(node1);
	root->children.push_back(node2);
	printTree(root);
	
	
}
