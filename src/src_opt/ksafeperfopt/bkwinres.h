#pragma once

#define DEFCLOSEMAINBUTTON				100 //关闭主窗口

/*#define DEFLISTBOX					103 //显示各个软件的流量的LIST*/


// #define DEFCLOSEBUTTON				106 //关闭按钮
// #define DEF_FLOATWND_STATUS			107 //显示悬浮窗当前状态

#define IDC_TXT_PROCESS_SUM_COUNT		108 //正在运行的程序：
#define IDC_TXT_SYSTEM_SUM_CPUUSAGE		104 //CPU占用：
#define IDC_TXT_SYSTEM_SUM_MEMUSAGE		105 //内存占用：
#define IDC_TXT_SYSTEM_SUM_IO			102 //磁盘读写：

#define DEF_MIN_BTN						112 // 最小化按钮

#define IDC_LST_PERF_MONITOR_LISTBOX			113

//////////////////////////////////////////////////////////////////////////
//String
#define DefString1					1 //有多少进程在访问网络
#define Str_Download_Sum			2 //已下载总量
#define DefString3					3 //下载速度
#define DefString4					4 //上传速度
#define DefString5					5
#define DefString6					6
#define DefString7					7
#define DefString8					8 //是否要结束 %s
#define DefString9					9
#define DefString10					10
#define DefString11					11
#define DefString12					12
#define Str_Hide              13
#define Str_Show              14
#define Str_SystemIdleProcessDescription	15
#define Str_SystemIdleProcessName			16
#define Str_Column_Name						17
#define Str_Column_Description				18
#define Str_Column_TrustMode				19
#define Str_Column_DownloadSpeed			20
#define Str_Column_UploadSpeed				21
#define Str_Column_Total_Download			22
#define Str_Column_Total_Upload				23
#define Str_Column_Operator					24
#define Str_Kill_Process					25
#define Str_TrustMode_UnVerfiy				26
#define Str_TrustMode_Unknown				27
#define Str_TrustMode_Safe					28
#define Str_TrustMode_Danger				29
#define Str_SystemProcessDescription		30
#define Str_Upload_Sum                      31
#define DefString32		                    32 //
#define DefString33		                    33 //抱歉，流量监控功能暂不支持64位系统，我们将尽快改进！
#define DefString34			                34
#define Str_NetMonDisabledHint              35
#define Str_NetMonEnabledHint                36
#define Str_FloatWndEnabled                  37
#define Str_FloatWndDisabled                 38
#define Str_FloatWndPromptMsgBoxText         39
#define Str_FloatWndPromptMsgBoxRememberCheck 40
#define Str_FloatWndPromptMsgBoxCaption      41
#define STR_BTN_FEEDBACK                     42
#define STR_BTN_QUIT                         43
#define STR_DRIVER_FAILED_MSGBOX_CAPTION     44
#define STR_WNDSTATE_NORMAL					 50
#define STR_WNDSTATE_HUNG					 51
#define DefStringShow					     52
#define DefStringHide					     53
#define DefString54							 54
#define DefString55							 55
#define STR_30MIN_NOTACTIVE					 56
#define STR_CLOSING							 57
#define DefStatCloseSetDayM					 58
#define STR_MSG_NO_OPT						 59
#define STR_WND_NOREP_TEXT					 60
#define STR_WND_NOUSER_TEXT					 61
#define STR_BTN_EXIT_TEXT					 62
#define STR_BTN_CONTINUE_OPT				 63
#define STR_OPT_COMPLTE_TEXT2				 64
#define STR_OPT_COMPLTE_TEXT1				 65
#define STR_OPT_CONTINUE_TEXT1				 66
#define STR_WND_ST_NOUSE				     67
#define STR_WND_ST_NORESPONSE				 68
#define STR_FIX_ST_UNCLOSE					 69
#define STR_FIX_ST_UNFREE					 70
#define STR_FIX_ST_FREED					 71
#define STR_FIX_ST_CLOSED					 72
#define STR_FIX_ST_FIXING					 73
#define STR_FIX_ST_FIXFAILED				 74

// 2.0 ui ctrl id [12/4/2010 zhangbaoliang]
#define PERF_MONITOR_LIST_BOX_ID_BEGIN			200

