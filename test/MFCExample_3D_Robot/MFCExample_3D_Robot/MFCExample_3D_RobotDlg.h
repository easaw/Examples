
// MFCExample_3D_RobotDlg.h : ��� ����
//

#pragma once


// CMFCExample_3D_RobotDlg ��ȭ ����
class CMFCExample_3D_RobotDlg : public CDialogEx
{
// �����Դϴ�.
public:
	CMFCExample_3D_RobotDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_MFCEXAMPLE_3D_ROBOT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
