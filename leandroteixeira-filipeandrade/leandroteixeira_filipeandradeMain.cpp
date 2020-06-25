/***************************************************************
 * Name:      leandroteixeira_filipeandradeMain.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2017-06-13
 * Copyright:  ()
 * License:
 **************************************************************/
// Indentificação dos Integrantes
// Leandro Teixeira Martins RA:0026967
// Filipe Andrade Coelho Moreira RA:0022130

#include "leandroteixeira_filipeandradeMain.h"
#include <wx/msgdlg.h>
#include <cstdlib>
#include <ctime>

//(*InternalHeaders(leandroteixeira_filipeandradeFrame)
#include <wx/string.h>
#include <wx/intl.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(leandroteixeira_filipeandradeFrame)
const long leandroteixeira_filipeandradeFrame::ID_TOGGLEBUTTON1 = wxNewId();
const long leandroteixeira_filipeandradeFrame::ID_TOGGLEBUTTON2 = wxNewId();
const long leandroteixeira_filipeandradeFrame::ID_TOGGLEBUTTON5 = wxNewId();
const long leandroteixeira_filipeandradeFrame::ID_TOGGLEBUTTON6 = wxNewId();
const long leandroteixeira_filipeandradeFrame::ID_TOGGLEBUTTON3 = wxNewId();
const long leandroteixeira_filipeandradeFrame::ID_TOGGLEBUTTON7 = wxNewId();
const long leandroteixeira_filipeandradeFrame::ID_TOGGLEBUTTON8 = wxNewId();
const long leandroteixeira_filipeandradeFrame::ID_TOGGLEBUTTON4 = wxNewId();
const long leandroteixeira_filipeandradeFrame::ID_TOGGLEBUTTON9 = wxNewId();
const long leandroteixeira_filipeandradeFrame::ID_TOGGLEBUTTON10 = wxNewId();
const long leandroteixeira_filipeandradeFrame::ID_TOGGLEBUTTON12 = wxNewId();
const long leandroteixeira_filipeandradeFrame::idMenuQuit = wxNewId();
const long leandroteixeira_filipeandradeFrame::idMenuAbout = wxNewId();
const long leandroteixeira_filipeandradeFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(leandroteixeira_filipeandradeFrame,wxFrame)
    //(*EventTable(leandroteixeira_filipeandradeFrame)
    //*)
END_EVENT_TABLE()

