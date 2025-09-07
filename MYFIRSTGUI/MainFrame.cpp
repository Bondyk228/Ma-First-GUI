#include "MainFrame.h"
#include <wx/wx.h>


MainFrame::MainFrame(const wxString& title, const wxPoint& pos, const wxSize& size) : wxFrame(nullptr, wxID_ANY, title, pos, size)

{
	wxPanel* panel = new wxPanel(this, wxID_ANY);
	wxButton* button = new wxButton(panel, wxID_ANY, "Click me for a surpirze", wxPoint(20, 20), wxDefaultSize);
	wxSlider* slider = new wxSlider(panel, wxID_ANY, 0, 0, 100, wxPoint(20, 70), wxSize(150, -1), wxSL_VALUE_LABEL);
	wxTextCtrl* textctrl = new wxTextCtrl(panel, wxID_ANY, "Enter text here", wxPoint(20, 120), wxSize(200, -1));
	
	button->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClicked, this);
	slider->Bind(wxEVT_SLIDER, &MainFrame::OnSliderChanged, this);
	textctrl->Bind(wxEVT_TEXT, &MainFrame::OnTextChanged, this);


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