#ifndef NODETEXT_H
#define NODETEXT_H

#include "../ClusterNode.h"

class NodeText : public ClusterNode
{
private:
    QString Content;
    long ID;

public:
    NodeText();
    NodeText(QString t);

    // ClusterNode interface
public:
    QString title();
    long internalId();

public:
    void setTitle(QString t);
    void setID(long i);
};

#endif // NODETEXT_H
