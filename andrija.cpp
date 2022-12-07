#include <iostream>
using namespace std;

class Vozilo {
private:
    string model;
    int pYear;

public:
    Vozilo() {}
    Vozilo(string model, int pYear) : model(model), pYear(pYear) {}

    string getModel() { return this->model; }
    int getpYear() { return this->pYear; }

    void setModel(string model) { this->model = model; }
    void setpYear(int pYear) { this->pYear = pYear; }

    ~Vozilo() {
        cout << "Deleting " << this->model << " from year: " << this->pYear;
    }

    bool operator<(const Vozilo &vozilo) {
        if (this->model == vozilo.model) {
            return this->pYear < vozilo.pYear;
        }
        return this->model < vozilo.model;
    }

    Vozilo &operator=(const Vozilo &vozilo) {
        this->model = vozilo.model;
        this->pYear = vozilo.pYear;

        return *this;
    }
};

void Zamijeni(Vozilo &first, Vozilo &second) {
    Vozilo temp = first;
    first = second;
    second = temp;
}

template <typename T> void SelectionSort(T A[], int N) {
    int i, j, min;
    for (i = 0; i < N; i++) {
        min = i;
        for (j = i + 1; j < N; j++) {
            if (A[j] < A[min]) {
                min = j;
            }
        }
        Zamijeni(A[i], A[min]);
    }
}

int main(void) {
    int n;
    cout << "Upisite zeljeni broj vozila (n) > ";
    Vozilo *A = new Vozilo[n];

    for (int i = 0; i < n; i++) {
        string model;
        int year;
        cout << "Upisite model auta i godinu proizvodnje > ";
        cin >> model;
        cin >> year;

        A[i] = Vozilo(model, year);
    }

    SelectionSort(A, n);

    for (int i = 0; i < n; i++) {
        cout << A[i].getModel() << " " << A[i].getpYear();
    }

    return 0;
}
//
// Created by Mateo on 07/12/2022.
//
