class Solution {
    public:
     vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       if (!root) return {};
   
       vector<vector<int>> result;
       deque<TreeNode*> dq;
       dq.push_back(root);
       bool leftToRight = true;
   
       while (!dq.empty()) {
         vector<int> level;
         int size = dq.size();
   
         while (size--) {
           if (leftToRight) {
             TreeNode* node = dq.front();
             dq.pop_front();
             level.push_back(node->val);
             if (node->left) dq.push_back(node->left);
             if (node->right) dq.push_back(node->right);
           } else {
             TreeNode* node = dq.back();
             dq.pop_back();
             level.push_back(node->val);
             if (node->right) dq.push_front(node->right);
             if (node->left) dq.push_front(node->left);
           }
         }
   
         result.push_back(level);
         leftToRight = !leftToRight;
       }
   
       return result;
     }
   };
   