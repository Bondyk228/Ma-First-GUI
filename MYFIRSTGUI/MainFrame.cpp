#include "MainFrame.h"
#include <wx/wx.h>
#include <wx/spinctrl.h>

MainFrame::MainFrame(const wxString& title, const wxPoint& pos, const wxSize& size) : wxFrame(nullptr, wxID_ANY, title, pos, size)
	
{
	wxPanel* panel = new wxPanel(this, wxID_ANY);
	wxButton* button1 = new wxButton(panel, wxID_ANY, "Click if nigger", wxPoint(225, 225), wxSize(150, 50));

	wxCheckBox* checkBox1 = new wxCheckBox(panel, wxID_ANY, "Check if nigger", wxPoint(235, 150), wxSize(150, 50));

	wxStaticText* staticText1 = new wxStaticText(panel, wxID_ANY, "Slide to the right if nigger", wxPoint(100, 5), wxSize(150, -1));

	wxTextCtrl* textctrl1 = new wxTextCtrl(panel, wxID_ANY, "Write in 'nigger' if you're a nigger", wxPoint(200,300 ), wxSize(200, -1));

	wxSlider* slider1 = new wxSlider(panel, wxID_ANY,  0, 50, 100, wxPoint(100, 30), wxSize(100,-1));

	wxGauge* gauge1 = new wxGauge(panel, wxID_ANY, 100, wxPoint(100, 400), wxSize(100, 30));
	gauge1->SetValue(99);

	wxArrayString choices1;
	choices1.Add("Item A");
	choices1.Add("Item B");
	choices1.Add("Item C");

	wxChoice* choices = new wxChoice(panel, wxID_ANY, wxPoint(500, 50), wxSize(65, -1), choices1);
	choices->Select(0);

	wxSpinCtrl* spinctrl1 = new wxSpinCtrl(panel, wxID_ANY, "nigger", wxPoint(500, 150), wxSize(80, -1));

	wxListBox* listbox1 = new wxListBox(panel, wxID_ANY, wxPoint(500, 220), wxSize(80, 50), choices1);

	wxRadioBox* radiobox1 = new wxRadioBox(panel, wxID_ANY,"RadioBox", wxPoint(380, 400), wxDefaultSize, choices1);
}