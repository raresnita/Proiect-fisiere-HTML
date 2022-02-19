//---------------------------------------------------------------------------


#pragma hdrstop

#include "ElementHandler.h"


string findTagName(string x)
{
    int begin = x.find("<") + 1;
    int end = x.find(">");
    return x.substr(begin, end - begin);
}

string findContent(string content, string tagName)
{
    int startPosition = content.find(">") + 1;
    int endPosition = content.find("</" + tagName + ">") - startPosition;
    return content.substr(startPosition, endPosition);
}
//---------------------------------------------------------------------------

#pragma package(smart_init)
