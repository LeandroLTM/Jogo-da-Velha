/***************************************************************
 * Name:      leandroteixeira_filipeandradeMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2017-06-13
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef LEANDROTEIXEIRA_FILIPEANDRADEMAIN_H
#define LEANDROTEIXEIRA_FILIPEANDRADEMAIN_H

//(*Headers(leandroteixeira_filipeandradeFrame)
#include <wx/sizer.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
#include <wx/tglbtn.h>
//*)

class leandroteixeira_filipeandradeFrame: public wxFrame
{
    public:

        leandroteixeira_filipeandradeFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~leandroteixeira_filipeandradeFrame();

    private:

        //(*Handlers(leandroteixeira_filipeandradeFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnbtnIniciarToggle(wxCommandEvent& event);
        void OnbtnAToggle(wxCommandEvent& event);
        void OnbtnBToggle(wxCommandEvent& event);
        void OnbtnCToggle(wxCommandEvent& event);
        void OnbtnDToggle(wxCommandEvent& event);
        void OnbtnEToggle(wxCommandEvent& event);
        void OnbtnFToggle(wxCommandEvent& event);
        void OnbtnGToggle(wxCommandEvent& event);
        void OnbtnHToggle(wxCommandEvent& event);
        void OnbtnIToggle(wxCommandEvent& event);
        void fazjogada();
        void usuario(int bot);
        void desabilitarbtn();
        int verifique_vitoriaUsuario();
        void verifique_vitoriaCPU();
        void verifique_empate();
        void OnbtnSairToggle(wxCommandEvent& event);
        //*)

        //(*Identifiers(leandroteixeira_filipeandradeFrame)
        static const long ID_TOGGLEBUTTON1;
        static const long ID_TOGGLEBUTTON2;
        static const long ID_TOGGLEBUTTON5;
        static const long ID_TOGGLEBUTTON6;
        static const long ID_TOGGLEBUTTON3;
        static const long ID_TOGGLEBUTTON7;
        static const long ID_TOGGLEBUTTON8;
        static const long ID_TOGGLEBUTTON4;
        static const long ID_TOGGLEBUTTON9;
        static const long ID_TOGGLEBUTTON10;
        static const long ID_TOGGLEBUTTON12;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(leandroteixeira_filipeandradeFrame)
        wxStatusBar* StatusBar1;
        wxToggleButton* btnD;
        wxToggleButton* btnE;
        wxToggleButton* btnB;
        wxToggleButton* btnA;
        wxToggleButton* btnC;
        wxToggleButton* btnIniciar;
        wxToggleButton* btnF;
        wxToggleButton* btnH;
        wxToggleButton* btnG;
        wxToggleButton* btnI;
        wxToggleButton* btnSair;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // LEANDROTEIXEIRA_FILIPEANDRADEMAIN_H
