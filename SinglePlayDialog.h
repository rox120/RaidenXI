#pragma once
#include "afxdialogex.h"


// SinglePlayDialog 대화 상자

class SinglePlayDialog : public CDialog
{
	DECLARE_DYNAMIC(SinglePlayDialog)

public:
	SinglePlayDialog(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~SinglePlayDialog();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SinglePlayDialog1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.
	virtual BOOL OnInitDialog();


	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();

	int airplaneX = 40;
	int airplaneY = 38;
	int airplaneLocationX = 580;
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};
