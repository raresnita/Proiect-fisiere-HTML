#include <vcl.h>
#include <fstream.h>
#pragma hdrstop

#include "browser.h"
#include "despre.h"
#include "ElementHandler.h"
#include "ElementText.h"
#include "ElementTable.h"

#pragma package(smart_init)
#pragma link "SHDocVw_OCX"
#pragma resource "*.dfm"

TfMain *fMain;
//---------------------------------------------------------------------------
__fastcall TfMain::TfMain(TComponent* Owner)
        : TForm(Owner)
{
       ElementHandler x("main.html", fPanel);
}

//---------------------------------------------------------------------------

void __fastcall TfMain::btnAbtClick(TObject *Sender)
{
        fAbt->ShowModal();        
}

//---------------------------------------------------------------------------

void __fastcall TfMain::btnFileClick(TObject *Sender)
{
        diagFile->Execute();
        string htmlName=diagFile->FileName.c_str();
        editAdr->Text=htmlName.c_str();
        ElementHandler clear("clear.html", fPanel);
        ElementHandler x(htmlName, fPanel);
}

//---------------------------------------------------------------------------

void __fastcall TfMain::btnExitClick(TObject *Sender)
{
        exit(0);
}
//---------------------------------------------------------------------------




