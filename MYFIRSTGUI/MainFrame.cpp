#include "MainFrame.h"
#include <wx/wx.h>
#include <wx/spinctrl.h>

MainFrame::MainFrame(const wxString& title, const wxPoint& pos, const wxSize& size) : wxFrame(nullptr, wxID_ANY, title, pos, size)
	
{
	wxPanel* panel = new wxPanel(this, wxID_ANY);
	wxButton* button1 = new wxButton(panel, wxID_ANY, "Click if nigger", wxPoint(225, 225), wxSize(150, 50), wxBU_TOP);

	wxCheckBox* checkBox1 = new wxCheckBox(panel, wxID_ANY, "Check if nigger", wxPoint(235, 150), wxDefaultSize, wxCHK_3STATE | wxCHK_ALLOW_3RD_STATE_FOR_USER);

	wxStaticText* staticText1 = new wxStaticText(panel, wxID_ANY, "How much of a nigger are you?", wxPoint(100, 5), wxDefaultSize, wxALIGN_CENTER_HORIZONTAL);
	staticText1->SetBackgroundColour(*wxBLACK);
	staticText1->SetForegroundColour(*wxWHITE);
	wxTextCtrl* textctrl1 = new wxTextCtrl(panel, wxID_ANY, "Write in 'nigger' if you're a nigger", wxPoint(200,300 ), wxSize(200, -1));

	wxSlider* slider1 = new wxSlider(panel, wxID_ANY,  0, 0, 100, wxPoint(100, 30), wxSize(100,-1), wxSL_VALUE_LABEL);

	wxGauge* gauge1 = new wxGauge(panel, wxID_ANY, 100, wxPoint(100, 400), wxSize(-1, 40), wxGA_VERTICAL);
	gauge1->SetValue(99);

	wxArrayString choices1;
	choices1.Add("Item B");
	choices1.Add("Item A");
	choices1.Add("Item C");

	wxChoice* choices = new wxChoice(panel, wxID_ANY, wxPoint(500, 50), wxSize(65, -1), choices1, wxCB_SORT );
	choices->Select(0);

	wxSpinCtrl* spinctrl1 = new wxSpinCtrl(panel, wxID_ANY, "nigger", wxPoint(500, 150), wxSize(80, -1), wxSP_WRAP);

	wxListBox* listbox1 = new wxListBox(panel, wxID_ANY, wxPoint(500, 220), wxSize(80, 50),choices1 , wxLB_MULTIPLE);

	wxRadioBox* radiobox1 = new wxRadioBox(panel, wxID_ANY,"RadioBox", wxPoint(380, 400), wxDefaultSize, choices1, 3, wxRA_SPECIFY_ROWS);
}