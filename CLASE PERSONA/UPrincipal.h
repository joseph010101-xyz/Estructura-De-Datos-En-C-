//---------------------------------------------------------------------------

#ifndef UPrincipalH
#define UPrincipalH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include "UPersona.h"
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TEdit *EResultado;
	TEdit *EEdad;
	TEdit *EPeso;
	TEdit *EAltura;
	TButton *Button1;
	TLabel *Label2;
	TButton *Button2;
	TLabel *Label3;
	TLabel *Label4;
	TButton *Button3;
	TEdit *EDAD;
	TLabel *Label5;
	TGroupBox *GroupBox1;
	TGroupBox *GroupBox2;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TLabel *Label11;
	TLabel *Label12;
	TLabel *Label13;
	TLabel *Label14;
	TLabel *Label15;
	TLabel *Label16;
	TLabel *Label17;
	TEdit *ENombre;
	TEdit *EFDN;
	TEdit *ELDN;
	TEdit *ESexo;
	TEdit *EEPeso;
	TEdit *EEAltura;
	TEdit *ERNombre;
	TEdit *ERFDN;
	TEdit *ERLDN;
	TEdit *ERSexo;
	TEdit *ERPeso;
	TEdit *ERAltura;
	TButton *Button4;
	TButton *Button5;
	TImage *Image1;
	TImage *Image2;
	TEdit *ECI;
	TButton *Button6;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
