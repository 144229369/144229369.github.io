#pragma once
#include <iostream>
using namespace std;
#include"worker.h"
#include <fstream>
#define  FILENAME "empFile.txt"
class WorkerManager
{
public:
    WorkerManager();

    void Show_Menu();

    void exitSystem();

	int m_EmpNum;

	void Add_Emp();

	void Show_Emp();

	void init_Emp();

	int get_EmpNum();

	bool m_FileIsEmpty;

	int IsExist(int id);

	void Del_Emp();

	void Mod_Emp();

	void Find_Emp();

	void Sort_Emp();

	void Clean_File();

	Worker ** m_EmpArray;

	void save();

    ~WorkerManager();
};