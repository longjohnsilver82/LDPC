// LDPCView.cpp : implementation of the CLDPCView class
//

#include "stdafx.h"
#include "LDPC.h"

#include "LDPCDoc.h"
#include "LDPCView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLDPCView

IMPLEMENT_DYNCREATE(CLDPCView, CView)

BEGIN_MESSAGE_MAP(CLDPCView, CView)
	//{{AFX_MSG_MAP(CLDPCView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLDPCView construction/destruction

CLDPCView::CLDPCView()
{
	// TODO: add construction code here

}

CLDPCView::~CLDPCView()
{
}

BOOL CLDPCView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CLDPCView drawing

void CLDPCView::OnDraw(CDC* pDC)
{
	CLDPCDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CLDPCView printing

BOOL CLDPCView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CLDPCView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CLDPCView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CLDPCView diagnostics

#ifdef _DEBUG
void CLDPCView::AssertValid() const
{
	CView::AssertValid();
}

void CLDPCView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CLDPCDoc* CLDPCView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CLDPCDoc)));
	return (CLDPCDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CLDPCView message handlers
