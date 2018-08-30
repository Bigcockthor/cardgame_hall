
// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�

#pragma once

#ifndef _SECURE_ATL
#define _SECURE_ATL 1
#endif

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // �� Windows ͷ���ų�����ʹ�õ�����
#endif

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // ĳЩ CString ���캯��������ʽ��

// �ر� MFC ��ĳЩ�����������ɷ��ĺ��Եľ�����Ϣ������
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // MFC ��������ͱ�׼���
#include <afxext.h>         // MFC ��չ


#include <afxdisp.h>        // MFC �Զ�����



#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // MFC �� Internet Explorer 4 �����ؼ���֧��
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>             // MFC �� Windows �����ؼ���֧��
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>     // �������Ϳؼ����� MFC ֧��









#ifdef _UNICODE
#if defined _M_IX86
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#endif


//////////////////////////////////////////////////////////////////////////

//ϵͳͷ�ļ�
#include "Nb30.h"
#include "Afxmt.h"
#include "AfxHtml.h"
#include "AfxInet.h"

//ȫ��ͷ�ļ�
#include "game/Constant.h"
#include "game/GlobalDef.h"
#include "game/GlobalField.h"
#include "game/GlobalFrame.h"
#include "game/GlobalRight.h"

//����ͷ�ļ�
#include "game/CMD_Game.h"
#include "game/CMD_Plaza.h"
#include "game/CMD_Video.h"

//ģ���
#include "game/Template.h"

//���ͷ�ļ�
#include "game/UserFace/UserFace.h"
#include "game/Download/DownLoad.h"
#include "game/gamerank/GameRank.h"
#include "game/Companion/Companion.h"
#include "game/ChannelService/ChannelModule.h"
#include "game/ClientShare/ClientShare.h"
#include "game/SocketModule.h"
#include "game/PropertyModule/PropertyModule.h"
#include "game/ComService/ComService.h"
#include "game/SkinControl/SkinControls.h"
#include "game/SkinRes/SkinResourceModule.h"
#include "im/zygamedefine.h"
#include "room/RoomCmdDef.h"
#include "im/imdefine.h"

#define WM_LOGIN_ROOM_ERROR  WM_USER + 10001
#define WM_LOGIN_DETECT_RESPONSE WM_USER + 10002
#define WM_REDETECT_PROXY_RES   WM_USER + 10003
//#define LOG_GAME
//////////////////////////////////////////////////////////////////////////