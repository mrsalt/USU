#if !defined(AFX_PVDAYVIEW_H__6C724984_F12D_11D3_9DC7_00A0CC3A1AD6__INCLUDED_)
#define AFX_PVDAYVIEW_H__6C724984_F12D_11D3_9DC7_00A0CC3A1AD6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class COleFont;
class CPVAppointmentSet;

/////////////////////////////////////////////////////////////////////////////
// CPVDayView wrapper class

class CPVDayView : public CWnd
{
protected:
	DECLARE_DYNCREATE(CPVDayView)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x69cd5e88, 0xee24, 0x11d3, { 0x9d, 0xc0, 0x0, 0xa0, 0xcc, 0x3a, 0x1a, 0xd6 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:

// Operations
public:
	COleFont GetCaptionFont();
	void SetCaptionFont(LPDISPATCH newValue);
	void SetRefCaptionFont(LPDISPATCH newValue);
	CString GetCaption();
	void SetCaption(LPCTSTR lpszNewValue);
	short GetAppearance();
	void SetAppearance(short nNewValue);
	short GetBorderStyle();
	void SetBorderStyle(short nNewValue);
	COleFont GetTimeFont();
	void SetTimeFont(LPDISPATCH newValue);
	void SetRefTimeFont(LPDISPATCH newValue);
	long GetIncrements();
	void SetIncrements(long nNewValue);
	BOOL GetUseControlPanelSettings();
	void SetUseControlPanelSettings(BOOL bNewValue);
	CString GetTimeSeparator();
	void SetTimeSeparator(LPCTSTR lpszNewValue);
	CString GetAMString();
	void SetAMString(LPCTSTR lpszNewValue);
	CString GetPMString();
	void SetPMString(LPCTSTR lpszNewValue);
	unsigned long GetTimeBackColor();
	void SetTimeBackColor(unsigned long newValue);
	unsigned long GetSelectedTimeBackColor();
	void SetSelectedTimeBackColor(unsigned long newValue);
	long GetSelectMode();
	void SetSelectMode(long nNewValue);
	long GetDOYAlignment();
	void SetDOYAlignment(long nNewValue);
	COleFont GetAppointmentsFont();
	void SetAppointmentsFont(LPDISPATCH newValue);
	void SetRefAppointmentsFont(LPDISPATCH newValue);
	CPVAppointmentSet GetAppointmentSet();
	unsigned long GetTimeSlotBackColor(DATE Date);
	void SetTimeSlotBackColor(DATE Date, unsigned long newValue);
	void SetRangeBackColor(DATE StartTime, DATE EndTime, unsigned long newValue);
	unsigned long GetRangeBackColor(DATE StartTime, DATE EndTime);
	DATE GetTopIndex();
	void SetTopIndex(DATE newValue);
	void CancelEvent();
	long GetHwndEdit();
	long GetHwndPopupMenu();
	BOOL GetRedraw();
	void SetRedraw(BOOL bNewValue);
	DATE GetCurrentDate();
	void SetCurrentDate(DATE newValue);
	BOOL GetEnableDayChange();
	void SetEnableDayChange(BOOL bNewValue);
	void AttachCalendar(LPDISPATCH Calendar);
	unsigned long GetAppointmentsForeColor();
	void SetAppointmentsForeColor(unsigned long newValue);
	unsigned long GetAppointmentsBackColor();
	void SetAppointmentsBackColor(unsigned long newValue);
	unsigned long GetAppointmentsBarColor();
	void SetAppointmentsBarColor(unsigned long newValue);
	BOOL GetUseCustomCaption();
	void SetUseCustomCaption(BOOL bNewValue);
	BOOL GetTimeSlotSelected(DATE TimeSlot);
	void SetTimeSlotSelected(DATE TimeSlot, BOOL bNewValue);
	BOOL GetUseStandardDialogs();
	void SetUseStandardDialogs(BOOL bNewValue);
	BOOL Load(LPCTSTR FileName, long Options);
	BOOL Save(LPCTSTR FileName, long Options);
	CString GetAppointmentDialogString(long Index);
	void SetAppointmentDialogString(long Index, LPCTSTR lpszNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PVDAYVIEW_H__6C724984_F12D_11D3_9DC7_00A0CC3A1AD6__INCLUDED_)
