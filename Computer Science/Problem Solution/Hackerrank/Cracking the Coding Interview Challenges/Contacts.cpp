#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

struct trieNode {
	int count;
	struct trieNode* next[26];
	bool exist; 
};

trieNode *root;

int n;
string command, word;

void add(string word) {
	trieNode *t = root;
	for (int i = 0;i < word.size();i ++) {
		trieNode *p;
		if (t->next[word[i] - 'a'] == NULL) {
			p = new trieNode();
			p->exist = false;
			p->count = 1;
			for (int j = 0;j < 26;j ++) p->next[j] = NULL;
			t->next[word[i] - 'a'] = p;
			t = p;
		} else {
			t = t->next[word[i] - 'a'];
			t->count ++;
		}
		if (i == word.size() - 1) t->exist = true;
	}
}

int findCount(string word) {
	trieNode *t = root;
	for (int i = 0;i < word.size();i ++) {
		trieNode *p;
		if (t->next[word[i] - 'a'] == NULL) {
		  return 0;
		} else {
			t = t->next[word[i] - 'a'];
		}
	}
	return t->count;
}

int main() {
	cin >> n;
	root = new trieNode();
	root->exist = false;
	root->count = 0;
	for (int i = 0;i < 26;i ++) root->next[i] = NULL;
	for (int i = 0;i < n;i ++) {
			cin >> command >> word;
			if (command == "add") {
				add(word);
			} else {
				cout << findCount(word) << endl;
			}
	}
}
