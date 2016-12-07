
// MTDlg.h : 头文件
//


#include "halconcpp.h" 

using namespace HalconCpp;


// CMTDlg 对话框
class CMTDlg : public CDialogEx
{
// 构造
public:
	CMTDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_MT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
void dev_open_window_fit_image(HObject ho_Image, HTuple hv_Row, HTuple hv_Column,
	HTuple hv_WidthLimit, HTuple hv_HeightLimit, HTuple *hv_WindowHandle);
