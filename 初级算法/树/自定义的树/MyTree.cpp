#include <iostream>
#include <cstdlib>
using namespace std;

typedef struct TreeNode* BinNode;
struct TreeNode{
	int Data;
	BinNode Left;
	BinNode Right;
};

BinNode MakeNode(int Data){
 
	BinNode	ptrNode=(BinNode)malloc(sizeof(struct TreeNode)) ;
	ptrNode->Data=Data;
	ptrNode->Left=NULL;
	ptrNode->Right=NULL;
	return ptrNode; 
} 

BinNode CreateBinTree(){
	BinNode root=MakeNode(3);
	root->Left=MakeNode(4);
	root->Right=MakeNode(7);
	root->Left->Left=MakeNode(1);
	root->Left->Right=MakeNode(4);
	return root;
	
}



void Disdory(BinNode root){
	if(root){
		Disdory(root->Left);
		Disdory(root->Right);
		free(root); 
	}
}

void PreOrder(BinNode root){
	if(root){
		cout<<root->Data<<endl;
		PreOrder(root->Left);
		PreOrder(root->Right);
	}
}

int main(){
	
    BinNode  root=	CreateBinTree();
    PreOrder(root);
    Disdory(root);
	
}
