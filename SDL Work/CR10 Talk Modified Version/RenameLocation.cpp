// RenameLocation.cpp : implementation file
//

#include "resource.h"
#include "RenameLocation.h"

/*
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
*/

/////////////////////////////////////////////////////////////////////////////
// CRenameLocation dialog

CRenameLocation::CRenameLocation(const char *oName, 
								 char *nName, 
								 const char *wText,
								 const char *title,
								 int n, 
								 BOOL showNumber /*=TRUE */, 
								 CWnd* pParent /*=NULL*/)
	: CDialog(CRenameLocation::IDD, pParent)
{
	strcpy(m_oldName, oName);
	m_newName = nName;
	m_number = n;
	strcpy(m_windowText,wText);
	strcpy(m_titleText,title);
	ShowNumberBox = showNumber;
	//{{AFX_DATA_INIT(CRenameLocation)
	//}}AFX_DATA_INIT
}

CRenameLocation::OnInitDialog()
{   
	CDialog::OnInitDialog();      // TODO: Add extra initialization here
	
	if (ShowNumberBox){
		char numBuf[8];
		wsprintf(numBuf,"%i",m_number);
		m_Number_CStatic.SetWindowText(numBuf);
	}
	else
		m_Number_CStatic.ShowWindow(SW_HIDE);
	
	if (m_windowText == NULL)
		m_Win_Text_CStatic.ShowWindow(SW_HIDE);
	else
		m_Win_Text_CStatic.SetWindowText(m_windowText);

	m_Old_Name_CStatic.SetWindowText(m_oldName);
	m_New_Name_CEdit.SetWindowText(m_newName);
	SetWindowText(m_titleText);
	m_New_Name_CEdit.SetFocus();
	return FALSE;   // return TRUE unless you set the focus to a control
                  // EXCEPTION: OCX Property Pages should return FALSE}
}

void CRenameLocation::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CRenameLocation)
	DDX_Control(pDX, IDC_OLD_NAME, m_Old_Name_CStatic);
	DDX_Control(pDX, IDC_NUMBER, m_Number_CStatic);
	DDX_Control(pDX, IDC_WIN_TEXT, m_Win_Text_CStatic);
	DDX_Control(pDX, IDC_NEW_NAME, m_New_Name_CEdit);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CRenameLocation, CDialog)
	//{{AFX_MSG_MAP(CRenameLocation)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CRenameLocation message handlers

void CRenameLocation::OnOK() 
{
	// TODO: Add extra validation here
	char newNameBuf[24];
	m_New_Name_CEdit.GetWindowText(newNameBuf,24);
	strcpy(m_newName,newNameBuf);

	CDialog::OnOK();
}