#define IDC_DIV_PERFMON_LIST_ITEM				201
#define IDC_DIV_PERFMON_LIST_ITEM_EXP			202
#define IDC_IMG_LIST_ITEM_BG_EXP				203
#define IDC_ICO_PROCESS_FILE_ICON				204
#define IDC_TXT_PROCESS_CAPTION					205
#define IDC_TXT_PROCESS_DESCRIPTION				206
#define IDC_TXT_PROCESS_SECURITY_LEVEL			207
#define IDC_TXT_PROCESS_CPU_USAGE				208
#define IDC_TXT_PROCESS_MEM_USAGE				209
#define IDC_TXT_PROCESS_DISK_IO					210
#define IDC_LNK_CLOSE_PROCESS					211
#define IDC_IMGBTN_PERFMON_MENU					212
#define IDC_TXT_PROCESS_FILE_PATH				213
#define IDC_LNK_PROCESS_OPEN_DIR				214
#define IDC_TXT_PROCESS_PID						215
#define IDC_TXT_COLUM_PROC_NAME					216
#define IDC_TXT_COLUM_PROC_LEVEL				217
#define IDC_TXT_COLUM_PROC_CPU					218
#define IDC_TXT_COLUM_PROC_MEM					219
#define IDC_TXT_CULUM_PROC_IO					220
#define IDC_TXT_CLUUM_PROC_BUTTON				221
#define	IDC_IMG_COLUM_LISTSORT					222
#define IDC_CHECK_HIDE_SYSTEM					223
#define IDC_TXT_CURRENT_SETTING					224
#define IDC_LNK_TEXT_SHOW_OR_HIDE_TIP			225
#define IDC_DIV_BEFORE_CHECK_WND				226
#define IDC_DIV_CHECKING_WND					227
#define IDC_TEXT_BEFORE_SCAN					228
#define IDC_BTN_START_WND_OPT					229
#define IDC_LNK_STOP_WND_OPT					230
#define IDC_WND_OPT_LIST						231
#define IDC_BMP_OPTING							232
#define IDC_WND_OPT_NAME						233
#define IDC_WND_OPT_PROGRESS					234
#define IDC_WND_OPT_EXAM_ICON					235
#define IDC_WND_OPT_TEXT_LINE2					236
#define IDC_WND_OPT_CHECKALL					237


#define PERF_MONITOR_LIST_BOX_ID_END			PERF_MONITOR_LIST_BOX_ID_BEGIN+199


