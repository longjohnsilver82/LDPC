// LDPCView.h : interface of the CLDPCView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_LDPCVIEW_H__925F109C_36C7_4C37_8AC2_B2BA213EA525__INCLUDED_)
#define AFX_LDPCVIEW_H__925F109C_36C7_4C37_8AC2_B2BA213EA525__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CLDPCView : public CView
{
protected: // create from serialization only
	CLDPCView();
	DECLARE_DYNCREATE(CLDPCView)

// Attributes
public:
	CLDPCDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLDPCView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CLDPCView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CLDPCView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in LDPCView.cpp
inline CLDPCDoc* CLDPCView::GetDocument()
   { return (CLDPCDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LDPCVIEW_H__925F109C_36C7_4C37_8AC2_B2BA213EA525__INCLUDED_)
