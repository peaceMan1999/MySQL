#define _CRT_SECURE_NO_WARNINGS 1

select title, count(title) t from titles
group by title having t >= 2;
