#include "Render.h"

#include <Windows.h>
#include <GL\GL.h>
#include <GL\GLU.h>
#include <corecrt_math.h>



double Tangent(double p1, double p2, double p3, double p4, double t) {


	return -3 * p1 + 6 * p1 * t - 3 * p1 * t * t + 3 * p2 + 12 * p2 * t + 9 * p2 * t * t + 6 * p3 * t * t - 9 * p3 * t * t + 3 * p4 * t * t;
}

double Fun(double p1, double p2, double p3, double p4, double t)
{
	double temp = 1 - t;
	return pow(temp, 3) * p1 + 3 * t * pow(temp, 2) * p2 + 3 * t * t * temp * p3 + pow(t, 3) * p4;
}


void figura()
{
	double A[] = { 0, 0, 0};//основание
	double B[] = { 1, 1, 0};//начало рукояти
	double C[] = { -1, 1, 0 };//начало рукояти
	double D[] = {-1, 7, 0 };//переход в оголовье
	double E[] = { 1, 7, 0 };//переход в оголовье
	double F[] = {-4, 5, 0 };//остреё
	double G[] = { 4, 5, 0 };//остреё
	double H[] = {-3, 8, 0 };//Рабочая часть
	double I[] = { 3, 8, 0 };//Рабочая часть
	double J[] = {-2, 9, 0 };//Рабочая часть
	double K[] = { 2, 9, 0 };//Рабочая часть
	double L[] = {-1, 9, 0 };//Рабочая часть
	double M[] = { 1, 9, 0 };//Рабочая часть
	double N[] = { 0, 10, 0 };//Навершее


	//Второй слой для трёхмерности 
	double A1[] = {  0, 0, 2 };//основание
	double B1[] = {  1, 1, 2 };//начало рукояти
	double C1[] = {  -1, 1, 2 };//начало рукояти
	double D1[] = { -1, 7, 2 };//переход в оголовье
	double E1[] = {  1, 7, 2 };//переход в оголовье
	double F1[] = { -4, 5, 2 };//остреё
	double G1[] = { 4, 5, 2 };//остреё
	double H1[] = { -3, 8, 2 };//Рабочая часть
	double I1[] = { 3, 8, 2 };//Рабочая часть
	double J1[] = { -2, 9, 2 };//Рабочая часть
	double K1[] = {  2, 9, 2 };//Рабочая часть
	double L1[] = { -1, 9, 2 };//Рабочая часть
	double M1[] = {  1, 9, 2 };//Рабочая часть
	double N1[] = {  0, 10, 2 };//Навершее
/*
	glBegin(GL_TRIANGLE_FAN);
	glColor4f(1, 0, 0, 0.2);
	glVertex3dv(A);
	glVertex3dv(B);
	glVertex3dv(C);
	glVertex3dv(D);
	glVertex3dv(E);
	glVertex3dv(F);
	glVertex3dv(A);
	glVertex3dv(G);
	glVertex3dv(A);
	glVertex3dv(H);
	glVertex3dv(A);
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glVertex3dv(G);
	glVertex3dv(A);
	glVertex3dv(B);
	glVertex3dv(C);
	glVertex3dv(D);
	glVertex3dv(E);
	glVertex3dv(F);
	glVertex3dv(G);
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glVertex3dv(H);
	glVertex3dv(A);
	glVertex3dv(B);
	glVertex3dv(C);
	glVertex3dv(D);
	glVertex3dv(E);
	glVertex3dv(F);
	glVertex3dv(H);
	glEnd();

	
*/
glBegin(GL_TRIANGLE_FAN);
	glColor4f(0.41, 0.29, 0, 1);
	glVertex3dv(A);
	glVertex3dv(B);
	glVertex3dv(C);
	
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0.41, 0.29, 0, 1);
	glVertex3dv(C);
	glVertex3dv(B);
	glVertex3dv(D);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0.41, 0.29, 0, 1);
