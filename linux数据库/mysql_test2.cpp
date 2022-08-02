#define _CRT_SECURE_NO_WARNINGS 1



查找入职员工时间排名倒数第三的员工所有信息


select* from employees where
hire_date = (select distinct hire_date from employees order by hire_date desc limit 1 offset 2);