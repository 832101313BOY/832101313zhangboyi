﻿
// calculaterDlg.cpp: 实现文件
//

#include "pch.h"
#include "framework.h"
#include "calculater.h"
#include "calculaterDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CcalculaterDlg 对话框



CcalculaterDlg::CcalculaterDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_CALCULATER_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CcalculaterDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CcalculaterDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON17, &CcalculaterDlg::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON1, &CcalculaterDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON13, &CcalculaterDlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &CcalculaterDlg::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON15, &CcalculaterDlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON16, &CcalculaterDlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON12, &CcalculaterDlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON2, &CcalculaterDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CcalculaterDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CcalculaterDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CcalculaterDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CcalculaterDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CcalculaterDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CcalculaterDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CcalculaterDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CcalculaterDlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &CcalculaterDlg::OnBnClickedButton11)
END_MESSAGE_MAP()


// CcalculaterDlg 消息处理程序

BOOL CcalculaterDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CcalculaterDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CcalculaterDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CcalculaterDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CcalculaterDlg::OnBnClickedButton1()
{
	input("1");
	// TODO: 在此添加控件通知处理程序代码
}

/*定义数字输入函数*/
void CcalculaterDlg::input(char* a)    //这里的CMFCApplication1Dlg需改为“你的项目名Dlg”
{
	GetDlgItemText(IDC_EDIT2, str2);         //判断第二编辑框是否为空
	if (str2 == _T(""))                      //是的话对第一编辑框进行操作
	{
		str1 += LPCTSTR(a);                  //对字符串进行扩展
		number1 = _ttof(str1);               //将字符串转为数字
		SetDlgItemText(IDC_EDIT1, str1);     //更新第一编辑框
	}
	else                                     //否则对第三编辑框进行操作
	{
		str3 += LPCTSTR(a);
		number2 = _ttof(str3);
		SetDlgItemText(IDC_EDIT3, str3);
	}
}

void CcalculaterDlg::OnBnClickedButton17()
{
	// TODO: 在此添加控件通知处理程序代码

	GetDlgItemText(IDC_EDIT1, str1);        //将第一编辑框的内容读取到str1(IDC与设计界面的ID匹配)
	GetDlgItemText(IDC_EDIT2, str2);
	GetDlgItemText(IDC_EDIT3, str3);
	number1 = _ttof(str1);                  //将Cstring格式转化为浮点型数字（unicode编码格式） 
	number2 = _ttof(str3);
	if (str2 != _T(""))                     //判断第二读取框的内容是否为空
	{
		if (str2 == _T("+"))               //如果非空做出相应的数据处理
		{
			result = number1 + number2;
		}
		else if (str2 == _T("-"))
		{
			result = number1 - number2;
		}
		else if (str2 == _T("*"))
		{
			result = number1 * number2;
		}
		else if (str2 == _T("/"))
		{
			result = number1 / number2;
		}
		else
		{
			MessageBox(_T("运算符输入有误！"));  //如果不是+-*/则显示输出错误
		}
	}

	str.Format(_T("%g"), result);     //实现数字等到CString的转换
	SetDlgItemText(IDC_EDIT4, str);   //将结果显示到第四编辑框中

	// TODO: 在此添加控件通知处理程序代码
}

void CcalculaterDlg::OnBnClickedButton13()
{
	// TODO: 在此添加控件通知处理程序代码
	str2 = _T("+");                  //将第二编辑框的内容设置为+并显示
	SetDlgItemText(IDC_EDIT2, str2);

	// TODO: 在此添加控件通知处理程序代码
}


void CcalculaterDlg::OnBnClickedButton14()
{
	// TODO: 在此添加控件通知处理程序代码
	str2 = _T("-");                  //将第二编辑框的内容设置为+并显示
	SetDlgItemText(IDC_EDIT2, str2);

	// TODO: 在此添加控件通知处理程序代码
}


void CcalculaterDlg::OnBnClickedButton15()
{
	// TODO: 在此添加控件通知处理程序代码
	str2 = _T("*");                  //将第二编辑框的内容设置为+并显示
	SetDlgItemText(IDC_EDIT2, str2);

	// TODO: 在此添加控件通知处理程序代码
}


void CcalculaterDlg::OnBnClickedButton16()
{
	// TODO: 在此添加控件通知处理程序代码
	str2 = _T("/");                  //将第二编辑框的内容设置为+并显示
	SetDlgItemText(IDC_EDIT2, str2);

	// TODO: 在此添加控件通知处理程序代码
}


void CcalculaterDlg::OnBnClickedButton12()
{
	// TODO: 在此添加控件通知处理程序代码
	str1 = _T("");                  //将四个编辑框的内容都设置为空并显示
	str2 = _T("");
	str3 = _T("");
	str = _T("");
	SetDlgItemText(IDC_EDIT1, str1);
	SetDlgItemText(IDC_EDIT2, str2);
	SetDlgItemText(IDC_EDIT3, str3);
	SetDlgItemText(IDC_EDIT4, str);

	// TODO: 在此添加控件通知处理程序代码
}


void CcalculaterDlg::OnBnClickedButton2()
{
	input("2");
	// TODO: 在此添加控件通知处理程序代码
}


void CcalculaterDlg::OnBnClickedButton3()
{
	input("3");
	// TODO: 在此添加控件通知处理程序代码
}


void CcalculaterDlg::OnBnClickedButton4()
{
	input("4");
	// TODO: 在此添加控件通知处理程序代码
}


void CcalculaterDlg::OnBnClickedButton5()
{
	input("5");
	// TODO: 在此添加控件通知处理程序代码
}


void CcalculaterDlg::OnBnClickedButton6()
{
	input("6");
	// TODO: 在此添加控件通知处理程序代码
}


void CcalculaterDlg::OnBnClickedButton7()
{
	input("7");
	// TODO: 在此添加控件通知处理程序代码
}


void CcalculaterDlg::OnBnClickedButton8()
{
	input("8");
	// TODO: 在此添加控件通知处理程序代码
}


void CcalculaterDlg::OnBnClickedButton9()
{
	input("9");
	// TODO: 在此添加控件通知处理程序代码
}


void CcalculaterDlg::OnBnClickedButton10()
{
	input("0");
	// TODO: 在此添加控件通知处理程序代码
}


void CcalculaterDlg::OnBnClickedButton11()
{
	input(".");
	// TODO: 在此添加控件通知处理程序代码
}
