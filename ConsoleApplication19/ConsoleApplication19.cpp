#include <iostream>

using namespace std;

/**
 * @brief Пользовательский класс стека
*/
class MyStack {
private:
    int size = -1;
    int mus[100];
public:
    /**
     * @brief Конструктор класса стека
    */
    MyStack() {}
    /**
     * @brief Метод добавления элемента в стек
     * @param elem Параметр добавляемый в стек
    */
    void push(int elem) {
        mus[size + 1] = elem;
        size++;
    }
    /**
     * @brief Метод получения самого верхнего элемента стека
     * @return Значение самого верхнего элемента стека
    */
    int top() {
        return mus[size];
    }
    /**
     * @brief Метод удаления элементов стека
    */
    void pop() {
        size--;
    }
    /**
     * @brief Метод проверки стека на пустоту
     * @return True если стек пустой, False если не пустой
    */
    bool isEmpty() {
        return (size == -1);
    }
    /**
     * @brief Метод получения размера стека
     * @return Размер стека
    */
    int getSize() {
        return size;
    }
};

int main() {
    MyStack st;
    for (int i = 0; i < 10; i++) {
        int tmp = rand() % 20;
        cout << tmp << " ";
        st.push(tmp);
    }

    cout << endl;

    for (int i = 0; i < 10; i++) {
        cout << st.top() << " ";
        st.pop();
    }

    cout << endl << st.isEmpty() << endl;
}