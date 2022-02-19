//---------------------------------------------------------------------------
#ifndef PanelConnectionH
#define PanelConnectionH

#pragma hdrstop

#include "PanelConnection.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)

class PanelHolder
{
        TPanel* page;
        PanelHolder(string FileName)
        {
                page = new TPanel(fPanel);
                panel->Visible=true;
                panel->Height=473;
                panel->Width=737;
                fPanel->;
        }
}

#endif
