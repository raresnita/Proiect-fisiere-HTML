#ifndef ElementTextH
#define ElementTextH

//---------------------------------------------------------------------------

#pragma package(smart_init)
#include <vcl.h>
#include "ElementBase.h"

using namespace std;

class ElementText : public ElementBase
{
    private:
        TLabel* label;
        
    public:
	ElementText(string content, string tagName, TPanel* p, int offset)
	{
            this->content = content;
            this->tagName = tagName;
            label = new TLabel(p);
            label->Parent = p;
            if(tagName=="b")
                label->Font->Style=TFontStyles() << fsBold;
            if(tagName=="i")
                label->Font->Style=TFontStyles() << fsItalic;
            label->Caption = content.c_str();
            /*if(tagName=="tr")
            {
                label->Top=0;
                label->Left=offset;
            }
            else
                label->Top = offset;*/
            label->Top = offset;
	}
};

#endif
