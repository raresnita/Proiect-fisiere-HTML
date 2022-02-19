object fMain: TfMain
  Left = 732
  Top = 236
  AutoSize = True
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsDialog
  BorderWidth = 4
  Caption = 'Proiect'
  ClientHeight = 505
  ClientWidth = 737
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object btnAbt: TButton
    Left = 616
    Top = 480
    Width = 57
    Height = 25
    Caption = 'Despre'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = btnAbtClick
  end
  object btnFile: TButton
    Left = 552
    Top = 480
    Width = 57
    Height = 25
    Caption = 'Deschide'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = btnFileClick
  end
  object editAdr: TEdit
    Left = 0
    Top = 480
    Width = 545
    Height = 25
    AutoSize = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    ReadOnly = True
    TabOrder = 2
    Text = 'Locatia fisierului va aparea aici'
  end
  object btnExit: TButton
    Left = 680
    Top = 480
    Width = 57
    Height = 25
    Caption = 'Iesire'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = btnExitClick
  end
  object fPanel: TPanel
    Left = 0
    Top = 0
    Width = 737
    Height = 473
    BevelOuter = bvNone
    Color = clCream
    Ctl3D = True
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentCtl3D = False
    ParentFont = False
    TabOrder = 4
  end
  object diagFile: TOpenDialog
    Filter = 'Fisier HTML|*.html'
    InitialDir = '%Homepath%\Documents'
    Top = 448
  end
end
