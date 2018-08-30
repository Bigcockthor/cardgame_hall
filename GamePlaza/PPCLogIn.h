#pragma once
#include "Stdafx.h"
#include "afxwin.h"

// CPPCLogIn �Ի���

class CPPCLogIn : public CSkinDialogEx
{
	DECLARE_DYNAMIC(CPPCLogIn)

public:
	CPPCLogIn(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CPPCLogIn();

// �Ի�������
	enum { IDD = IDD_DIALOG_LOGIN };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	uint32 m_curuin;
	string m_curpwdtext;
	CSkinButton m_btnOK;
	CSkinButton m_btCancel;
	CComboBox m_usercombox;
	bool m_bChangePWD;
	CEdit m_editpwd;
	CEdit m_edtserver;
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedButtonDel();
	virtual BOOL OnInitDialog();

	CSkinButton m_btnDelUser;
	CButton m_bRemPWD;
	afx_msg void OnCbnSelchangeCombo1();
	afx_msg void OnEnChangeEditPwd();
	afx_msg void OnCbnSelendcancelCombo1();
	afx_msg void OnBnClickedCheck1();
	afx_msg void OnCbnEditchangeCombo1();
	int SetAppParames();
	afx_msg void OnBnClickedCancel();
};