glVertex3dv(D);
glVertex3dv(E);
glVertex3dv(B);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0.41, 0.29, 0, 1);
glVertex3dv(D);
glVertex3dv(E);
glVertex3dv(M);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0.41, 0.29, 0, 1);
glVertex3dv(M);
glVertex3dv(L);
glVertex3dv(D);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0.41, 0.29, 0, 1);
glVertex3dv(L);
glVertex3dv(M);
glVertex3dv(N);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0, 0.95, 1, 1);
glVertex3dv(D);
glVertex3dv(L);
glVertex3dv(J);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0, 0.95, 1, 1);
glVertex3dv(H);
glVertex3dv(D);
glVertex3dv(J);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0, 0.95, 1, 1);
glVertex3dv(D);
glVertex3dv(H);
glVertex3dv(F);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0, 0.95, 1, 1);
glVertex3dv(E);
glVertex3dv(M);
glVertex3dv(K);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0, 0.95, 1, 1);
glVertex3dv(I);
glVertex3dv(E);
glVertex3dv(K);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0, 0.95, 1, 1);
glVertex3dv(I);
glVertex3dv(E);
glVertex3dv(G);

glEnd();

glBegin(GL_TRIANGLE_FAN);
	glColor4f(0.41, 0.29, 0, 1);
	glVertex3dv(A);
	glVertex3dv(B);
	glVertex3dv(C);
	
glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0.41, 0.29, 0, 1);
	glVertex3dv(C);
	glVertex3dv(B);
	glVertex3dv(D);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0.41, 0.29, 0, 1);
glVertex3dv(D);
glVertex3dv(E);
glVertex3dv(B);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0.41, 0.29, 0, 1);
glVertex3dv(D);
glVertex3dv(E);
glVertex3dv(M);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0.41, 0.29, 0, 1);
glVertex3dv(M);
glVertex3dv(L);
glVertex3dv(D);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0.41, 0.29, 0, 1);
glVertex3dv(L);
glVertex3dv(M);
glVertex3dv(N);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0, 0.95, 1, 1);
glVertex3dv(D);
glVertex3dv(L);
glVertex3dv(J);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0, 0.95, 1, 1);
glVertex3dv(H);
glVertex3dv(D);
glVertex3dv(J);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0, 0.95, 1, 1);
glVertex3dv(D);
glVertex3dv(H);
glVertex3dv(F);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0, 0.95, 1, 1);
glVertex3dv(E);
glVertex3dv(M);
glVertex3dv(K);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0, 0.95, 1, 1);
glVertex3dv(I);
glVertex3dv(E);
glVertex3dv(K);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0, 0.95, 1, 1);
glVertex3dv(I);
glVertex3dv(E);
glVertex3dv(G);

glEnd();

//----------------

glBegin(GL_TRIANGLE_FAN);
glColor4f(0.41, 0.29, 0, 1);
glVertex3dv(A1);
glVertex3dv(B1);
glVertex3dv(C1);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0.41, 0.29, 0, 1);
glVertex3dv(C1);
glVertex3dv(B1);
glVertex3dv(D1);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0.41, 0.29, 0, 1);
glVertex3dv(D1);
glVertex3dv(E1);
glVertex3dv(B1);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0.41, 0.29, 0, 1);
glVertex3dv(D1);
glVertex3dv(E1);
glVertex3dv(M1);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0.41, 0.29, 0, 1);
glVertex3dv(M1);
glVertex3dv(L1);
glVertex3dv(D1);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0.41, 0.29, 0, 1);
glVertex3dv(L1);
glVertex3dv(M1);
glVertex3dv(N1);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0, 0.95, 1, 1);
glVertex3dv(D1);
glVertex3dv(L1);
glVertex3dv(J1);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0, 0.95, 1, 1);
glVertex3dv(H1);
glVertex3dv(D1);
glVertex3dv(J1);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0, 0.95, 1, 1);
glVertex3dv(D1);
glVertex3dv(H1);
glVertex3dv(F1);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0, 0.95, 1, 1);
glVertex3dv(E1);
glVertex3dv(M1);
glVertex3dv(K1);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0, 0.95, 1, 1);
glVertex3dv(I1);
glVertex3dv(E1);
glVertex3dv(K1);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0, 0.95, 1, 1);
glVertex3dv(I1);
glVertex3dv(E1);
glVertex3dv(G1);

