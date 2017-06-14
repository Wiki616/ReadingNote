/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/
   int getMinValue(Node* root) {
       int minValue = 100000;
       minValue = minValue < root->data ? minValue : root->data;
       if (root->left) {
           int leftMin = getMinValue(root->left);
           minValue = minValue < leftMin ? minValue : leftMin;
       }
       if (root->right) {
           int rightMin = getMinValue(root->right);
           minValue = minValue < rightMin ? minValue : rightMin;
       }
       return minValue;
   }

   int getMaxValue(Node* root) {
       int maxValue = -1;
       maxValue = maxValue > root->data ? maxValue : root->data;
       if (root->left) {
           int leftMax = getMaxValue(root->left);
           maxValue = maxValue > leftMax ? maxValue : leftMax;
       }
       if (root->right) {
           int rightMax = getMaxValue(root->right);
           maxValue = maxValue > rightMax ? maxValue : rightMax;
       }
       return maxValue;
   }

   bool checkBST(Node* root) {
       int leftMax = -1;
       int rightMin = 1000000;
       if (root->left) {
           if (!checkBST(root->left)) return false;
           leftMax = getMaxValue(root->left);    
       }        
       if (root->right) {
           if (!checkBST(root->right)) return false;
           rightMin = getMinValue(root->right);
       }
       return leftMax < root->data && root->data < rightMin;
   }

