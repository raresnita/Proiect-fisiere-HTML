//---------------------------------------------------------------------------

#ifndef despreH
#define despreH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TfAbt : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        TButton *btnClose;
        void __fastcall btnCloseClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfAbt(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfAbt *fAbt;
//---------------------------------------------------------------------------
#endif