// 2.0UI [12/4/2010 zhangbaoliang]
#define PERF_MONITOR_STR_ID_BEGIN					500
#define PERF_MONITOR_STR_501						PERF_MONITOR_STR_ID_BEGIN+1
#define PERF_MONITOR_STR_502						PERF_MONITOR_STR_ID_BEGIN+2
#define PERF_MONITOR_STR_503						PERF_MONITOR_STR_ID_BEGIN+3
#define PERF_MONITOR_STR_504						PERF_MONITOR_STR_ID_BEGIN+4
#define PERF_MONITOR_STR_505						PERF_MONITOR_STR_ID_BEGIN+5
#define PERF_MONITOR_STR_506						PERF_MONITOR_STR_ID_BEGIN+6
#define PERF_MONITOR_STR_507						PERF_MONITOR_STR_ID_BEGIN+7
#define PERF_MONITOR_STR_508						PERF_MONITOR_STR_ID_BEGIN+8
#define PERF_MONITOR_STR_509						PERF_MONITOR_STR_ID_BEGIN+9
#define PERF_MONITOR_STR_510						PERF_MONITOR_STR_ID_BEGIN+10
#define PERF_MONITOR_STR_511						PERF_MONITOR_STR_ID_BEGIN+11
#define PERF_MONITOR_STR_512						PERF_MONITOR_STR_ID_BEGIN+12
#define PERF_MONITOR_STR_513						PERF_MONITOR_STR_ID_BEGIN+13
#define PERF_MONITOR_STR_514						PERF_MONITOR_STR_ID_BEGIN+14
#define PERF_MONITOR_STR_515						PERF_MONITOR_STR_ID_BEGIN+15
#define PERF_MONITOR_STR_516						PERF_MONITOR_STR_ID_BEGIN+16
#define PERF_MONITOR_STR_517						PERF_MONITOR_STR_ID_BEGIN+17
#define PERF_MONITOR_STR_518						PERF_MONITOR_STR_ID_BEGIN+18
#define PERF_MONITOR_STR_519						PERF_MONITOR_STR_ID_BEGIN+19
#define PERF_MONITOR_STR_520						PERF_MONITOR_STR_ID_BEGIN+20
#define PERF_MONITOR_STR_521						PERF_MONITOR_STR_ID_BEGIN+21
#define PERF_MONITOR_STR_522						PERF_MONITOR_STR_ID_BEGIN+22
#define PERF_MONITOR_STR_523						PERF_MONITOR_STR_ID_BEGIN+23
#define PERF_MONITOR_STR_524						PERF_MONITOR_STR_ID_BEGIN+24
#define PERF_MONITOR_STR_525						PERF_MONITOR_STR_ID_BEGIN+25
#define PERF_MONITOR_STR_526						PERF_MONITOR_STR_ID_BEGIN+26
#define PERF_MONITOR_STR_527						PERF_MONITOR_STR_ID_BEGIN+27
#define PERF_MONITOR_STR_528						PERF_MONITOR_STR_ID_BEGIN+28
#define PERF_MONITOR_STR_529						PERF_MONITOR_STR_ID_BEGIN+29
#define PERF_MONITOR_STR_530						PERF_MONITOR_STR_ID_BEGIN+30
#define PERF_MONITOR_STR_531						PERF_MONITOR_STR_ID_BEGIN+31
#define PERF_MONITOR_STR_532						PERF_MONITOR_STR_ID_BEGIN+32
#define PERF_MONITOR_STR_533						PERF_MONITOR_STR_ID_BEGIN+33
#define PERF_MONITOR_STR_534						PERF_MONITOR_STR_ID_BEGIN+34
#define PERF_MONITOR_STR_535						PERF_MONITOR_STR_ID_BEGIN+35
#define PERF_MONITOR_STR_536						PERF_MONITOR_STR_ID_BEGIN+36
#define PERF_MONITOR_STR_537						PERF_MONITOR_STR_ID_BEGIN+37
#define PERF_MONITOR_STR_538						PERF_MONITOR_STR_ID_BEGIN+38
#define PERF_MONITOR_STR_539						PERF_MONITOR_STR_ID_BEGIN+39
#define PERF_MONITOR_STR_540						PERF_MONITOR_STR_ID_BEGIN+40
#define PERF_MONITOR_STR_541						PERF_MONITOR_STR_ID_BEGIN+41
#define PERF_MONITOR_STR_542						PERF_MONITOR_STR_ID_BEGIN+42
#define PERF_MONITOR_STR_543						PERF_MONITOR_STR_ID_BEGIN+43
#define PERF_MONITOR_STR_544						PERF_MONITOR_STR_ID_BEGIN+44
#define PERF_MONITOR_STR_545						PERF_MONITOR_STR_ID_BEGIN+45
#define PERF_MONITOR_STR_546						PERF_MONITOR_STR_ID_BEGIN+46
#define PERF_MONITOR_STR_547						PERF_MONITOR_STR_ID_BEGIN+47
#define PERF_MONITOR_STR_548						PERF_MONITOR_STR_ID_BEGIN+48
#define PERF_MONITOR_STR_549						PERF_MONITOR_STR_ID_BEGIN+49
#define PERF_MONITOR_STR_550						PERF_MONITOR_STR_ID_BEGIN+50
#define PERF_MONITOR_STR_551						PERF_MONITOR_STR_ID_BEGIN+51
#define PERF_MONITOR_STR_552						PERF_MONITOR_STR_ID_BEGIN+52
#define PERF_MONITOR_STR_553						PERF_MONITOR_STR_ID_BEGIN+53
#define PERF_MONITOR_STR_554						PERF_MONITOR_STR_ID_BEGIN+54
#define PERF_MONITOR_STR_555						PERF_MONITOR_STR_ID_BEGIN+55
#define PERF_MONITOR_STR_556						PERF_MONITOR_STR_ID_BEGIN+56
#define PERF_MONITOR_STR_557						PERF_MONITOR_STR_ID_BEGIN+57
#define PERF_MONITOR_STR_558						PERF_MONITOR_STR_ID_BEGIN+58
#define PERF_MONITOR_STR_559						PERF_MONITOR_STR_ID_BEGIN+59
#define PERF_MONITOR_STR_560						PERF_MONITOR_STR_ID_BEGIN+60

