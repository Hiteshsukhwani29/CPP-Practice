#include<iostream>
#include<unordered_map>
using namespace std;

class Node{
public:
	char data;
	unordered_map<char,Node*> m;
	bool isTerminal;

	Node(char d){
		data = d;
		isTerminal = false;
	}
};

class Trie{

	Node*root;
public:
	Trie(){
		root = new Node('\0');
	}

	//later
	void insert(string word){

		Node* temp = root;

		for(char ch : word){

			if(temp->m.count(ch)==0){
				Node *n = new Node(ch);
				temp->m[ch] = n;
			}
			temp = temp->m[ch];
		}

		temp->isTerminal = true;

	}
 };

int main(){
  
  string words[] = {"apple","ape","mango"};
  
  Trie  t;
  
  for(auto w : words){
    t.insert(w);


		return 0;
}
