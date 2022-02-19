#ifndef ElementTableH
#define ElementTableH

//---------------------------------------------------------------------------

#pragma package(smart_init)
#include <vcl.h>
#include <grids.hpp>
#include <vector>
#include <string>
#include "ElementBase.h"

using namespace std;

class ElementTable : public ElementBase
{
    private:
        TLabel* label;


    public:
        ElementTable(string content, string tagName, TPanel* p, int offset)
        {
           string contentRow;
           this->content = content;
           this->tagName = tagName;
           contentRow=contentRow+" "+content;
           if(tagName=="/tr")
           {
                label = new TLabel(p);
                label->Parent = p;
                label->Caption = contentRow.c_str();
                label->Top = offset;
           }
       }
};


#endif
