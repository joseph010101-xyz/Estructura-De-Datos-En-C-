﻿object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 587
  ClientWidth = 935
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object GroupBox1: TGroupBox
    Left = 40
    Top = 24
    Width = 545
    Height = 265
    Caption = 'Ingresa Tu Cancion'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold, fsItalic]
    ParentFont = False
    TabOrder = 0
    object Label1: TLabel
      Left = 16
      Top = 48
      Width = 185
      Height = 23
      Caption = 'Nombre De La Cancion'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Segoe UI'
      Font.Style = [fsBold, fsItalic]
      ParentFont = False
    end
    object Label2: TLabel
      Left = 16
      Top = 85
      Width = 45
      Height = 23
      Caption = 'Autor'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Segoe UI'
      Font.Style = [fsBold, fsItalic]
      ParentFont = False
    end
    object Label3: TLabel
      Left = 16
      Top = 136
      Width = 32
      Height = 23
      Caption = 'A'#241'o'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Segoe UI'
      Font.Style = [fsBold, fsItalic]
      ParentFont = False
    end
    object Label4: TLabel
      Left = 16
      Top = 184
      Width = 57
      Height = 23
      Caption = 'Genero'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Segoe UI'
      Font.Style = [fsBold, fsItalic]
      ParentFont = False
    end
    object ENCancion: TEdit
      Left = 216
      Top = 46
      Width = 265
      Height = 33
      TabOrder = 0
    end
    object EAutor: TEdit
      Left = 216
      Top = 85
      Width = 265
      Height = 31
      TabOrder = 1
    end
    object EAño: TEdit
      Left = 216
      Top = 135
      Width = 265
      Height = 33
      TabOrder = 2
    end
    object EGenero: TEdit
      Left = 216
      Top = 174
      Width = 265
      Height = 33
      TabOrder = 3
    end
    object Button2: TButton
      Left = 112
      Top = 224
      Width = 97
      Height = 25
      Caption = 'Guardar'
      TabOrder = 4
      OnClick = Button2Click
    end
  end
  object GroupBox2: TGroupBox
    Left = 40
    Top = 330
    Width = 545
    Height = 249
    Caption = 'Tu Cancion Es :'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold, fsItalic]
    ParentFont = False
    TabOrder = 1
    object Label5: TLabel
      Left = 24
      Top = 40
      Width = 185
      Height = 23
      Caption = 'Nombre De La Cancion'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Segoe UI'
      Font.Style = [fsBold, fsItalic]
      ParentFont = False
    end
    object Label6: TLabel
      Left = 24
      Top = 85
      Width = 45
      Height = 23
      Caption = 'Autor'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Segoe UI'
      Font.Style = [fsBold, fsItalic]
      ParentFont = False
    end
    object Label7: TLabel
      Left = 24
      Top = 130
      Width = 32
      Height = 23
      Caption = 'A'#241'o'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Segoe UI'
      Font.Style = [fsBold, fsItalic]
      ParentFont = False
    end
    object Label8: TLabel
      Left = 24
      Top = 159
      Width = 57
      Height = 23
      Caption = 'Genero'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -17
      Font.Name = 'Segoe UI'
      Font.Style = [fsBold, fsItalic]
      ParentFont = False
    end
    object ERNCancion: TEdit
      Left = 216
      Top = 40
      Width = 273
      Height = 33
      TabOrder = 0
    end
    object ERAutor: TEdit
      Left = 216
      Top = 79
      Width = 273
      Height = 34
      TabOrder = 1
    end
    object ERAño: TEdit
      Left = 216
      Top = 119
      Width = 273
      Height = 33
      TabOrder = 2
    end
    object ERGenero: TEdit
      Left = 216
      Top = 158
      Width = 273
      Height = 33
      TabOrder = 3
    end
    object Button1: TButton
      Left = 112
      Top = 208
      Width = 97
      Height = 25
      Caption = 'Mostrar'
      TabOrder = 4
      OnClick = Button1Click
    end
  end
end
