#pragma once
#include <wx/wx.h>

class MainFrame : public wxFrame
{
public: 
	MainFrame(const wxString& title, const wxPoint& pos, const wxSize& size);
private:
	void OnMouseMove(wxMouseEvent& event);
	void OnMouseButton(wxMouseEvent& event);
};

