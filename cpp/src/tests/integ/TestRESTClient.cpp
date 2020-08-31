#include <comm/RESTClient.h>

int main(){

    comm::RESTClient rest;
    while(true){
        auto messages =rest.get_messages();

        for(auto t : messages){
            std::cout << (int)t->type() << std::endl;
        }
    }
}