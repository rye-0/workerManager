#pragma once
#include<iostream>
#include "worker.h"
#include <fstream>
#define  FILENAME "empFile.txt"
using namespace std;


class WorkerManager
{
public:

	//��־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;
	//��¼�ļ��е���������
	int m_EmpNum;
	//Ա�������ָ�� Worker*����
	Worker** m_EmpArray;

	//���캯��
	WorkerManager();

	//�˳�ϵͳ
	void exitSystem();

	//չʾ�˵�
	void Show_Menu();

	//����ְ��
	void Add_Emp();

	//�����ļ�
	void save();

	//ͳ������
	int get_EmpNum();

	//��ʼ��Ա��
	void init_Emp();

	//��ʾְ��
	void Show_Emp();

	//ɾ��ְ��
	void Del_Emp();

	//����ְ������ж�ְ���Ƿ����,�����ڷ���ְ����������λ�ã������ڷ���-1
	int IsExist(int id);

	//�޸�ְ��
	void Mod_Emp();

	//����ְ��
	void Find_Emp();

	//����ְ��
	void Sort_Emp();

	//����ļ�
	void Clean_File();

	//��������
	~WorkerManager();

};