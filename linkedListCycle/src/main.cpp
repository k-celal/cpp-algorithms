#include <iostream>
#include <bits/stdc++.h>
using namespace std;
  //Definition for singly-linked list.
 struct ListNode {
      int val;
      ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
  };

class Solution {
	ListNode head;	
public:
    bool hasCycle(ListNode *head) {
		unordered_set<ListNode*>Visited;
		while (head!=nullptr)
		{
			if(Visited.find(head)!=Visited.end()){
				return true;
			}
			Visited.insert(head);
			head=head->next; 
		}
		return false;
		
    }
};
//O(1) Solution
class Solution {
	
public:
    bool hasCycle(ListNode *head) {
		ListNode *fast=head,*slow=head;
		unordered_set<ListNode*>Visited;
		while (fast != nullptr && fast->next!=nullptr)
		{
			slow=slow->next;
			fast=fast->next->next;
			if(slow==fast){
				return true;
			}
		}
		return false;
		
    }
};