#define PERF_MONITOR_STR_ID_END						PERF_MONITOR_STR_ID_BEGIN+299

#define PERF_MONITOR_CTRL_ID_BEGIN							800

#define PERF_MONITOR_CTRL_ID_801							PERF_MONITOR_CTRL_ID_BEGIN+1
#define PERF_MONITOR_CTRL_ID_802							PERF_MONITOR_CTRL_ID_BEGIN+2
#define PERF_MONITOR_CTRL_ID_803							PERF_MONITOR_CTRL_ID_BEGIN+3
#define PERF_MONITOR_CTRL_ID_804							PERF_MONITOR_CTRL_ID_BEGIN+4
#define PERF_MONITOR_CTRL_ID_805							PERF_MONITOR_CTRL_ID_BEGIN+5
#define PERF_MONITOR_CTRL_ID_806							PERF_MONITOR_CTRL_ID_BEGIN+6
#define PERF_MONITOR_CTRL_ID_807							PERF_MONITOR_CTRL_ID_BEGIN+7
#define PERF_MONITOR_CTRL_ID_808							PERF_MONITOR_CTRL_ID_BEGIN+8
#define IDC_LIST_WNDPROC_APP								PERF_MONITOR_CTRL_ID_BEGIN+9
#define PERF_MONITOR_CTRL_ID_810							PERF_MONITOR_CTRL_ID_BEGIN+10
#define PERF_MONITOR_CTRL_ID_811							PERF_MONITOR_CTRL_ID_BEGIN+11
#define PERF_MONITOR_CTRL_ID_812							PERF_MONITOR_CTRL_ID_BEGIN+12
#define PERF_MONITOR_CTRL_ID_813							PERF_MONITOR_CTRL_ID_BEGIN+13
#define PERF_MONITOR_CTRL_ID_814							PERF_MONITOR_CTRL_ID_BEGIN+14
#define PERF_MONITOR_CTRL_ID_815							PERF_MONITOR_CTRL_ID_BEGIN+15
#define PERF_MONITOR_CTRL_ID_816							PERF_MONITOR_CTRL_ID_BEGIN+16
#define PERF_MONITOR_CTRL_ID_817							PERF_MONITOR_CTRL_ID_BEGIN+17
#define PERF_MONITOR_CTRL_ID_818							PERF_MONITOR_CTRL_ID_BEGIN+18
#define PERF_MONITOR_CTRL_ID_819							PERF_MONITOR_CTRL_ID_BEGIN+19
#define PERF_MONITOR_CTRL_ID_820							PERF_MONITOR_CTRL_ID_BEGIN+20
#define PERF_MONITOR_CTRL_ID_821							PERF_MONITOR_CTRL_ID_BEGIN+21
#define PERF_MONITOR_CTRL_ID_822							PERF_MONITOR_CTRL_ID_BEGIN+22
#define PERF_MONITOR_CTRL_ID_823							PERF_MONITOR_CTRL_ID_BEGIN+23
#define PERF_MONITOR_CTRL_ID_824							PERF_MONITOR_CTRL_ID_BEGIN+24
#define PERF_MONITOR_CTRL_ID_825							PERF_MONITOR_CTRL_ID_BEGIN+25
#define PERF_MONITOR_CTRL_ID_826							PERF_MONITOR_CTRL_ID_BEGIN+26
#define PERF_MONITOR_CTRL_ID_827							PERF_MONITOR_CTRL_ID_BEGIN+27
#define PERF_MONITOR_CTRL_ID_828							PERF_MONITOR_CTRL_ID_BEGIN+28
#define PERF_MONITOR_CTRL_ID_829							PERF_MONITOR_CTRL_ID_BEGIN+29
#define PERF_MONITOR_CTRL_ID_830							PERF_MONITOR_CTRL_ID_BEGIN+30
#define PERF_MONITOR_CTRL_ID_831							PERF_MONITOR_CTRL_ID_BEGIN+31
#define PERF_MONITOR_CTRL_ID_832							PERF_MONITOR_CTRL_ID_BEGIN+32
#define PERF_MONITOR_CTRL_ID_833							PERF_MONITOR_CTRL_ID_BEGIN+33
#define PERF_MONITOR_CTRL_ID_834							PERF_MONITOR_CTRL_ID_BEGIN+34
#define PERF_MONITOR_CTRL_ID_835							PERF_MONITOR_CTRL_ID_BEGIN+35
#define PERF_MONITOR_CTRL_ID_836							PERF_MONITOR_CTRL_ID_BEGIN+36
#define PERF_MONITOR_CTRL_ID_837							PERF_MONITOR_CTRL_ID_BEGIN+37
#define PERF_MONITOR_CTRL_ID_838							PERF_MONITOR_CTRL_ID_BEGIN+38
#define PERF_MONITOR_CTRL_ID_839							PERF_MONITOR_CTRL_ID_BEGIN+39
#define PERF_MONITOR_CTRL_ID_840							PERF_MONITOR_CTRL_ID_BEGIN+40
#define PERF_MONITOR_CTRL_ID_841							PERF_MONITOR_CTRL_ID_BEGIN+41
#define PERF_MONITOR_CTRL_ID_842							PERF_MONITOR_CTRL_ID_BEGIN+42
#define PERF_MONITOR_CTRL_ID_843							PERF_MONITOR_CTRL_ID_BEGIN+43
#define PERF_MONITOR_CTRL_ID_844							PERF_MONITOR_CTRL_ID_BEGIN+44
#define PERF_MONITOR_CTRL_ID_845							PERF_MONITOR_CTRL_ID_BEGIN+45
#define PERF_MONITOR_CTRL_ID_846							PERF_MONITOR_CTRL_ID_BEGIN+46
#define PERF_MONITOR_CTRL_ID_847							PERF_MONITOR_CTRL_ID_BEGIN+47
#define PERF_MONITOR_CTRL_ID_848							PERF_MONITOR_CTRL_ID_BEGIN+48
#define PERF_MONITOR_CTRL_ID_849							PERF_MONITOR_CTRL_ID_BEGIN+49
#define PERF_MONITOR_CTRL_ID_850							PERF_MONITOR_CTRL_ID_BEGIN+50

