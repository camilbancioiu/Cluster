#include "NodeText.h"

NodeText::NodeText()
{
}

NodeText::NodeText(QString t) : Content(t)
{

}

QString NodeText::title()
{
    return this->Content;
}

long NodeText::internalId()
{
    return this->ID;
}

void NodeText::setTitle(QString t)
{
    this->Content = t;
}

void NodeText::setID(long i)
{
    this->ID = i;
}
