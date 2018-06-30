// stdafx.cpp : source file that includes just the standard includes
// LBMTest.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
UpdateData(true);
	hangshu = m_iHangshu;
	lieshu = m_iLieshu;
	cengshu = m_iCengshu;

	InputFileName = m_sCTName;//将文件名传到全局变量InputFileName中，然后赋值给计算窗口的static Text空间 
	int len = WideCharToMultiByte(CP_ACP, 0, m_sCTName, -1, NULL, 0, NULL, NULL);
	char *ptxtTemp = new char[len + 1];//new是动态内存分配符
	WideCharToMultiByte(CP_ACP, 0, m_sCTName, -1, ptxtTemp, len, NULL, NULL);
	memcpy(NAME, ptxtTemp, sizeof(NAME));// 例如内存拷贝函数进行拷贝


	OUTDISPLAY.open("displaylog.txt", ios::out);
	OUTDATA2.open("OUTDATA2.xls", ios::out);//输出REV数据
	p = new int[460][300][300];//此处的数组不定义数组名，如p= new double a[][][];这样是不合法的
// TODO: reference any additional headers you need in STDAFX.H
// and not in this file