glEnd();

//-----------------

glBegin(GL_TRIANGLE_FAN);
glColor4f(0.41, 0.29, 0, 1);
glVertex3dv(A);
glVertex3dv(C);
glVertex3dv(C1);
glVertex3dv(A1);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0.41, 0.29, 0, 1);
glVertex3dv(C);
glVertex3dv(D);
glVertex3dv(D1);
glVertex3dv(C1);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0, 0.95, 1, 1);
glVertex3dv(D);
glVertex3dv(F);
glVertex3dv(F1);
glVertex3dv(D1);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0, 0.95, 1, 1);
glVertex3dv(F);
glVertex3dv(H);
glVertex3dv(H1);
glVertex3dv(F1);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0, 0.95, 1, 1);
glVertex3dv(H);
glVertex3dv(J);
glVertex3dv(J1);
glVertex3dv(H1);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0, 0.95, 1, 1);
glVertex3dv(J);
glVertex3dv(L);
glVertex3dv(L1);
glVertex3dv(J1);

glEnd();

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0.41, 0.29, 0, 1);
glVertex3dv(L);
glVertex3dv(N);
glVertex3dv(N1);
glVertex3dv(L1);

glEnd();

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0.41, 0.29, 0, 1);
glVertex3dv(N);
glVertex3dv(M);
glVertex3dv(M1);
glVertex3dv(N1);

glEnd();

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0, 0.95, 1, 1);
glVertex3dv(M);
glVertex3dv(K);
glVertex3dv(K1);
glVertex3dv(M1);

glEnd();

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0, 0.95, 1, 1);
glVertex3dv(K);
glVertex3dv(I);
glVertex3dv(I1);
glVertex3dv(K1);

glEnd();

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0, 0.95, 1, 1);
glVertex3dv(I);
glVertex3dv(G);
glVertex3dv(G1);
glVertex3dv(I1);

glEnd();

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0, 0.95, 1, 1);
glVertex3dv(G);
glVertex3dv(E);
glVertex3dv(E1);
glVertex3dv(G1);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0.41, 0.29, 0, 1);
glVertex3dv(E);
glVertex3dv(B);
glVertex3dv(B1);
glVertex3dv(E1);

glEnd();

glBegin(GL_TRIANGLE_FAN);
glColor4f(0.41, 0.29, 0, 1);
glVertex3dv(B);
glVertex3dv(A);
glVertex3dv(A1);
glVertex3dv(B1);

//---------------------

glEnd();

glBegin(GL_LINE_STRIP);

	glColor3d(0, 0, 0);

	glVertex3dv(A);
	glVertex3dv(C);

	glVertex3dv(C);
	glVertex3dv(D);

	glVertex3dv(D);
	glVertex3dv(F);

	glVertex3dv(F);
	glVertex3dv(H);

	glVertex3dv(H);
	glVertex3dv(J);

	glVertex3dv(J);
	glVertex3dv(L);

	glVertex3dv(L);
	glVertex3dv(N);

	glVertex3dv(N);
	glVertex3dv(M);

	glVertex3dv(M);
	glVertex3dv(K);

	glVertex3dv(K);
	glVertex3dv(I);

	glVertex3dv(I);
	glVertex3dv(G);

	glVertex3dv(G);
	glVertex3dv(E);
	
	glVertex3dv(B);
	glVertex3dv(A);

	glVertex3dv(C);
	glVertex3dv(B);

	glVertex3dv(B);
	glVertex3dv(D);

	glVertex3dv(D);
	glVertex3dv(H);

	glVertex3dv(D);
	glVertex3dv(E);

	glVertex3dv(D);
	glVertex3dv(M);

	glVertex3dv(D);
	glVertex3dv(L);

	glVertex3dv(D);
	glVertex3dv(J);

	glVertex3dv(L);
	glVertex3dv(M);

	glVertex3dv(E);
	glVertex3dv(M);

	glVertex3dv(E);
	glVertex3dv(K);

	glVertex3dv(E);
	glVertex3dv(I);

