
// TspMFC.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CTspMFCApp: 
// �йش����ʵ�֣������ TspMFC.cpp
//

class CTspMFCApp : public CWinApp
{
public:
	CTspMFCApp();
	
// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CTspMFCApp theApp;