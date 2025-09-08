#include "MainFrame.h"
#include <wx/wx.h>


MainFrame::MainFrame(const wxString& title, const wxPoint& pos, const wxSize& size) : wxFrame(nullptr, wxID_ANY, title, pos, size)

{
	wxPanel* panel = new wxPanel(this, wxID_ANY);
	
	CreateStatusBar();

	panel->Bind(wxEVT_LEFT_DOWN, &MainFrame::OnMouseButton, this);
	panel->Bind(wxEVT_RIGHT_DOWN, &MainFrame::OnMouseButton, this);
	panel->Bind(wxEVT_MIDDLE_DOWN, &MainFrame::OnMouseButton, this);
	panel->Bind(wxEVT_MOTION, &MainFrame::OnMouseMove, this);

}
void MainFrame::OnMouseMove(wxMouseEvent& event) {
	wxPoint mousepos = event.GetPosition();
	wxString micemvmntmsg = wxString::Format("Mouse at AXIS (%d, %d)", mousepos.x, mousepos.y);
	wxLogStatus(micemvmntmsg);

}
void MainFrame::OnMouseButton(wxMouseEvent& event) {
	if (event.LeftDown()) {
		wxLogStatus("Left Mouse Button Clicked");
	}
	else if (event.RightDown()) {
		wxLogStatus("Right Mouse Button Clicked");
	}
	else if (event.MiddleDown()) {
		wxLogStatus("Middle Mouse Button Clicked");
	}
}
