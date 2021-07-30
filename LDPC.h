// LDPC.h : main header file for the LDPC application
//

#if !defined(AFX_LDPC_H__E13D2284_F449_4B91_B938_BC22A037690A__INCLUDED_)
#define AFX_LDPC_H__E13D2284_F449_4B91_B938_BC22A037690A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CLDPCApp:
// See LDPC.cpp for the implementation of this class
//

class CLDPCApp : public CWinApp
{
public:
	CLDPCApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLDPCApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CLDPCApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LDPC_H__E13D2284_F449_4B91_B938_BC22A037690A__INCLUDED_)
