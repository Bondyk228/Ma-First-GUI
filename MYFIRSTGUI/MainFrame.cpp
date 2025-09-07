#include "MainFrame.h"
#include <wx/wx.h>


MainFrame::MainFrame(const wxString& title, const wxPoint& pos, const wxSize& size) : wxFrame(nullptr, wxID_ANY, title, pos, size)

{
	wxPanel* panel = new wxPanel(this, wxID_ANY);
	wxButton* button1 = new wxButton(panel, wxID_ANY, "Click me for a surpirze", wxPoint(20, 20), wxDefaultSize);
	wxButton* button2 = new wxButton(panel, wxID_ANY, "No, click me!", wxPoint(200, 20), wxDefaultSize); 
	


	this->Bind(wxEVT_CLOSE_WINDOW, &MainFrame::OnClose, this);
	this->Bind(wxEVT_BUTTON, &MainFrame::AnyButtonClick, this);
	button1->Bind(wxEVT_BUTTON, &MainFrame::Button1Click, this);
	button2->Bind(wxEVT_BUTTON, &MainFrame::Button2Click, this);
	


	CreateStatusBar();


}

void MainFrame::OnClose(wxCloseEvent& evt)
{
	wxMessageBox(">:(", "mathafacka");
	evt.Skip();
}

void MainFrame::Button1Click(wxCommandEvent& evt)
{
	wxMessageBox("YOU ARE A NIGGER!");
	wxLogStatus("Surprise :3");
	evt.Skip();
}
void MainFrame::Button2Click(wxCommandEvent& evt) 
{
	wxMessageBox("And yet ur a nigger");
		wxLogStatus("not even a surprise, bruh");
		evt.Skip();
}
void MainFrame::AnyButtonClick(wxCommandEvent& evt) 
{
	wxLogMessage("you pressed a button btw");
	
}
