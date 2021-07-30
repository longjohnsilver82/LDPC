// LDPCDoc.h : interface of the CLDPCDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_LDPCDOC_H__D65734A9_C8D6_44B5_B2AC_8B60139D8813__INCLUDED_)
#define AFX_LDPCDOC_H__D65734A9_C8D6_44B5_B2AC_8B60139D8813__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CLDPCDoc : public CDocument
{
protected: // create from serialization only
	CLDPCDoc();
	DECLARE_DYNCREATE(CLDPCDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLDPCDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CLDPCDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CLDPCDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LDPCDOC_H__D65734A9_C8D6_44B5_B2AC_8B60139D8813__INCLUDED_)
