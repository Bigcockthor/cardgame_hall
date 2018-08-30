
// GamePlaza.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CGamePlazaApp:
// �йش����ʵ�֣������ GamePlaza.cpp
//

class CGamePlazaApp : public CWinApp
{
public:
	CGamePlazaApp();

// ��д
public:
	virtual BOOL	InitInstance();
	void			SendMsgToRemoteWnd(int type,uint32 srcuin,uint32 destuin,CString param1,CString param2);
	int GetLogLevel();
	void ReadNetFlag();
	tm GetLogTimer(bool bservertime);
private:
	
// ʵ��
	 
	DECLARE_MESSAGE_MAP()
public:
	void ReadTestIp();
	virtual int ExitInstance();
	bool LoadLoglibrary(bool bload);

	time_t m_servertime;
	CString m_rootdir;

	uint16 m_loginDetectIpWaitTime;
	uint16 m_afterLoginDetectWaitTime;

	CString m_testIP;
};

extern CGamePlazaApp theApp;