glEnd();

	//---------------------
glBegin(GL_LINE_STRIP);

	glColor3d(0, 0, 0);

	glVertex3dv(A1);
	glVertex3dv(C1);
				 
	glVertex3dv(C1);
	glVertex3dv(D1);
				 
	glVertex3dv(D1);
	glVertex3dv(F1);
				 
	glVertex3dv(F1);
	glVertex3dv(H1);
				 
	glVertex3dv(H1);
	glVertex3dv(J1);
				 
	glVertex3dv(J1);
	glVertex3dv(L1);
				 
	glVertex3dv(L1);
	glVertex3dv(N1);
				 
	glVertex3dv(N1);
	glVertex3dv(M1);
				 
	glVertex3dv(M1);
	glVertex3dv(K1);
				 
	glVertex3dv(K1);
	glVertex3dv(I1);
				 
	glVertex3dv(I1);
	glVertex3dv(G1);
				 
	glVertex3dv(G1);
	glVertex3dv(E1);
				 
	glVertex3dv(B1);
	glVertex3dv(A1);
				 
	glVertex3dv(C1);
	glVertex3dv(B1);
				 
	glVertex3dv(B1);
	glVertex3dv(D1);
				 
	glVertex3dv(D1);
	glVertex3dv(H1);
				 
	glVertex3dv(D1);
	glVertex3dv(E1);
				 
	glVertex3dv(D1);
	glVertex3dv(M1);
				 
	glVertex3dv(D1);
	glVertex3dv(L1);
				 
	glVertex3dv(D1);
	glVertex3dv(J1);
				 
	glVertex3dv(L1);
	glVertex3dv(M1);
				 
	glVertex3dv(E1);
	glVertex3dv(M1);
				 
	glVertex3dv(E1);
	glVertex3dv(K1);
				 
	glVertex3dv(E1);
	glVertex3dv(I1);

	//glVertex3dv(A);
	//glVertex3dv(C);

glEnd();

glBegin(GL_LINE_STRIP);

	glVertex3dv(A);
	glVertex3dv(A1);

	glVertex3dv(C);
	glVertex3dv(C1);

	glVertex3dv(D);
	glVertex3dv(D1);

	glVertex3dv(F);
	glVertex3dv(F1);

	glVertex3dv(H);
	glVertex3dv(H1);

	glVertex3dv(J);
	glVertex3dv(J1);

	glVertex3dv(L);
	glVertex3dv(L1);

	glVertex3dv(N);
	glVertex3dv(N1);

	glVertex3dv(M);
	glVertex3dv(M1);

	glVertex3dv(K);
	glVertex3dv(K1);

	glVertex3dv(I);
	glVertex3dv(I1);

	glVertex3dv(G);
	glVertex3dv(G1);

	glVertex3dv(E);
	glVertex3dv(E1);

	glVertex3dv(B);
	glVertex3dv(B1);

glEnd();


}

double fact(double n)
{
	int result = 1;
	for (int i = 1; i <= n; i += 1)
	{
		result = result * i;
	}
	return result;
}

double Angle(double a1, double b1, double c1, double a2, double b2, double c2)
{
	double scal = a1 * a2 + b1 * b2 + c1 * c2;
	double mod = sqrt(pow(a1, 2) + pow(b1, 2) + pow(c1, 2)) * sqrt(pow(a2, 2) + pow(b2, 2) + pow(c2, 2));
	double cosA = scal / mod;
	return acos(cosA) * 180 / 3.14;
}

double B(double i, double u)
{
	return (fact(3) / (fact(i) * fact(3 - i))) * pow(u, i) * pow(1 - u, 3 - i);
}

