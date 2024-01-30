#include <iostream>
#include <cassert>

float timeTravel( float distanseTravel, float speedTravel){
    float time= distanseTravel / speedTravel;
    assert(time>0);
    return (time);
}

int main() {
    float speed;
    float distance ;
    std::cout << "Enter distanse and speed" << std::endl;
    std::cin >> distance >> speed;
    std::cout << "Time travel"<< timeTravel(distance, speed)<< std::endl;

    return 0;
}
