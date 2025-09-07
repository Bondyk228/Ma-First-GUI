#pragma once
#include <wx/wx.h>

class MainFrame : public wxFrame
{
public: 
	MainFrame(const wxString& title, const wxPoint& pos, const wxSize& size);
private:
	void AnyButtonClick(wxCommandEvent& evt);
	void Button1Click(wxCommandEvent& evt);
	void Button2Click(wxCommandEvent& evt);
	void OnClose(wxCloseEvent& evt);

};

