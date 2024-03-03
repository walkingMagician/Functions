#pragma once


#include<iostream>
using namespace std;

void FillRand(int arr[], int n, int minRand = 0, int maxRand = 100);
void Print(int arr[], int n);

int Sum(int arr[], int n, int sum);
double Avg(int arr[], int n, int sum);
int minValueIn(int arr[], int n);
int maxValueIn(int arr[], int n);
void Sort(int arr[], int n);
void ShiftLeft(int arr[], int n, int f);

template<typename T>
void ShiftRaight(T arr[], int n, int f);