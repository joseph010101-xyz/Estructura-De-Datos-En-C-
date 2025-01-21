object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 514
  ClientWidth = 622
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 622
    Height = 514
    ActivePage = TabSheet1
    Align = alClient
    TabOrder = 0
    ExplicitWidth = 616
    ExplicitHeight = 505
    object TabSheet1: TTabSheet
      Caption = 'Biblioteca'
      object PageControl2: TPageControl
        Left = 144
        Top = 0
        Width = 289
        Height = 487
        ActivePage = TabSheet9
        TabOrder = 0
        object TabSheet2: TTabSheet
          Caption = 'saveLibro'
          object Label1: TLabel
            Left = 71
            Top = 427
            Width = 5
            Height = 23
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clWindowText
            Font.Height = -17
            Font.Name = 'Segoe UI'
            Font.Style = [fsBold]
            ParentFont = False
          end
          object LabeledEdit1: TLabeledEdit
            Left = 3
            Top = 32
            Width = 121
            Height = 23
            EditLabel.Width = 34
            EditLabel.Height = 15
            EditLabel.Caption = 'Titulo:'
            TabOrder = 0
            Text = ''
          end
          object LabeledEdit2: TLabeledEdit
            Left = 3
            Top = 80
            Width = 121
            Height = 23
            EditLabel.Width = 28
            EditLabel.Height = 15
            EditLabel.Caption = 'ISBN:'
            TabOrder = 1
            Text = ''
          end
          object LabeledEdit3: TLabeledEdit
            Left = 3
            Top = 128
            Width = 121
            Height = 23
            EditLabel.Width = 86
            EditLabel.Height = 15
            EditLabel.Caption = 'Numero Pagina:'
            TabOrder = 2
            Text = ''
          end
          object LabeledEdit4: TLabeledEdit
            Left = 3
            Top = 176
            Width = 121
            Height = 23
            EditLabel.Width = 89
            EditLabel.Height = 15
            EditLabel.Caption = 'Numero Edicion:'
            TabOrder = 3
            Text = ''
          end
          object LabeledEdit5: TLabeledEdit
            Left = 3
            Top = 224
            Width = 121
            Height = 23
            EditLabel.Width = 46
            EditLabel.Height = 15
            EditLabel.Caption = 'Editorial:'
            TabOrder = 4
            Text = ''
          end
          object LabeledEdit6: TLabeledEdit
            Left = 3
            Top = 272
            Width = 121
            Height = 23
            EditLabel.Width = 33
            EditLabel.Height = 15
            EditLabel.Caption = 'Lugar:'
            TabOrder = 5
            Text = ''
          end
          object LabeledEdit7: TLabeledEdit
            Left = 3
            Top = 320
            Width = 121
            Height = 23
            EditLabel.Width = 67
            EditLabel.Height = 15
            EditLabel.Caption = 'A'#241'o Edicion:'
            TabOrder = 6
            Text = ''
          end
          object Button1: TButton
            Left = 192
            Top = 366
            Width = 75
            Height = 25
            Caption = 'Guardar'
            TabOrder = 7
            OnClick = Button1Click
          end
          object LabeledEdit8: TLabeledEdit
            Left = 3
            Top = 367
            Width = 121
            Height = 23
            EditLabel.Width = 42
            EditLabel.Height = 15
            EditLabel.Caption = 'Codigo:'
            TabOrder = 8
            Text = ''
          end
          object LabeledEdit18: TLabeledEdit
            Left = 3
            Top = 416
            Width = 121
            Height = 23
            EditLabel.Width = 30
            EditLabel.Height = 15
            EditLabel.Caption = 'Autor'
            TabOrder = 9
            Text = ''
          end
        end
        object TabSheet3: TTabSheet
          Caption = 'Consultar LibroTitulo'
          ImageIndex = 1
          object LabeledEdit9: TLabeledEdit
            Left = 11
            Top = 176
            Width = 121
            Height = 23
            EditLabel.Width = 89
            EditLabel.Height = 15
            EditLabel.Caption = 'Numero Edicion:'
            TabOrder = 0
            Text = ''
          end
          object LabeledEdit10: TLabeledEdit
            Left = 11
            Top = 296
            Width = 121
            Height = 23
            EditLabel.Width = 83
            EditLabel.Height = 15
            EditLabel.Caption = 'A'#241'o de Edicion:'
            TabOrder = 1
            Text = ''
          end
          object LabeledEdit11: TLabeledEdit
            Left = 11
            Top = 256
            Width = 121
            Height = 23
            EditLabel.Width = 33
            EditLabel.Height = 15
            EditLabel.Caption = 'Lugar:'
            TabOrder = 2
            Text = ''
          end
          object LabeledEdit12: TLabeledEdit
            Left = 11
            Top = 216
            Width = 121
            Height = 23
            EditLabel.Width = 46
            EditLabel.Height = 15
            EditLabel.Caption = 'Editorial:'
            TabOrder = 3
            Text = ''
          end
          object LabeledEdit13: TLabeledEdit
            Left = 11
            Top = 335
            Width = 121
            Height = 23
            EditLabel.Width = 42
            EditLabel.Height = 15
            EditLabel.Caption = 'Codigo:'
            TabOrder = 4
            Text = ''
          end
          object LabeledEdit14: TLabeledEdit
            Left = 11
            Top = 136
            Width = 121
            Height = 23
            EditLabel.Width = 86
            EditLabel.Height = 15
            EditLabel.Caption = 'Numero Pagina:'
            TabOrder = 5
            Text = ''
          end
          object LabeledEdit15: TLabeledEdit
            Left = 11
            Top = 96
            Width = 121
            Height = 23
            EditLabel.Width = 28
            EditLabel.Height = 15
            EditLabel.Caption = 'ISBN:'
            TabOrder = 6
            Text = ''
          end
          object LabeledEdit17: TLabeledEdit
            Left = 11
            Top = 24
            Width = 121
            Height = 23
            EditLabel.Width = 75
            EditLabel.Height = 15
            EditLabel.Caption = 'Ingrese Titulo:'
            TabOrder = 7
            Text = ''
          end
          object Button3: TButton
            Left = 152
            Top = 23
            Width = 113
            Height = 25
            Caption = 'Consultar'
            TabOrder = 8
            OnClick = Button3Click
          end
          object LabeledEdit16: TLabeledEdit
            Left = 11
            Top = 384
            Width = 121
            Height = 23
            EditLabel.Width = 30
            EditLabel.Height = 15
            EditLabel.Caption = 'Autor'
            TabOrder = 9
            Text = ''
          end
        end
        object TabSheet4: TTabSheet
          Caption = 'Consultar Autor'
          ImageIndex = 2
          object LabeledEdit19: TLabeledEdit
            Left = 16
            Top = 32
            Width = 121
            Height = 23
            EditLabel.Width = 30
            EditLabel.Height = 15
            EditLabel.Caption = 'Autor'
            TabOrder = 0
            Text = ''
          end
          object LabeledEdit20: TLabeledEdit
            Left = 16
            Top = 80
            Width = 121
            Height = 23
            EditLabel.Width = 31
            EditLabel.Height = 15
            EditLabel.Caption = 'Titulo'
            TabOrder = 1
            Text = ''
          end
          object LabeledEdit21: TLabeledEdit
            Left = 16
            Top = 128
            Width = 121
            Height = 23
            EditLabel.Width = 22
            EditLabel.Height = 15
            EditLabel.Caption = 'Isbn'
            TabOrder = 2
            Text = ''
          end
          object LabeledEdit22: TLabeledEdit
            Left = 16
            Top = 176
            Width = 121
            Height = 23
            EditLabel.Width = 83
            EditLabel.Height = 15
            EditLabel.Caption = 'Numero Pagina'
            TabOrder = 3
            Text = ''
          end
          object LabeledEdit23: TLabeledEdit
            Left = 16
            Top = 224
            Width = 121
            Height = 23
            EditLabel.Width = 86
            EditLabel.Height = 15
            EditLabel.Caption = 'Numero Edicion'
            TabOrder = 4
            Text = ''
          end
          object LabeledEdit24: TLabeledEdit
            Left = 16
            Top = 272
            Width = 121
            Height = 23
            EditLabel.Width = 43
            EditLabel.Height = 15
            EditLabel.Caption = 'Editorial'
            TabOrder = 5
            Text = ''
          end
          object LabeledEdit25: TLabeledEdit
            Left = 16
            Top = 320
            Width = 121
            Height = 23
            EditLabel.Width = 30
            EditLabel.Height = 15
            EditLabel.Caption = 'Lugar'
            TabOrder = 6
            Text = ''
          end
          object LabeledEdit26: TLabeledEdit
            Left = 16
            Top = 368
            Width = 121
            Height = 23
            EditLabel.Width = 81
            EditLabel.Height = 15
            EditLabel.Caption = 'A'#241'o De Edicion'
            TabOrder = 7
            Text = ''
          end
          object LabeledEdit27: TLabeledEdit
            Left = 16
            Top = 416
            Width = 121
            Height = 23
            EditLabel.Width = 39
            EditLabel.Height = 15
            EditLabel.Caption = 'Codigo'
            TabOrder = 8
            Text = ''
          end
          object Button2: TButton
            Left = 168
            Top = 31
            Width = 102
            Height = 25
            Caption = 'Consultar'
            TabOrder = 9
            OnClick = Button2Click
          end
        end
        object TabSheet5: TTabSheet
          Caption = 'Consultar por codigo'
          ImageIndex = 3
          object LabeledEdit28: TLabeledEdit
            Left = 19
            Top = 392
            Width = 121
            Height = 23
            EditLabel.Width = 30
            EditLabel.Height = 15
            EditLabel.Caption = 'Autor'
            TabOrder = 0
            Text = ''
          end
          object LabeledEdit29: TLabeledEdit
            Left = 19
            Top = 184
            Width = 121
            Height = 23
            EditLabel.Width = 89
            EditLabel.Height = 15
            EditLabel.Caption = 'Numero Edicion:'
            TabOrder = 1
            Text = ''
          end
          object LabeledEdit30: TLabeledEdit
            Left = 19
            Top = 304
            Width = 121
            Height = 23
            EditLabel.Width = 83
            EditLabel.Height = 15
            EditLabel.Caption = 'A'#241'o de Edicion:'
            TabOrder = 2
            Text = ''
          end
          object LabeledEdit31: TLabeledEdit
            Left = 19
            Top = 264
            Width = 121
            Height = 23
            EditLabel.Width = 33
            EditLabel.Height = 15
            EditLabel.Caption = 'Lugar:'
            TabOrder = 3
            Text = ''
          end
          object LabeledEdit32: TLabeledEdit
            Left = 19
            Top = 224
            Width = 121
            Height = 23
            EditLabel.Width = 46
            EditLabel.Height = 15
            EditLabel.Caption = 'Editorial:'
            TabOrder = 4
            Text = ''
          end
          object LabeledEdit33: TLabeledEdit
            Left = 19
            Top = 32
            Width = 121
            Height = 23
            EditLabel.Width = 42
            EditLabel.Height = 15
            EditLabel.Caption = 'Codigo:'
            TabOrder = 5
            Text = ''
          end
          object LabeledEdit34: TLabeledEdit
            Left = 19
            Top = 144
            Width = 121
            Height = 23
            EditLabel.Width = 86
            EditLabel.Height = 15
            EditLabel.Caption = 'Numero Pagina:'
            TabOrder = 6
            Text = ''
          end
          object LabeledEdit35: TLabeledEdit
            Left = 19
            Top = 88
            Width = 121
            Height = 23
            EditLabel.Width = 28
            EditLabel.Height = 15
            EditLabel.Caption = 'ISBN:'
            TabOrder = 7
            Text = ''
          end
          object LabeledEdit36: TLabeledEdit
            Left = 19
            Top = 344
            Width = 121
            Height = 23
            EditLabel.Width = 75
            EditLabel.Height = 15
            EditLabel.Caption = 'Ingrese Titulo:'
            TabOrder = 8
            Text = ''
          end
          object Button4: TButton
            Left = 146
            Top = 48
            Width = 132
            Height = 25
            Caption = 'Consultar Por Codigo'
            TabOrder = 9
            OnClick = Button4Click
          end
        end
        object TabSheet6: TTabSheet
          Caption = 'Prestar Libro'
          ImageIndex = 4
          object LabeledEdit37: TLabeledEdit
            Left = 27
            Top = 192
            Width = 206
            Height = 23
            EditLabel.Width = 39
            EditLabel.Height = 15
            EditLabel.Caption = 'El Libro'
            TabOrder = 0
            Text = ''
          end
          object LabeledEdit44: TLabeledEdit
            Left = 27
            Top = 96
            Width = 206
            Height = 23
            EditLabel.Width = 196
            EditLabel.Height = 15
            EditLabel.Caption = 'Ingrese el codigo del Libro que Desea'
            TabOrder = 1
            Text = ''
          end
          object LabeledEdit45: TLabeledEdit
            Left = 27
            Top = 144
            Width = 206
            Height = 23
            EditLabel.Width = 204
            EditLabel.Height = 15
            EditLabel.Caption = 'Ingrese la Fecha que Devolvera el Libro'
            TabOrder = 2
            Text = ''
          end
          object Button5: TButton
            Left = 27
            Top = 32
            Width = 75
            Height = 25
            Caption = 'Prestar'
            TabOrder = 3
            OnClick = Button5Click
          end
        end
        object TabSheet7: TTabSheet
          Caption = 'Devolver Libro'
          ImageIndex = 5
          object LabeledEdit38: TLabeledEdit
            Left = 3
            Top = 55
            Width = 121
            Height = 23
            EditLabel.Width = 42
            EditLabel.Height = 15
            EditLabel.Caption = 'Codigo:'
            TabOrder = 0
            Text = ''
          end
          object LabeledEdit39: TLabeledEdit
            Left = 3
            Top = 104
            Width = 254
            Height = 23
            EditLabel.Width = 39
            EditLabel.Height = 15
            EditLabel.Caption = 'El Libro'
            TabOrder = 1
            Text = ''
          end
          object Button6: TButton
            Left = 168
            Top = 54
            Width = 75
            Height = 25
            Caption = 'Devolver'
            TabOrder = 2
            OnClick = Button6Click
          end
        end
        object TabSheet8: TTabSheet
          Caption = 'Reservar Libro'
          ImageIndex = 6
          object LabeledEdit40: TLabeledEdit
            Left = 11
            Top = 63
            Width = 121
            Height = 23
            EditLabel.Width = 42
            EditLabel.Height = 15
            EditLabel.Caption = 'Codigo:'
            TabOrder = 0
            Text = ''
          end
          object LabeledEdit41: TLabeledEdit
            Left = 11
            Top = 112
            Width = 254
            Height = 23
            EditLabel.Width = 39
            EditLabel.Height = 15
            EditLabel.Caption = 'El Libro'
            TabOrder = 1
            Text = ''
          end
          object Button7: TButton
            Left = 168
            Top = 62
            Width = 75
            Height = 25
            Caption = 'Reservar'
            TabOrder = 2
            OnClick = Button7Click
          end
        end
        object TabSheet9: TTabSheet
          Caption = 'Dar DE Baja'
          ImageIndex = 7
          object LabeledEdit42: TLabeledEdit
            Left = 19
            Top = 120
            Width = 254
            Height = 23
            EditLabel.Width = 39
            EditLabel.Height = 15
            EditLabel.Caption = 'El Libro'
            TabOrder = 0
            Text = ''
          end
          object LabeledEdit43: TLabeledEdit
            Left = 19
            Top = 71
            Width = 121
            Height = 23
            EditLabel.Width = 42
            EditLabel.Height = 15
            EditLabel.Caption = 'Codigo:'
            TabOrder = 1
            Text = ''
          end
          object Button8: TButton
            Left = 176
            Top = 70
            Width = 75
            Height = 25
            Caption = 'Dar De Baja'
            TabOrder = 2
            OnClick = Button8Click
          end
        end
      end
    end
  end
end
