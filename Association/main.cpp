// #include <iostream>
// using namespace std;

// class Engine
// {
// public:
//     Engine()
//     {
//         cout << "Constructor of Engine is called " << endl;
//     }
//     void start()
//     {
//         cout << "Engine started" << endl;
//     }
//     ~Engine()
//     {
//         cout << "Destructor of Engine is called" << endl;
//     }
// };

// class Car
// {
// private:
//     Engine e2;
//     Engine *engine; // Pointer - Aggregation

// public:
//     Car(Engine *eng)
//     {
//         engine = eng;
//         cout << "Constructor of car " << endl;
//     }

//     void startCar()
//     {
//         engine->start();
//     }

//     ~Car()
//     {
//         cout << "Destructor of Car is called" << endl;
//     }
// };

// int main()
// {
//     Engine e;       // Engine exists independently
//     Car car(&e);    // Car is given an Engine
//     car.startCar(); // Uses the Engine
//     return 0;
// }

// constructor and destructor preference in composition
// #include <iostream>
// using namespace std;

// class Engine {
// public:
//     Engine() {
//         cout << "Engine Constructor\n";
//     }
//     ~Engine() {
//         cout << "Engine Destructor\n";
//     }
// };

// class Car {
//     Engine e;  // Composition: Engine is a part of Car
// public:
//     Car() {
//         cout << "Car Constructor\n";
//     }
//     ~Car() {
//         cout << "Car Destructor\n";
//     }
// };

// int main() {
//     Car car;  // This creates a Car object which contains an Engine
//     return 0;
// }