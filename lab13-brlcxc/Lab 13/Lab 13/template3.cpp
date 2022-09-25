//#include "template.h"
//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//template<class T>
//arrayTemplate<T>::arrayTemplate(T targetOne, T targetTwo, int size) {
//	count = 0;
//	size->size;
//	targetOne->targetOne;
//	targetTwo->targetTwo;
//}
//
//template<class T>
//void arrayTemplate<T>::fillArray(ifstream fin, T array[]) {
//	while (fin.good()) {
//		fin >> array[count];
//		count++;
//	}
//}
//
//template<class T>
//void arrayTemplate<T>::mySwap(T array[], int size, int firstPosition, int secondPosition) {
//	T temp = array[firstPosition];
//	array[firstPosition] = array[secondPosition];
//	array[secondPosition] = temp;
//}
//
//template<class T>
//T arrayTemplate<T>::myMin(T array[], int size) {
//	T lowest = array[0];
//
//	for (int i = 1; i < size; ++i) {
//		if (array[i] < lowest)
//			lowest = array[i];
//	}
//
//	return lowest;
//}
//
//template<class T>
//T arrayTemplate<T>::myMax(T array[], int size) {
//	T highest = array[0];
//
//	for (int i = 1; i < size; ++i) {
//		if (array[i] > highest)
//			highest = array[i];
//	}
//
//	return highest;
//}
//
//template<class T>
//int arrayTemplate<T>::mySearch(T array[], int size) {
//	for (int i = 1; i < size; ++i) {
//		if (array[i] == target)
//			return i;
//	}
//
//	return -1;
//}
//
//template<class T>
//void arrayTemplate<T>::writeData(T array[]){
//	
//}