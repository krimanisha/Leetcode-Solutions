class Solution {
public:
    vector<int> v;
    vector<int> preorder(Node* root) {
        if(root==NULL)
            return v;
        v.push_back(root->val);
        
        if(!root->children.empty())
        {
            for(int i=0;i<root->children.size();i++)
            {
                preorder(root->children[i]);
            }
        }
        return v;
    }
};