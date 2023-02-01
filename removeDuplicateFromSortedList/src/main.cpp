#include <iostream>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
// class Solution {
// 	ListNode *clearedList=nullptr;
// 	ListNode *traverse;


// public:
// 	void add(int value,ListNode *List){
// 		if (List==nullptr)
// 		{
// 			List->val=value;
// 			return;
// 		}
// 		add(value,List->next);
// 	}
//     ListNode* deleteDuplicates(ListNode* head) {
// 		traverse=head;
//         while (!traverse)
// 		{
// 			if (traverse->val==traverse->next->val)
// 			{
// 				traverse=traverse->next;
// 			}
// 			add(traverse->val,clearedList);
// 			traverse=traverse->next;
// 		}
// 		return clearedList;
//     }
// };
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* newHead=new ListNode();
		newHead->next=head;
        ListNode* clearedList=newHead;
        ListNode* traverse=head;
		while (traverse != nullptr)
		{
			if (traverse->next!=nullptr && traverse->val==traverse->next->val)
			{
				while (traverse->next!=nullptr && traverse->val==traverse->next->val)
				{
					traverse=traverse->next;
				}
				clearedList->next=traverse->next;
				
			}
			else{
				clearedList=clearedList->next
			}
			traverse=traverse->next;
			
		}
		return newHead->next;
		


    }
};
int main(int argc, char const *argv[])
{
	ListNode *head=new ListNode;
	ListNode *deletedup;
	head->val=1;
	// head->next->val=2;
	// head->next->next->val=2;
	// head->next->next->next->val=3;
	Solution sol;
	deletedup=sol.deleteDuplicates(head);
	cout<<deletedup->val;
	return 0;
}
