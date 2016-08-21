#ifndef CHAPTER3_H
#define CHAPTER3_H
#include "publicHeader.h"
#include "chapter2.h"
#include <unordered_map>
#include <utility>
#include <limits.h>

namespace chapter3{
    using chapter2::treeNode;
    using namespace std;
    void BTreeDestroy(treeNode *tree);



    string getSpace(int cnt);
    void printInorder(treeNode *head,int height,string to,int len);
    void printTree(treeNode *root);
    
    void preorderWalk(treeNode *root);
    void inorderWalk(treeNode *root);
    void postrderWalkV1(treeNode *root);
    void postorderWalk(treeNode *root);
    
    string intTostr(int val);
    int strToint(const string &s);

    vector<string> split(const string& src, string separate_character);
    string serialBypreorder(treeNode *root);
    treeNode *reconverByprevorder(queue<string> &q);
    treeNode* recoverByprevstring(string prevStr);
    string serialBylevel(treeNode *root);
    treeNode* createNodeFromstr(const string &str);
    treeNode* reconBylevel(const string &str);

    int preorderAndGotSum(treeNode *head,int sum,int preSum,
                int level,int maxLen,unordered_map<int,int> &sumMap);
    int getMaxlen(treeNode *root,int sum);

    treeNode* postOrder(treeNode *head,vector<int> &record);
    treeNode* largestSubBST(treeNode *root);


}


#endif