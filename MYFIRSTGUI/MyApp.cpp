#include "MyApp.h"
#include "MainFrame.h"
#include <wx/wx.h>

wxIMPLEMENT_APP(MyApp);
bool MyApp::OnInit()
{
	MainFrame* mainFrame = new MainFrame("My First GUI Application", wxPoint(50, 50), wxSize(450, 340));
	mainFrame->SetClientSize(wxSize(600, 500));
	mainFrame->Centre();
	mainFrame->Show(true);
	return true;
}

