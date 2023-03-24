cmake_minimum_required(VERSION 3.21)
project(Marginean_Razvan_grupa314)

set(CMAKE_CXX_STANDARD 14)

include_directories(proiectSDA)

add_executable(Marginean_Razvan_grupa314
        proiectSDA/Array.h
        proiectSDA/dictionary.h
        proiectSDA/evenimenService.h
        proiectSDA/eveniment.h
        proiectSDA/evenimentRepository.h
        proiectSDA/main.cpp
        proiectSDA/Mesaj.h
        proiectSDA/MesajRepository.h
        proiectSDA/MesajService.h
        proiectSDA/node.h
        proiectSDA/prietenie.h
        proiectSDA/prietenieRepository.h
        proiectSDA/prietenieService.h
        proiectSDA/test.cpp
        proiectSDA/test.h
        proiectSDA/UserInterface.h
        proiectSDA/utilizator.h
        proiectSDA/utilizatorRepository.h
        proiectSDA/utilizatorService.h)