double poverhnost(double Piont[4][4][3], double u, double v, int num)
{
	double result = 0;
	for (int i = 0; i <= 3; i++)
	{
		for (int j = 0; j <= 3; j++)
		{
			result += B(i, u) * B(j, v) * Piont[i][j][num];
		}
	}
	return result;
}


double Ermit(double p1, double p4, double r1, double r4, double t)
{
	double t3 = pow(t, 3);
	double t2 = pow(t, 2);
	double result = p1 * (2 * t3 - 3 * t2 + 1) + p4 * ((-2) * t3 + 3 * t2) + r1 * (t3 - 2 * t2 + t) + r4 * (t3 - t2);
	return result;
}



double t_max = 0;
bool target = 0;

void Render(double delta_time)
{
	if (target == 0) t_max += delta_time / 5;
	if (t_max > 1) target = 1;

	if (target == 1) t_max -= delta_time / 5;
	if (t_max < 0) target = 0;

	//-------------------

	double Point1[] = { 0,0,0 };
	double Point2[] = { 1,0,3 };
	double Point3[] = { 2,0,1 };
	double Point4[] = { 2,0,2 };
	double Point5[] = { 0,0,0 }; 
	double Point6[] = { -1,0,2 };
	double Point7[] = { 2,0,1 };
	double Point8[] = { -5,0,1 };
	double Radius1[3];
	double Radius2[3];

	//---------------------

	for (int i = 0; i < 3; i++)
	{
		Radius1[i] = Point6[i] - Point5[i];
		Radius2[i] = Point8[i] - Point7[i];
	}

	double Point_P[3];
	glPointSize(7);
	glBegin(GL_POINTS);
	glColor3d(0, 0.7, 0.5);
	glVertex3dv(Point5);
	glVertex3dv(Point7);
	glEnd();
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3d(0, 0, 0);
	glVertex3dv(Point5);
	glVertex3dv(Point6);
	glVertex3dv(Point7);
	glVertex3dv(Point8);
	glEnd();
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glColor3d(0.4, 0.2, 0.1);

	for (double t = 0; t <= 1.0001; t += 0.01)							
	{
		Point_P[0] = Ermit(Point5[0], Point7[0], Radius1[0], Radius2[0], t);
		Point_P[1] = Ermit(Point5[1], Point7[1], Radius1[1], Radius2[1], t);
		Point_P[2] = Ermit(Point5[2], Point7[2], Radius1[2], Radius2[2], t);
		glVertex3dv(Point_P); 
	}

	glEnd();

	double Point9[] = { 0,0,0 };
	double Point10[] = { -1,2,4 };
	double Point11[] = { -6,2,2 };
	double Point12[] = { -3,2,3 };
	double Radius3[3];
	double Radius4[3];

	for (int score = 0; score < 3; score++)
	{
		Radius3[score] = Point10[score] - Point9[score];
		Radius4[score] = Point12[score] - Point11[score];
	}

	glPointSize(7);
	glBegin(GL_POINTS);
	glColor3d(0.4, 0.76, 0.1);
	glVertex3dv(Point9);
	glVertex3dv(Point11);
	glEnd();
	glLineWidth(3);
	glBegin(GL_LINES);
	glColor3d(0, 0, 0);
	glVertex3dv(Point9);
	glVertex3dv(Point10);
	glVertex3dv(Point11);
	glVertex3dv(Point12);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glColor3d(0, 0.3, 0.76);

	for (double t = 0; t <= 1.0001; t += 0.01)							
	{
		Point_P[0] = Ermit(Point9[0], Point11[0], Radius3[0], Radius4[0], t);
		Point_P[1] = Ermit(Point9[1], Point11[1], Radius3[1], Radius4[1], t);
		Point_P[2] = Ermit(Point9[2], Point11[2], Radius3[2], Radius4[2], t);
		glVertex3dv(Point_P);
	}

	glEnd();
	glLineWidth(1);


	double Surface[4][4][3] = {
		{{1,5,1}, {2,5,0}, {3,5,0}, {5,5,1}},
		{{1,3,0}, {4,3,2}, {3,3,4}, {5,3,0}},
		{{1,2,0}, {4,2,2}, {3,4,2}, {5,2,0}},
		{{1,1,2}, {4,1,0}, {3,1,0}, {5,1,1}},
	};

	



	double Poin[3];
	double vec[3];
	glBegin(GL_LINE_STRIP);
	glColor3d(0, 0, 0);
	glVertex3dv(Point1);
	glVertex3dv(Point2);
	glVertex3dv(Point3);
	glVertex3dv(Point4);
	glEnd();
	glLineWidth(3); 
	glColor3d(0, 1, 0);
	glBegin(GL_LINE_STRIP);
	for (double t = 0; t <= 1.0001; t += 0.01)							
	{
		Poin[0] = Fun(Point1[0], Point2[0], Point3[0], Point4[0], t);
		Poin[1] = Fun(Point1[1], Point2[1], Point3[1], Point4[1], t);
		Poin[2] = Fun(Point1[2], Point2[2], Point3[2], Point4[2], t);
		glVertex3dv(Poin);
	}
	glEnd();
	glBegin(GL_LINE_STRIP);
	for (double t = 0; t <= t_max; t += 0.01)							
	{
		Poin[0] = Fun(Point1[0], Point2[0], Point3[0], Point4[0], t);
		Poin[1] = Fun(Point1[1], Point2[1], Point3[1], Point4[1], t);
		Poin[2] = Fun(Point1[2], Point2[2], Point3[2], Point4[2], t);

		
	}
	glEnd();

	double vecXer[] = { 1,0,0 };

	vec[0] = Tangent(Point1[0], Point2[0], Point3[0], Point4[0], t_max);
	vec[1] = Tangent(Point1[1], Point2[1], Point3[1], Point4[1], t_max);
	vec[2] = Tangent(Point1[2], Point2[2], Point3[2], Point4[2], t_max);

	double angle = Angle(vecXer[0], vecXer[1], vecXer[2], vec[0], vec[1], vec[2]);
	double AngleCopy = 0;
	glColor3d(1, 0, 0.453);
	glLineWidth(1);


	glPushMatrix();

	glTranslated(Poin[0], Poin[1], Poin[2]);
	glRotated(angle, 0, 1, 0);
	glScaled(0.4, 0.4, 0.4);

	figura(); 
	glPopMatrix();


	glColor3d(1, 0, 0);
	glBegin(GL_POINTS);
	glVertex3dv(Point1);
	glVertex3dv(Point2);
	glVertex3dv(Point3);
	glEnd();

	glColor3d(1, 0.2, 0.8);


	double Pp[3];
	glPointSize(4);
	glBegin(GL_POINTS);
	double u = 0;
	double v = 0;

	for (u = 0; u <= 1; u += 0.1)
	{
		for (v = 0; v <= 1; v += 0.1)
		{
			Pp[0] = poverhnost(Surface, u, v, 0);
			Pp[1] = poverhnost(Surface, u, v, 1);
			Pp[2] = poverhnost(Surface, u, v, 2);
			glVertex3dv(Pp);
		}
	}

	glEnd();
	u = 0;
	v = 0;
	while (u <= 1) {
		glBegin(GL_LINE_STRIP);
		while (v <= 1) {
			Pp[0] = poverhnost(Surface, u, v, 0);
			Pp[1] = poverhnost(Surface, u, v, 1);
			Pp[2] = poverhnost(Surface, u, v, 2);
			glVertex3dv(Pp);
			v += 0.1;
		}
		v = 0;
		u += 0.1;
		glEnd();
	}
	u = 0;
	v = 0;
	while (u <= 1) {
		glBegin(GL_LINE_STRIP);
		while (v <= 1) {
			Pp[0] = poverhnost(Surface, v, u, 0);
			Pp[1] = poverhnost(Surface, v, u, 1);
			Pp[2] = poverhnost(Surface, v, u, 2);
			glVertex3dv(Pp);
			v += 0.1;
		}
		v = 0;
		u += 0.1;
		glEnd();
	}
}