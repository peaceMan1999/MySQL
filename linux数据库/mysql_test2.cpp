#define _CRT_SECURE_NO_WARNINGS 1



������ְԱ��ʱ����������������Ա��������Ϣ


select* from employees where
hire_date = (select distinct hire_date from employees order by hire_date desc limit 1 offset 2);