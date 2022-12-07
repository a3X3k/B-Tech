class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        	vector<int> sorted;
	for(int i=0;i<lists.size(); ++i){
		ListNode *head = lists[i];
		while(head!=NULL){
			sorted.push_back(head->val);
			head = head->next;
		}
	}
	sort(sorted.begin(), sorted.end());
	ListNode *head = new ListNode(0);
	ListNode *tmp = head;
	for(int i=0;i<sorted.size();++i){
		ListNode *ele = new ListNode(sorted[i]);
		tmp->next = ele;
		tmp = ele;
	}
	return head->next;
    }
};