leandroteixeira_filipeandradeFrame::leandroteixeira_filipeandradeFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(leandroteixeira_filipeandradeFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxBoxSizer* BoxSizer3;
    wxMenu* Menu1;
    wxBoxSizer* BoxSizer2;
    wxBoxSizer* BoxSizer4;
    wxBoxSizer* BoxSizer1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;
    wxBoxSizer* BoxSizer6;
    wxBoxSizer* BoxSizer5;

    Create(parent, id, _("Jogo Da Velha"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    BoxSizer1 = new wxBoxSizer(wxVERTICAL);
    BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
    btnIniciar = new wxToggleButton(this, ID_TOGGLEBUTTON1, _("Iniciar"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON1"));
    BoxSizer2->Add(btnIniciar, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(BoxSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    btnA = new wxToggleButton(this, ID_TOGGLEBUTTON2, _(" "), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON2"));
    BoxSizer3->Add(btnA, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    btnB = new wxToggleButton(this, ID_TOGGLEBUTTON5, _(" "), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON5"));
    BoxSizer3->Add(btnB, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    btnC = new wxToggleButton(this, ID_TOGGLEBUTTON6, _(" "), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON6"));
    BoxSizer3->Add(btnC, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(BoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
    btnD = new wxToggleButton(this, ID_TOGGLEBUTTON3, _(" "), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON3"));
    BoxSizer4->Add(btnD, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    btnE = new wxToggleButton(this, ID_TOGGLEBUTTON7, _(" "), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON7"));
    BoxSizer4->Add(btnE, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    btnF = new wxToggleButton(this, ID_TOGGLEBUTTON8, _(" "), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON8"));
    BoxSizer4->Add(btnF, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(BoxSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
    btnG = new wxToggleButton(this, ID_TOGGLEBUTTON4, _(" "), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON4"));
    BoxSizer5->Add(btnG, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    btnH = new wxToggleButton(this, ID_TOGGLEBUTTON9, _(" "), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON9"));
    BoxSizer5->Add(btnH, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    btnI = new wxToggleButton(this, ID_TOGGLEBUTTON10, _(" "), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON10"));
    BoxSizer5->Add(btnI, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(BoxSizer5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
    btnSair = new wxToggleButton(this, ID_TOGGLEBUTTON12, _("Sair"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON12"));
    BoxSizer6->Add(btnSair, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(BoxSizer6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(BoxSizer1);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    BoxSizer1->Fit(this);
    BoxSizer1->SetSizeHints(this);

    Connect(ID_TOGGLEBUTTON1,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&leandroteixeira_filipeandradeFrame::OnbtnIniciarToggle);
    Connect(ID_TOGGLEBUTTON2,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&leandroteixeira_filipeandradeFrame::OnbtnAToggle);
    Connect(ID_TOGGLEBUTTON5,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&leandroteixeira_filipeandradeFrame::OnbtnBToggle);
    Connect(ID_TOGGLEBUTTON6,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&leandroteixeira_filipeandradeFrame::OnbtnCToggle);
    Connect(ID_TOGGLEBUTTON3,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&leandroteixeira_filipeandradeFrame::OnbtnDToggle);
    Connect(ID_TOGGLEBUTTON7,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&leandroteixeira_filipeandradeFrame::OnbtnEToggle);
    Connect(ID_TOGGLEBUTTON8,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&leandroteixeira_filipeandradeFrame::OnbtnFToggle);
    Connect(ID_TOGGLEBUTTON4,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&leandroteixeira_filipeandradeFrame::OnbtnGToggle);
    Connect(ID_TOGGLEBUTTON9,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&leandroteixeira_filipeandradeFrame::OnbtnHToggle);
    Connect(ID_TOGGLEBUTTON10,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&leandroteixeira_filipeandradeFrame::OnbtnIToggle);
    Connect(ID_TOGGLEBUTTON12,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&leandroteixeira_filipeandradeFrame::OnbtnSairToggle);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&leandroteixeira_filipeandradeFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&leandroteixeira_filipeandradeFrame::OnAbout);
    //*)
}

leandroteixeira_filipeandradeFrame::~leandroteixeira_filipeandradeFrame()
{
    //(*Destroy(leandroteixeira_filipeandradeFrame)
    //*)
}

void leandroteixeira_filipeandradeFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void leandroteixeira_filipeandradeFrame::OnAbout(wxCommandEvent& event)
{
    wxMessageBox(_("Alunos: \n Leandro Teixeira RA:0026967. \n Filipe Andrade RA:0022130. \n Disciplina: Algoritimo e estrutura de dados."), _("Sobre"));

}

//  Função do botão Iniciar.
void leandroteixeira_filipeandradeFrame::OnbtnIniciarToggle(wxCommandEvent& event)
{
     wxString x;
     x=" ";

     //  Ações para imprimir o caractere " " em todos os botões.
     btnA->SetLabel(x);
     btnB->SetLabel(x);
     btnC->SetLabel(x);
     btnD->SetLabel(x);
     btnE->SetLabel(x);
     btnF->SetLabel(x);
     btnG->SetLabel(x);
     btnH->SetLabel(x);
     btnI->SetLabel(x);

     //  Ações para atribui falso a todos os botões.
     btnA->SetValue(false);
     btnB->SetValue(false);
     btnC->SetValue(false);
     btnD->SetValue(false);
     btnE->SetValue(false);
     btnF->SetValue(false);
     btnG->SetValue(false);
     btnH->SetValue(false);
     btnI->SetValue(false);

     //  Ações para habilitar o funcionamento de todos os botões.
     btnA->Enable();
     btnB->Enable();
     btnC->Enable();
     btnD->Enable();
     btnE->Enable();
     btnF->Enable();
     btnG->Enable();
     btnH->Enable();
     btnI->Enable();

}
//  Função do botão A.
void leandroteixeira_filipeandradeFrame::OnbtnAToggle(wxCommandEvent& event)
{
    //  Verificação se o botão está preenchido.
    if(btnA->GetLabel() == " "){
        usuario(1);

        //  Verificação se ouve ou não vencedor.
        if(!(verifique_vitoriaUsuario() == 1)){
        fazjogada();
        verifique_vitoriaCPU();
        verifique_empate();
        }
    }else{
        //  Mensagem informando que a posição está ocupada.
        wxMessageBox(_("Posicao ocupada! \n Selecione uma posicao em branco."));
    }

}
//  Função do botão B.
void leandroteixeira_filipeandradeFrame::OnbtnBToggle(wxCommandEvent& event)
{
    //  Verificação se o botão está preenchido.
    if(btnB->GetLabel() == " "){
        usuario(2);

        //  Verificação se ouve ou não vencedor.
        if(!(verifique_vitoriaUsuario() == 1)){
        fazjogada();
        verifique_vitoriaCPU();
        verifique_empate();
        }
    }else{
        //  Mensagem informando que a posição está ocupada.
        wxMessageBox(_("Posicao ocupada! \n Selecione uma posicao em branco."));
    }


}
//  Função do botão C.
void leandroteixeira_filipeandradeFrame::OnbtnCToggle(wxCommandEvent& event)
{
    //  Verificação se o botão está preenchido.
    if(btnC->GetLabel() == " "){
        usuario(3);
        //  Verificação se ouve ou não vencedor.
        if(!(verifique_vitoriaUsuario() == 1)){
        fazjogada();
        verifique_vitoriaCPU();
        verifique_empate();
        }
    }else{
         //  Mensagem informando que a posição está ocupada.
        wxMessageBox(_("Posicao ocupada! \n Selecione uma posicao em branco."));
    }
}

//  Função do botão D.
void leandroteixeira_filipeandradeFrame::OnbtnDToggle(wxCommandEvent& event)
{
    //  Verificação se o botão está preenchido.
    if(btnD->GetLabel() == " "){
        usuario(4);

         //  Verificação se ouve ou não vencedor.
        if(!(verifique_vitoriaUsuario() == 1)){
        fazjogada();
        verifique_vitoriaCPU();
        verifique_empate();
        }
    }else{
        //  Mensagem informando que a posição está ocupada.
        wxMessageBox(_("Posicao ocupada! \n Selecione uma posicao em branco."));
    }

}
//  Função do botão E.
void leandroteixeira_filipeandradeFrame::OnbtnEToggle(wxCommandEvent& event)
{
    //  Verificação se o botão está preenchido.
    if(btnE->GetLabel() == " "){
        usuario(5);

        //  Verificação se ouve ou não vencedor.
        if(!(verifique_vitoriaUsuario() == 1)){
        fazjogada();
        verifique_vitoriaCPU();
        verifique_empate();
        }
    }else{
        //  Mensagem informando que a posição está ocupada.
        wxMessageBox(_("Posicao ocupada! \n Selecione uma posicao em branco."));
    }

}
//  Função do botão F.
void leandroteixeira_filipeandradeFrame::OnbtnFToggle(wxCommandEvent& event)
{
    //  Verificação se o botão está preenchido.
    if(btnF->GetLabel() == " "){
        usuario(6);

         //  Verificação se ouve ou não vencedor.
        if(!(verifique_vitoriaUsuario() == 1)){
        fazjogada();
        verifique_vitoriaCPU();
        verifique_empate();
        }
    }else{
        //  Mensagem informando que a posição está ocupada.
        wxMessageBox(_("Posicao ocupada! \n Selecione uma posicao em branco."));
    }

}
//  Função do botão G.
void leandroteixeira_filipeandradeFrame::OnbtnGToggle(wxCommandEvent& event)
{
    //  Verificação se o botão está preenchido.
    if(btnG->GetLabel() == " "){
        usuario(7);

        //  Verificação se ouve ou não vencedor.
        if(!(verifique_vitoriaUsuario() == 1)){
        fazjogada();
        verifique_vitoriaCPU();
        verifique_empate();
        }
    }else{
        //  Mensagem informando que a posição está ocupada.
        wxMessageBox(_("Posicao ocupada! \n Selecione uma posicao em branco."));
    }

}
//  Função do botão H.
void leandroteixeira_filipeandradeFrame::OnbtnHToggle(wxCommandEvent& event)   //  Função do botão H.
{
    //  Verificação se o botão está preenchido.
    if(btnH->GetLabel() == " "){
        usuario(8);

        //  Verificação se ouve ou não vencedor.
        if(!(verifique_vitoriaUsuario() == 1)){
        fazjogada();
        verifique_vitoriaCPU();
        verifique_empate();
        }
    }else{
        //  Mensagem informando que a posição está ocupada.
        wxMessageBox(_("Posicao ocupada! \n Selecione uma posicao em branco."));
    }


}
//  Função do botão I.
void leandroteixeira_filipeandradeFrame::OnbtnIToggle(wxCommandEvent& event)
{
    //  Verificação se o botão está preenchido.
    if(btnI->GetLabel() == " "){
        usuario(9);

        //  Verificação se ouve ou não vencedor.
        if(!(verifique_vitoriaUsuario() == 1)){
        fazjogada();
        verifique_vitoriaCPU();
        verifique_empate();
        }
    }else{
        //  Mensagem informando que a posição está ocupada.
        wxMessageBox(_("Posicao ocupada! \n Selecione uma posicao em branco."));
    }
}

//  Função do botão Sair.
void leandroteixeira_filipeandradeFrame::OnbtnSairToggle(wxCommandEvent& event)
{
    //  Encerra o Programa.
    Close();
}

//  Função para fazer a jogada do computador .
void leandroteixeira_filipeandradeFrame::fazjogada(){


    wxString x;
     x = "O";
    //  Função para números gerar número aleatório.
    srand(time(NULL));
    int aux;
    aux = (rand() % 9) + 1;

    //  Declarações variáveis de controle.
    bool ControleTentativa = false;
    wxString controle;
    int contador = 0;

    //  Laço de repetição, enquanto uma posição em branco não for preenchida não para de tentar.
    while(ControleTentativa != true){

        //  Selecione caso, para comparar o numero gerado.
        switch (aux){

            //  O comentário do "case 1" vale para todos os outros cases.

            case 1:
                controle = btnA->GetLabel();

                // Verificar se a posição está em branco, se estiver o caractere "O" será impresso nesta posição.
                if(controle == " "){
                    btnA->SetLabel(x);
                    btnA->SetValue(true);
                    ControleTentativa = true;

                }else{
                    // Se essa posição não estiver vazia vai ser gerado outro numero para tentar novamente.
                    aux = (rand() % 9) + 1;
                    ControleTentativa = false;
                    contador++;
                }
                break;

            case 2:
                 controle = btnB->GetLabel();
                if(controle == " "){
                    btnB->SetLabel(x);
                    btnB->SetValue(true);
                    ControleTentativa = true;

                }else{
                    aux = (rand() % 9) + 1;
                    ControleTentativa = false;
                    contador++;
                }
                break;

            case 3:
                 controle = btnC->GetLabel();
                if(controle == " "){
                    btnC->SetLabel(x);
                    btnC->SetValue(true);
                    ControleTentativa = true;

                }else{
                    aux = (rand() % 9) + 1;
                    ControleTentativa = false;
                    contador++;
                }
                break;
            case 4:
                 controle = btnD->GetLabel();
                if(controle == " "){
                    btnD->SetLabel(x);
                    btnD->SetValue(true);
                    ControleTentativa = true;

                }else{
                    aux = (rand() % 9) + 1;
                    ControleTentativa = false;
                    contador++;
                }
                break;

            case 5:
                 controle = btnE->GetLabel();
                if(controle == " "){
                    btnE->SetLabel(x);
                    btnE->SetValue(true);
                    ControleTentativa = true;

                }else{
                    aux = (rand() % 9) + 1;
                    ControleTentativa = false;
                    contador++;
                }
                break;

            case 6:
                controle = btnF->GetLabel();
                if(controle == " "){
                    btnF->SetLabel(x);
                    btnF->SetValue(true);
                    ControleTentativa = true;

                }else{
                    aux = (rand() % 9) + 1;
                    ControleTentativa = false;
                    contador++;
                }
                break;

            case 7:
                 controle = btnG->GetLabel();
                if(controle == " "){
                    btnG->SetLabel(x);
                    btnG->SetValue(true);
                    ControleTentativa = true;

                }else{
                    aux = (rand() % 9) + 1;
                    ControleTentativa = false;
                    contador++;
                }
                break;

            case 8:
                 controle = btnH->GetLabel();
                if(controle == " "){
                    btnH->SetLabel(x);
                    btnH->SetValue(true);
                    ControleTentativa = true;

                }else{
                    aux = (rand() % 9) + 1;
                    ControleTentativa = false;
                    contador++;
                }
                break;
            case 9:
                controle = btnI->GetLabel();
                if(controle == " "){
                    btnI->SetLabel(x);
                    btnI->SetValue(true);
                    ControleTentativa = true;

                }else{
                    aux = (rand() % 9) + 1;
                    ControleTentativa = false;
                    contador++;
                }
                break;

            default:
                break;
        }

        // Verificação pra saber se não tem mais posições em branco.
        if(contador >= 15){

            // Se não tiver a variável ganha "true" para que possa sair do laço.
            ControleTentativa = true;

        }

    }


}


// Função para imprimir o caractere "X" nos botões selecionados pelo usuário.
void leandroteixeira_filipeandradeFrame::usuario(int bot){

    wxString x;
    x ="X";

    //  Selecione caso, para imprimir o caractere no botão que o usuário escolher.
    switch (bot){
        case 1:
            btnA->SetLabel(x);

            break;

        case 2:
            btnB->SetLabel(x);

            break;

        case 3:
            btnC->SetLabel(x);

            break;
        case 4:
            btnD->SetLabel(x);

            break;

        case 5:
            btnE->SetLabel(x);

            break;

        case 6:
            btnF->SetLabel(x);

            break;

        case 7:
            btnG->SetLabel(x);

            break;

        case 8:
            btnH->SetLabel(x);

            break;
        case 9:
            btnI->SetLabel(x);

            break;

        default:

            break;
    }

}

// Função para Desabilitar todos os botões.
void leandroteixeira_filipeandradeFrame::desabilitarbtn(){

     // Ações para Desabilitar todos os botões.
     btnA->Disable();
     btnB->Disable();
     btnC->Disable();
     btnD->Disable();
     btnE->Disable();
     btnF->Disable();
     btnG->Disable();
     btnH->Disable();
     btnI->Disable();
}


//  Função para verificar a vitória do usuário.
int leandroteixeira_filipeandradeFrame::verifique_vitoriaUsuario(){

    wxString a,b,c,d,e,f,g,h,i;

    //  Ações para buscar os caracteres impressos nos botões.
    a = btnA->GetLabel();
    b = btnB->GetLabel();
    c = btnC->GetLabel();
    d = btnD->GetLabel();
    e = btnE->GetLabel();
    f = btnF->GetLabel();
    g = btnG->GetLabel();
    h = btnH->GetLabel();
    i = btnI->GetLabel();


    //   Verificação para saber se o usuário preencheu alguma linha, coluna ou diagonal com todos os caracteres "X".
    if((a ==  "X" && b ==  "X" && c ==  "X") ||
       (d ==  "X" && e ==  "X" && f ==  "X" )||
       (g ==  "X" && h ==  "X" && i ==  "X" )||
       (a ==  "X" && d ==  "X" && g ==  "X" )||
       (b ==  "X" && e ==  "X" && h ==  "X" )||
       (c ==  "X" && f ==  "X" && i ==  "X" )||
       (a ==  "X" && e ==  "X" && i ==  "X" )||
       (c ==  "X" && e ==  "X" && g ==  "X" )){

        //  Caixas de dialogo para informar ao usuário que ele ganhou, e informar como reiniciar o jogo.
        wxMessageBox(_(" Vitoria do Usuario "));
        wxMessageBox(_(" Se deseja jogar novamente selecione o botao 'Iniciar' "));
        desabilitarbtn();
        return 1;

       }



return 0;

}


//  Função para verificar a vitória do computador.
void leandroteixeira_filipeandradeFrame::verifique_vitoriaCPU(){

    wxString a,b,c,d,e,f,g,h,i;

    //  Ações para buscar os caracteres impressos nos botões.
    a = btnA->GetLabel();
    b = btnB->GetLabel();
    c = btnC->GetLabel();
    d = btnD->GetLabel();
    e = btnE->GetLabel();
    f = btnF->GetLabel();
    g = btnG->GetLabel();
    h = btnH->GetLabel();
    i = btnI->GetLabel();

       //   Verificação para saber se tem alguma linha, coluna ou diagonal com todos os caracteres "O".
       if((a ==  "O" && b ==  "O" && c ==  "O" )||
          (d ==  "O" && e ==  "O" && f ==  "O" )||
          (g ==  "O" && h ==  "O" && i ==  "O" )||
          (a ==  "O" && d ==  "O" && g ==  "O" )||
          (b ==  "O" && e ==  "O" && h ==  "O" )||
          (c ==  "O" && f ==  "O" && i ==  "O" )||
          (a ==  "O" && e ==  "O" && i ==  "O" )||
          (c ==  "O" && e ==  "O" && g ==  "O" )){

        //  Caixas de dialogo para informar ao usuário que o computador ganhou, e informar como reiniciar o jogo.
        wxMessageBox(_(" Vitoria do CPU "));
        wxMessageBox(_(" Se deseja jogar novamente selecione o botao 'Iniciar' "));
        desabilitarbtn();


       }

}
//  Função para verificar se o jogo deu velha.
void leandroteixeira_filipeandradeFrame::verifique_empate(){

    bool A,B,C,D,E,F,G,H,I;

    //  Ações para buscar os caracteres impressos nos botões.
    A=btnA->GetValue();
    B=btnB->GetValue();
    C=btnC->GetValue();
    D=btnD->GetValue();
    E=btnE->GetValue();
    F=btnF->GetValue();
    G=btnG->GetValue();
    H=btnH->GetValue();
    I=btnI->GetValue();


    //   Verificação para saber se todos os botões estão preenchidos.
    if(A == true && B == true && C == true &&
       D == true && E == true && F == true &&
       G == true && H == true && I == true){

       //  Caixas de dialogo para informar ao usuário que deu velha, e informar como reiniciar o jogo.
       wxMessageBox(_(" Deu velha "));
        wxMessageBox(_(" Se deseja jogar novamente selecione o botao 'Iniciar' "));
        desabilitarbtn();


    }
}
