#include "MainFrame.h"
#include <wx/wx.h>

enum 
{
	BtnID = 5,
	SldrID = 6,
	TxtID = 7

};
wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)
EVT_BUTTON(BtnID, MainFrame::OnButtonClicked)
EVT_TEXT(TxtID, MainFrame::OnTextChanged)
EVT_SLIDER(SldrID, MainFrame::OnSliderChanged)
wxEND_EVENT_TABLE()
MainFrame::MainFrame(const wxString& title, const wxPoint& pos, const wxSize& size) : wxFrame(nullptr, wxID_ANY, title, pos, size)

{
	wxPanel* panel = new wxPanel(this, wxID_ANY);

	wxButton* button = new wxButton(panel, BtnID, "Click me for a surpirze", wxPoint(20, 20), wxDefaultSize);
	wxSlider* slider = new wxSlider(panel, SldrID, 0, 0, 100, wxPoint(20, 70), wxSize(150, -1), wxSL_VALUE_LABEL);
	wxTextCtrl* textCtrl = new wxTextCtrl(panel, TxtID, "Enter text here", wxPoint(20, 120), wxSize(200, -1));
	
	CreateStatusBar();


}
void MainFrame::OnSliderChanged(wxCommandEvent& evt)
{
	wxString str = wxString::Format("Slider value: %d", evt.GetInt());
	wxLogStatus(str);
}
void MainFrame::OnTextChanged(wxCommandEvent& evt)
{
	wxString str = wxString::Format("Text changed: %s", evt.GetString());
	wxLogStatus(str);
}

void MainFrame::OnButtonClicked(wxCommandEvent& evt)
{
	wxMessageBox("YOU ARE A NIGGER!");
	wxLogStatus("Surprise :3");
}