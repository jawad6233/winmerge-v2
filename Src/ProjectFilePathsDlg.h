/**
 * @file  ProjectFilePathsDlg.h
 *
 * @brief Declaration file for ProjectFilePathsDlg dialog
 */
#pragma once

#include "TrDialogs.h"
#include "UnicodeString.h"

/**
 * @brief Dialog allowing user to load, edit and save project files.
 */
class ProjectFilePathsDlg : public CTrPropertyPage
{
	DECLARE_DYNCREATE(ProjectFilePathsDlg)

public:
	ProjectFilePathsDlg();   // standard constructor
	String GetFilePath();

// Dialog Data
	//{{AFX_DATA(SaveClosingDlg)
	enum { IDD = IDD_PROJFILES_PATHS };
	String m_sLeftFile;
	String m_sRightFile;
	String m_sFilter;
	bool m_bIncludeSubfolders;
	bool m_bLeftPathReadOnly;
	bool m_bRightPathReadOnly;
	//}}AFX_DATA

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	// Generated message map functions
	//{{AFX_MSG(ProjectFilePathsDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

	String AskProjectFileName(bool bOpen);

// Implementation data
private:
	String m_sProjFilePath; /**< (Last/current) Path for project file */

public:
	void SetPaths(const String& left, const String& right);
	
	afx_msg void OnBnClickedProjLfileBrowse();
	afx_msg void OnBnClickedProjRfileBrowse();
	afx_msg void OnBnClickedProjFilterSelect();
	afx_msg void OnBnClickedProjOpen();
	afx_msg void OnBnClickedProjSave();
};
