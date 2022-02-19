//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "despre.h"
#include "browser.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfAbt *fAbt;
//---------------------------------------------------------------------------
__fastcall TfAbt::TfAbt(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TfAbt::btnCloseClick(TObject *Sender)
{
        Close();                
}
//---------------------------------------------------------------------------

