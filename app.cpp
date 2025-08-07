#include<bits/stdc++.h>
using namespace std;

struct Trie{
	
	Trie* arr[26];
	bool flag = false;
	
};

int main(){

    Trie* root = new Trie();
    
    string strs[] = {"apple","apps","apxl","box","bat"};
    
    int n = 5;
    
//    inserting 
    
    for(int i=0;i<n;i++){
    	
    	string s = strs[i];
    	Trie* curr = root;
    	
    	for(int i=0;i<s.length();i++){
    		
    		if(curr->arr[s[i]-'a'] == 0){
    			
    			curr->arr[s[i]-'a'] = new Trie();
			}
			
			curr = curr->arr[s[i]-'a'];
		}
		
		curr->flag = true;
		
	}
	
	
	//search
	
	string s = "app";
	
	Trie* curr = root;
	int fl = 0;
	
	for(int i=0;i<s.length();i++){
		
		if(curr->arr[s[i]-'a'] == 0){
			
			cout<<"Not found";
			fl = 1;
			break;
		}
		
		curr = curr->arr[s[i]-'a'];
	}
	
	if(!fl && curr->flag == true)
	cout<<"Found";
	
	else
	cout<<"Not Found";
	
	
	

    return 0;
}
