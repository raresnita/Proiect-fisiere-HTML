//---------------------------------------------------------------------------

#ifndef browserH
#define browserH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "SHDocVw_OCX.h"
#include <OleCtrls.hpp>
#include <Dialogs.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>

//---------------------------------------------------------------------------
class TfMain : public TForm
{
__published:	// IDE-managed Components
        TButton *btnAbt;
        TButton *btnFile;
        TOpenDialog *diagFile;
        TEdit *editAdr;
        TButton *btnExit;
        TPanel *fPanel;
        void __fastcall btnAbtClick(TObject *Sender);
        void __fastcall btnFileClick(TObject *Sender);
        void __fastcall btnExitClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfMain *fMain;
//---------------------------------------------------------------------------
#endif
