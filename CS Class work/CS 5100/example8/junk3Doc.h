// junk3Doc.h : interface of the CJunk3Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_JUNK3DOC_H__797D85B0_BFA7_11D4_B398_00A0CC548BE4__INCLUDED_)
#define AFX_JUNK3DOC_H__797D85B0_BFA7_11D4_B398_00A0CC548BE4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CJunk3Doc : public CDocument
{
protected: // create from serialization only
	CJunk3Doc();
	DECLARE_DYNCREATE(CJunk3Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CJunk3Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CJunk3Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CJunk3Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JUNK3DOC_H__797D85B0_BFA7_11D4_B398_00A0CC548BE4__INCLUDED_)
