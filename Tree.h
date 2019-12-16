//
// Created by Feng on 2019/12/14.
//

#ifndef TEMPROJ_TREE_H
#define TEMPROJ_TREE_H
//Everything should be clear, if they are not, maybe it's because you don't really understand.
//lx13.28
//TreeNode是类似指针的类
#include <string>
class TreeNode
{
public:
    //默认构造函数
    TreeNode():value(std::string()), count(new int(0)), left(nullptr), right(nullptr) {}
    //拷贝构造函数
    TreeNode(const TreeNode &rhs): value(rhs.value), count(rhs.count), left(rhs.left), right(rhs.right) {++*count;}

    TreeNode& operator=(const TreeNode &rhs);
    ~TreeNode();
private:
    std::string value;
    int *count;
    TreeNode *left;
    TreeNode *right;
};
//拷贝赋值运算符
TreeNode& TreeNode::operator=(const TreeNode &rhs)
{
    ++*rhs.count;
    if(--*count == 0)
    {
        delete count;
        delete left;
        delete right;
    }
    count = rhs.count;
    value = rhs.value;
    left = rhs.left;
    right = rhs.right;
    return *this;
}
//析构函数
TreeNode::~TreeNode()
{
    if(--*count == 0)
    {
        delete count;
        delete left;
        delete right;
    }
}

class BinStrTree
{
public:
    BinStrTree(): root(new TreeNode()) {}
    BinStrTree(const BinStrTree& bst): root(new TreeNode(*bst.root)) {}
    BinStrTree& operator=(const BinStrTree &bst);
    ~BinStrTree()
    {
        delete root;
    }
private:
    TreeNode *root;
};
BinStrTree& BinStrTree::operator=(const BinStrTree &bst)
{
    TreeNode* nr = new TreeNode(*bst.root);
    delete root;
    root = nr;
    return *this;
}
#endif //TEMPROJ_TREE_H
