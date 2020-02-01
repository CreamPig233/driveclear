// driveclearDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"

struct  GM_SM3Hash
{
	int len;
	unsigned char sm3hash[32];
};
// CdriveclearDlg �Ի���
class CdriveclearDlg : public CDialog
{
// ����
public:
	CdriveclearDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_DRIVECLEAR_DIALOG };
	void noticemain(LPCTSTR shengyu,LPCTSTR sudu,long dangqian,long zonggong);
	void appendInfo(const char* str);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��
	void showInfo();

// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	void refreshdskinfo();
	
	void CdriveclearDlg::getdiskinfo(LPCTSTR rootpath);
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg void OnClose(); 
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	afx_msg void OnCbnSelchangeCombo1();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedStart();
public:
	CButton m_capcheck;
};
