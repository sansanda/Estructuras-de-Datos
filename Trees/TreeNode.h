#ifndef TREENODE_H
#define TREENODE_H

#include "ITreeNode.h"
#include <QList>
#include <QVariant>

class TreeNode: public ITreeNode{

    Q_OBJECT
    Q_INTERFACES(ITreeNode)

public:
    TreeNode();
    ~TreeNode();

protected:

private:

    QList<TreeNode*> brothers;
    QList<QVariant> brothersData;
    QList<TreeNode*> childs;
    QList<QVariant> childsData;

    TreeNode *parent;
    QVariant parentData;
};

#endif // TREENODE_H
