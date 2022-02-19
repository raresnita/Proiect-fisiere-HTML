object fAbt: TfAbt
  Left = 1043
  Top = 213
  BorderStyle = bsDialog
  Caption = 'Despre'
  ClientHeight = 106
  ClientWidth = 513
  Color = clSkyBlue
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 16
    Top = 8
    Width = 489
    Height = 20
    Caption = 
      'Aplicatie pentru vizualizarea de fisiere HTML simple. Browser we' +
      'b simplu'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Trebuchet MS'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 112
    Top = 32
    Width = 264
    Height = 16
    Caption = 'Proiect realizat de Nita Rares, TI, 223/2, 2021'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
  end
  object btnClose: TButton
    Left = 256
    Top = 64
    Width = 75
    Height = 25
    Caption = #206'nchide'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = btnCloseClick
  end
end
