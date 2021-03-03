#include <iostream>
#include "Canvas.h"

using namespace std;

//cum fac sa creez o matrice cu h/w date de apelul din main()
//Canvas::Canvas(int width, int height)
//{
//	CanvasWidth = width;
//	CanvasHeight = height;	
//		
//	char a[CanvasHeight][CanvasWidth];
//	
//}

Canvas::Canvas(int width, int height)
{
	CanvasHeight = height;
	CanvasWidth = width;

	for (int i = 0; i < CanvasHeight; i++)
		for (int j = 0; j < CanvasWidth; j++)
			m[i][j] = ' ';
}

void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
	for (int i = x - ray; i <= x + ray; i++)
	{
		for (int j = y - ray; j <= y + ray; j++)
		{

			if ((i - x) * (i - x) + (j - y) * (j - y) == ray * ray || (i - x) * (i - x) + (j - y) * (j - y) == ray * ray + 2
				|| (i - x) * (i - x) + (j - y) * (j - y) == ray * ray - 2)
			{
				m[i][j] = ch;
			}

		}
	}
	cout << endl << endl;
}

void Canvas::FillCircle(int x, int y, int ray, char ch)
{

	for (int i = x - ray; i <= x + ray; i++)
	{
		for (int j = y - ray; j <= y + ray; j++)
		{

			if (pow(i - x, 2) + pow(j - y, 2) <= pow(ray, 2))
			{
				m[i][j] = ch;
			}

		}
	}
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = top; i <= bottom; i++)
	{
		for (int j = left; j <= right; j++)
		{
			if (i == top or j == left or i == bottom or j == right)
			{
				m[i][j] = ch;
			}
		}
	}
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = top; i <= bottom; i++)
	{
		for (int j = left; j <= right; j++)
		{
			if (i > top or j > left or i < bottom or j < right)
			{
				m[i][j] = ch;
			}
		}
	}
}

void Canvas::SetPoint(int x, int y, char ch)
{
	m[y][x] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
	int dx, dy, p, x, y;
	dx = x2 - x1;
	dy = y2 - y1;
	p = 2 * dy - dx;

	x = x1;
	y = y1;


	while (x < x2)
	{
		if (p >= 0)
		{
			m[x][y] = ch;
			y = y + 1;
			p = p + 2 * dy - 2 * dx;
		}
		else
		{
			m[x][y] = ch;
			p = p + 2 * dy;
		}
		x++;
	}
}

void Canvas::Clear() {
	for (int i = 0; i < CanvasHeight; i++)
		for (int j = 0; j < CanvasWidth; j++)
			m[i][j] = ' ';
}

void Canvas::Print()
{
	for (int i = 0; i < CanvasHeight; i++)
	{
		for (int j = 0; j < CanvasWidth; j++)
			cout << m[i][j] << " ";
		cout << endl;
	}
}