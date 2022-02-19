#ifndef ElementHandlerH
#define ElementHandlerH

//---------------------------------------------------------------------------

#include "ElementText.h"
#include "ElementTable.h"

string findTagName(string x);
string findContent(string content, string tagName);

class ElementHandler
{
    private:
        vector <ElementText*> textElements;
        vector <ElementTable*> tableElements;
        TPanel* panel;
    public:
        ElementHandler(string fileName, TPanel* fPanel)
        {
            ifstream read(fileName.c_str());
            string content;
            int offset = 0;
            while (getline(read, content))
            {
                string tagName = findTagName(content);
                string tagContent = findContent(content, tagName);
                ElementText* tempText = new ElementText(tagContent, tagName, fPanel, offset);
                textElements.push_back(tempText);
                offset += 15;
            }
        }
};

#endif

