
// MFCExample_3D_Robot.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CMFCExample_3D_RobotApp:
// �� Ŭ������ ������ ���ؼ��� MFCExample_3D_Robot.cpp�� �����Ͻʽÿ�.
//

class CMFCExample_3D_RobotApp : public CWinApp
{
public:
	CMFCExample_3D_RobotApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CMFCExample_3D_RobotApp theApp;