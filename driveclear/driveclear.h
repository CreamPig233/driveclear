// driveclear.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CdriveclearApp:
// �йش����ʵ�֣������ driveclear.cpp
//

class CdriveclearApp : public CWinApp
{
public:
	CdriveclearApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CdriveclearApp theApp;