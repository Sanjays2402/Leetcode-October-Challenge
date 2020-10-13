/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        
        int i=0;
        vector<int> a;
        ListNode* root= head;
        ListNode* res= head;
        while(root != NULL)
        {
            //cout<<root->val<<" ";
            a.push_back(root->val);
            root = root->next;
        }
        sort(a.begin(), a.end());
        
        while(i < a.size())
        {
            res->val=a[i];
            res=res->next;
            i++;
        }
        
        return head;
    }
};
