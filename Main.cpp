/**
* \brief bu program kullanicidan diledigi kadar sayi alir ve bunlari diziye atayip yeniden siralar.
*/
#include <iostream>
using namespace std;
/**
* \brief bu fonksiyon diziyi buyukten kucuge yeniden siralar.
* \param array: islem yapilacak dizi
* \param size: dizinin boyutu
*/
void FromLargest(int* array, int size) {
    int j;
    for (int i = 0; i < size; i++) {
        for (j = 0; j < size - i-1; j++) {

            if (array[j] < array[j + 1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
}
/**
* \brief bu fonksiyon diziyi kucukten buyuge yeniden siralar.
* \param array: islem yapilacak dizi
* \param size: dizinin boyutu
*/
void FromSmallest(int* array, int size) {
    int j;
    for (int i = 0; i < size; i++) {
        for (j = 0; j < size - i - 1; j++) {

            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
}
// fonksiyon tanimlamalari
void FromLargest(int* array, int size);
void FromSmallest(int* array, int size);

int main() {
    int process;
    //dizi boyutu alinir
    int maxSize;
    cout << "Enter the size of the array: ";
    cin >> maxSize;

    int* array = new int[maxSize]; //bellegi verimli kullanmak ve kullaniciyi kisitlamamak adina new anahtar kelimesiyle bir diziye isaret edildi.

    //dizi elemanlari alinir.
    cout << "Enter the numbers: " << endl;
    for (int i = 0; i < maxSize; i++) {
        cin >> array[i]; //enter tusu ile islemi devam ettirin
    }
    //yapilmak istenen islem secilir
    cout << "1: To sort from largest to smallest " << endl << "2: To sort from smallest to largest" << endl;
    cin >> process;
    if (process == 1) {
        FromLargest(array, maxSize); //dizi degisti
    }
    else if (process == 2) {
        FromSmallest(array, maxSize); //dizi degisti
    }
    else
        cout << "INCORRECT ENTRY!";

    delete[] array; // bellek asimini onlemek icin ilgili yeri serbest biraktik.

    return 0;
}
