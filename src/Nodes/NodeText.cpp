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

long NodeText::id()
{
    return this->id();
}

void NodeText::setTitle(QString t)
{
    this->Content = t;
}

void NodeText::setID(long i)
{
    this->ID = i;
}