#define PERF_MONITOR_CTRL_ID_END							PERF_MONITOR_CTRL_ID_BEGIN+299

#define PERF_MONITOR_WND_STATE_LIST_ID_BEGIN				1000
#define IDC_ICO_WINDOW_TITLE								PERF_MONITOR_WND_STATE_LIST_ID_BEGIN+1
#define IDC_TXT_WINDOW_TITLE								PERF_MONITOR_WND_STATE_LIST_ID_BEGIN+2
#define IDC_ICO_WINDOW_PROCESS								PERF_MONITOR_WND_STATE_LIST_ID_BEGIN+3
#define IDC_TXT_WINDOW_PROCESS_EXENAME						PERF_MONITOR_WND_STATE_LIST_ID_BEGIN+4
#define IDC_TXT_WINDOW_STATE								PERF_MONITOR_WND_STATE_LIST_ID_BEGIN+5
#define IDC_LNK_CLOSE_WINDOW								PERF_MONITOR_WND_STATE_LIST_ID_BEGIN+6
#define IDC_IMGBTN_WND_OPERATES								PERF_MONITOR_WND_STATE_LIST_ID_BEGIN+7

#define	IDC_WNDSTATE_LIST_ITEM								1100		


#define IDC_LIST_TITLE										1
#define IDC_LIST_NO_TITLE									2
#define IDC_LIST_BMP_CHECK									3
#define IDC_LIST_WND_ICON									4
#define IDC_LIST_WND_NAME									5
#define IDC_LIST_WND_STATE									6
#define IDC_LIST_WND_CHECK_STATE							7
#define IDC_LIST_DIV_TITLE									8
#define IDC_LIST_DIV_MEMORY									9
#define IDC_LIST_TEXT_MEM									10
#define IDC_LIST_MEM_STATE									11
#define IDC_LIST_MEM_BMP_CHECK								12