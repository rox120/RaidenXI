// SinglePlayDialog.cpp: 구현 파일
//

#include "pch.h"
#include "RaidenXI.h"
#include "afxdialogex.h"
#include "SinglePlayDialog.h"


// SinglePlayDialog 대화 상자

IMPLEMENT_DYNAMIC(SinglePlayDialog, CDialog)

SinglePlayDialog::SinglePlayDialog(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_SinglePlayDialog1, pParent)
{

}

SinglePlayDialog::~SinglePlayDialog()
{
}

void SinglePlayDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(SinglePlayDialog, CDialog)
	ON_WM_PAINT()
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()


// SinglePlayDialog 메시지 처리기

BOOL SinglePlayDialog::OnInitDialog()
{
	CDialog::OnInitDialog();
	//TODO
	MoveWindow(0, 0, 1200, 800);

	return TRUE;
}

void SinglePlayDialog::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	// TODO: 여기에 메시지 처리기 코드를 추가합니다.
	// 그리기 메시지에 대해서는 CDialog::OnPaint()을(를) 호출하지 마십시오.

	CClientDC cdc(this);
	CDC MemDC;
	MemDC.CreateCompatibleDC(&cdc);
	CBitmap bitmap;
	bitmap.LoadBitmap(IDB_BITMAP1);
	CBitmap* oldbitmap = MemDC.SelectObject(&bitmap);
	cdc.BitBlt(airplaneLocationX, 800 - 95, airplaneX, airplaneY, &MemDC, 0, 0, SRCCOPY);
	cdc.SelectObject(oldbitmap);
	bitmap.DeleteObject();
}


void SinglePlayDialog::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.

	CDialog::OnKeyDown(nChar, nRepCnt, nFlags);

	switch (nChar)
	{
	case 'A':
	case 'a':
		airplaneLocationX -= 20;
		break;

	}
}
